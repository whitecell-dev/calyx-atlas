#!/usr/bin/env lua
--[[
CALYX-OPTIMIZED LUA BUNDLER

Bundles Lua modules into a single file FOR LLM CONSUMPTION.
Key features:
1. Explicit structure (no implicit boundaries)
2. Declarative metadata (no heuristics)
3. Lossless encoding (fully reversible)
4. Flat, addressable sections (easy for attention heads)

USAGE:
    lua calyx_bundle.lua --output bundle.lua
    # Then in ChatGPT/Claude: "Here's my bundled Lua project..."
]]

local json = require("dkjson") -- You might need to install a JSON library
local lfs = require("lfs") -- LuaFileSystem for directory traversal
local io = io
local os = os
local string = string
local table = table
local debug = debug

-- ============================================================================
-- CALYX BUNDLE FORMAT
-- ============================================================================
--[[
The bundle is structured as EXPLICIT SECTIONS:
1. METADATA (what this is, how to read it)
2. MODULE_MAP (flat dictionary of module→content)
3. IMPORT_GRAPH (dependencies as edges)
4. MODULE_CONTENTS (actual code, unmodified)
5. PUBLIC_API (what to expose)

This is UGLY for humans but PERFECT for transformers:
- No implicit structure
- No hidden state
- No complex parsing needed
- Every token has a clear "belongs_to"
]]

local CalyxModule = {}
CalyxModule.__index = CalyxModule

function CalyxModule.new(name, path, source, imports, exports, dependencies, category)
	return setmetatable({
		name = name, -- "fsm.state_machine"
		path = path, -- "fsm/state_machine.lua"
		source = source, -- Original source (preserved exactly)
		imports = imports or {}, -- ALL requires (internal + external)
		exports = exports or {}, -- What this module exports
		dependencies = dependencies or {}, -- Internal dependencies only
		category = category or "UTILITY", -- "FSM", "BRIDGE", etc.
	}, CalyxModule)
end

local CalyxBundler = {}
CalyxBundler.__index = CalyxBundler

function CalyxBundler.new(root, verbose)
	root = root or "."
	if root == "." then
		root = lfs.currentdir()
	end

	return setmetatable({
		root = root,
		verbose = verbose or false,
		modules = {},
		module_paths = {},
	}, CalyxBundler)
end

function CalyxBundler:log(msg)
	if self.verbose then
		print("[CALYX-LUA] " .. msg)
	end
end

function CalyxBundler:split_path(path)
	local parts = {}
	for part in path:gmatch("[^/\\]+") do
		table.insert(parts, part)
	end
	return parts
end

function CalyxBundler:normalize_path(path)
	return path:gsub("\\", "/")
end

function CalyxBundler:relative_path(full_path)
	local normalized_full = self:normalize_path(full_path)
	local normalized_root = self:normalize_path(self.root)

	if normalized_full:sub(1, #normalized_root) == normalized_root then
		return normalized_full:sub(#normalized_root + 2) -- +2 to skip "/"
	end
	return normalized_full
end

function CalyxBundler:extract_imports(source)
	local imports = {}

	-- Match require statements
	for match in source:gmatch("require%s*%(%s*['\"]([^'\"]+)['\"]%s*%)") do
		table.insert(imports, match)
	end

	-- Match require without parentheses
	for match in source:gmatch("require%s+['\"]([^'\"]+)['\"]") do
		table.insert(imports, match)
	end

	-- Match local x = require(...)
	for match in source:gmatch("local%s+[%w_,%s]+=%s*require%s*%(%s*['\"]([^'\"]+)['\"]%s*%)") do
		table.insert(imports, match)
	end

	return imports
end

function CalyxBundler:extract_exports(source)
	local exports = {}

	-- Find module.exports pattern
	if source:find("module%.exports") then
		-- This is a module.exports style file
		-- Look for assignments to module.exports
		for match in source:gmatch("module%.exports%.([%w_]+)%s*=") do
			table.insert(exports, match)
		end

		-- Look for module.exports = { ... } pattern
		for match in source:gmatch("module%.exports%s*=%s*{([^}]+)}") do
			for name in match:gmatch("([%w_]+)%s*=") do
				table.insert(exports, name)
			end
			for name in match:gmatch("([%w_]+)%s*,?%s*") do
				if name ~= "" and name ~= " " then
					table.insert(exports, name)
				end
			end
		end
	end

	-- Find return statements at module level
	for match in source:gmatch("return%s+{([^}]+)}") do
		for name in match:gmatch("([%w_]+)%s*=") do
			table.insert(exports, name)
		end
		for name in match:gmatch("([%w_]+)%s*,?%s*") do
			if name ~= "" and name ~= " " then
				table.insert(exports, name)
			end
		end
	end

	-- Find global function declarations
	for match in source:gmatch("function%s+([%w_%.]+)%(") do
		-- Check if it's not a method (no dot in name)
		if not match:find("%.") then
			table.insert(exports, match)
		end
	end

	-- Remove duplicates
	local seen = {}
	local unique = {}
	for _, export in ipairs(exports) do
		if not seen[export] then
			seen[export] = true
			table.insert(unique, export)
		end
	end

	return unique
end

function CalyxBundler:detect_layer(rel_path)
	local parts = self:split_path(rel_path)
	if #parts > 0 then
		local first = parts[1]:lower()
		if first == "albeo" then
			return "ALBEO"
		elseif first == "kern" or first == "bridge" then
			return "BRIDGE"
		elseif first == "fsm" then
			return "FSM"
		elseif first == "nexus" then
			return "NEXUS"
		elseif first == "mneme" then
			return "MNEME"
		elseif first == "impo" then
			return "IMPO"
		end
	end
	return "UTILITY"
end

function CalyxBundler:analyze_module(path)
	local rel_path = self:relative_path(path)
	local module_name = rel_path:gsub("%.lua$", ""):gsub("/", "."):gsub("\\", ".")

	-- Remove __init__ suffix if present
	if module_name:sub(-9) == ".__init__" then
		module_name = module_name:sub(1, -10)
	end

	-- Read file
	local file, err = io.open(path, "r")
	if not file then
		self:log("ERROR reading " .. path .. ": " .. err)
		return nil
	end

	local source = file:read("*all")
	file:close()

	-- Extract imports and exports
	local imports = self:extract_imports(source)
	local exports = self:extract_exports(source)
	local category = self:detect_layer(rel_path)

	-- Determine internal dependencies
	local dependencies = {}
	for _, imp in ipairs(imports) do
		-- Check if this import is internal
		for known_name, _ in pairs(self.modules) do
			if imp == known_name or imp:find("^" .. known_name .. "%.") then
				table.insert(dependencies, known_name)
				break
			end
		end
	end

	-- Create module
	return CalyxModule.new(module_name, rel_path, source, imports, exports, dependencies, category)
end

function CalyxBundler:discover(pattern)
	pattern = pattern or "**/*.lua"
	local excluded_dirs = {
		[".git"] = true,
		["__pycache__"] = true,
		[".pytest_cache"] = true,
		[".venv"] = true,
		["venv"] = true,
		["env"] = true,
		["node_modules"] = true,
	}

	local excluded_files = {
		["test_"] = true,
		["_test.lua"] = true,
		["conftest.lua"] = true,
	}

	local function should_exclude(path)
		for excl, _ in pairs(excluded_dirs) do
			if path:find(excl, 1, true) then
				return true
			end
		end

		local filename = path:match("([^/\\]+)$") or ""
		for pattern, _ in pairs(excluded_files) do
			if filename:find(pattern, 1, true) then
				return true
			end
		end

		return false
	end

	local function scan_dir(dir, pattern_parts, depth)
		if depth > 10 then
			return
		end -- Prevent infinite recursion

		for entry in lfs.dir(dir) do
			if entry ~= "." and entry ~= ".." then
				local path = dir .. "/" .. entry
				local attr = lfs.attributes(path)

				if attr then
					if attr.mode == "directory" then
						if not should_exclude(path) then
							scan_dir(path, pattern_parts, depth + 1)
						end
					elseif attr.mode == "file" and entry:match("%.lua$") then
						if not should_exclude(path) then
							local rel_path = self:relative_path(path)
							local module = self:analyze_module(path)
							if module then
								self.modules[module.name] = module
								self.module_paths[rel_path] = module.name
								self:log("Analyzed: " .. module.name .. " (" .. module.category .. ")")
							end
						end
					end
				end
			end
		end
	end

	scan_dir(self.root, {}, 0)
end

function CalyxBundler:build_dependency_graph()
	local graph = {}

	for name, module in pairs(self.modules) do
		local deps = {}
		local seen = {}

		for _, imp in ipairs(module.imports) do
			-- Check if this import is in our bundle
			for mod_name, _ in pairs(self.modules) do
				if imp == mod_name or imp:find("^" .. mod_name .. "%.") then
					if not seen[mod_name] then
						seen[mod_name] = true
						table.insert(deps, mod_name)
					end
					break
				end
			end
		end

		graph[name] = deps
		self:log("Dependencies of " .. name .. ": " .. table.concat(deps, ", "))
	end

	-- Topological sort
	local sorted_names = {}
	local visited = {}
	local temp = {} -- For cycle detection

	local function visit(name)
		if temp[name] then
			-- Circular dependency detected
			self:log("WARNING: Circular dependency detected: " .. name)
			return
		end
		if visited[name] then
			return
		end

		temp[name] = true
		for _, dep in ipairs(graph[name] or {}) do
			if self.modules[dep] then
				visit(dep)
			end
		end
		temp[name] = nil
		visited[name] = true
		table.insert(sorted_names, name)
	end

	for name, _ in pairs(self.modules) do
		if not visited[name] then
			visit(name)
		end
	end

	-- Reorder modules based on dependencies
	local sorted_modules = {}
	for _, name in ipairs(sorted_names) do
		sorted_modules[name] = self.modules[name]
	end
	self.modules = sorted_modules

	return graph
end

function CalyxBundler:escape_string(str)
	-- Escape triple quotes and backslashes
	return str:gsub("\\", "\\\\"):gsub('"""', '\\"\\"\\"'):gsub("\n", "\\n"):gsub("\r", "\\r")
end

function CalyxBundler:generate_bundle(output_path)
	-- Build metadata
	local metadata = {
		format_version = "calyx-lua-1.0",
		total_modules = 0,
		layers = {},
		external_deps = {},
		generated_at = os.date("!%Y-%m-%dT%H:%M:%SZ"),
	}

	-- Count modules by layer and collect external dependencies
	local external_seen = {}
	for name, module in pairs(self.modules) do
		metadata.total_modules = metadata.total_modules + 1
		metadata.layers[module.category] = (metadata.layers[module.category] or 0) + 1

		for _, imp in ipairs(module.imports) do
			-- Check if this is external (not in our bundle)
			local is_external = true
			for mod_name, _ in pairs(self.modules) do
				if imp == mod_name or imp:find("^" .. mod_name .. "%.") then
					is_external = false
					break
				end
			end

			if is_external and not external_seen[imp] then
				external_seen[imp] = true
				table.insert(metadata.external_deps, imp)
			end
		end
	end

	table.sort(metadata.external_deps)

	-- Build dependency graph
	local graph = self:build_dependency_graph()

	-- Generate bundle content
	local lines = {}

	-- ==================== SECTION 1: METADATA ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- CALYX LUA BUNDLE - LLM OPTIMIZED FORMAT")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "")
	table.insert(lines, "local CALYX_METADATA = " .. json.encode(metadata, { indent = true }))
	table.insert(lines, "")

	-- ==================== SECTION 2: MODULE MAP ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- MODULE MAP (name → path, layer)")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "local MODULE_MAP = {")

	for name, module in pairs(self.modules) do
		table.insert(lines, string.format('    ["%s"] = {', name))
		table.insert(lines, string.format('        path = "%s",', module.path))
		table.insert(lines, string.format('        layer = "%s",', module.category))
		table.insert(lines, string.format("        exports = %s,", json.encode(module.exports)))
		table.insert(lines, "    },")
	end

	table.insert(lines, "}")
	table.insert(lines, "")

	-- ==================== SECTION 3: DEPENDENCY GRAPH ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- DEPENDENCY GRAPH (module → [dependencies])")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "local DEPENDENCY_GRAPH = {")

	for name, deps in pairs(graph) do
		table.insert(lines, string.format('    ["%s"] = %s,', name, json.encode(deps)))
	end

	table.insert(lines, "}")
	table.insert(lines, "")

	-- ==================== SECTION 4: MODULE CONTENTS ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- MODULE CONTENTS (PRESERVED EXACTLY)")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "local MODULE_CONTENTS = {")

	for name, module in pairs(self.modules) do
		table.insert(lines, string.format("    -- %s", string.rep("-", 60)))
		table.insert(lines, string.format("    -- MODULE: %s", name))
		table.insert(lines, string.format("    -- LAYER: %s", module.category))
		table.insert(lines, string.format("    -- PATH: %s", module.path))
		table.insert(lines, string.format("    -- %s", string.rep("-", 60)))
		table.insert(lines, string.format('    ["%s"] = [[', name))

		-- Add source code exactly as-is
		table.insert(lines, module.source)

		table.insert(lines, "]],")
		table.insert(lines, "")
	end

	table.insert(lines, "}")
	table.insert(lines, "")

	-- ==================== SECTION 5: PUBLIC API ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- PUBLIC API (what to expose)")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "")
	table.insert(lines, "local function get_module(name)")
	table.insert(lines, "    -- Retrieve module source by name")
	table.insert(lines, '    return MODULE_CONTENTS[name] or ""')
	table.insert(lines, "end")
	table.insert(lines, "")
	table.insert(lines, "local function list_modules(layer)")
	table.insert(lines, "    -- List modules, optionally filtered by layer")
	table.insert(lines, "    local result = {}")
	table.insert(lines, "    for name, meta in pairs(MODULE_MAP) do")
	table.insert(lines, "        if not layer or meta.layer == layer then")
	table.insert(lines, "            table.insert(result, name)")
	table.insert(lines, "        end")
	table.insert(lines, "    end")
	table.insert(lines, "    return result")
	table.insert(lines, "end")
	table.insert(lines, "")
	table.insert(lines, "local function get_dependencies(name)")
	table.insert(lines, "    -- Get module dependencies")
	table.insert(lines, "    return DEPENDENCY_GRAPH[name] or {}")
	table.insert(lines, "end")
	table.insert(lines, "")
	table.insert(lines, "local function get_layer_stats()")
	table.insert(lines, "    -- Get statistics by layer")
	table.insert(lines, "    return CALYX_METADATA.layers")
	table.insert(lines, "end")
	table.insert(lines, "")
	table.insert(lines, "local function get_external_deps()")
	table.insert(lines, "    -- Get external dependencies")
	table.insert(lines, "    return CALYX_METADATA.external_deps")
	table.insert(lines, "end")
	table.insert(lines, "")

	-- ==================== SECTION 6: RUNTIME SHIM ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- RUNTIME SHIM (for execution)")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "local function _calyx_import_shim()")
	table.insert(lines, "    -- Register modules in package.loaded")
	table.insert(lines, "    -- Only create packages that exist in our bundle")
	table.insert(lines, "    local packages = {}")
	table.insert(lines, "    for name, _ in pairs(MODULE_CONTENTS) do")
	table.insert(lines, '        local first_dot = name:find(".")')
	table.insert(lines, "        if first_dot then")
	table.insert(lines, "            local pkg = name:sub(1, first_dot - 1)")
	table.insert(lines, "            packages[pkg] = true")
	table.insert(lines, "        end")
	table.insert(lines, "    end")
	table.insert(lines, "")
	table.insert(lines, "    for pkg, _ in pairs(packages) do")
	table.insert(lines, "        -- Create package table")
	table.insert(lines, "        local pkg_name = pkg")
	table.insert(lines, "        local pkg_table = {}")
	table.insert(lines, "        package.loaded[pkg_name] = pkg_table")
	table.insert(lines, "")
	table.insert(lines, "        -- Add submodules that belong to this package")
	table.insert(lines, "        for full_name, content in pairs(MODULE_CONTENTS) do")
	table.insert(lines, '            if full_name:find("^" .. pkg .. ".") then')
	table.insert(lines, "                local sub_name = full_name:sub(#pkg + 2)")
	table.insert(lines, '                local sub_full = pkg .. "." .. sub_name')
	table.insert(lines, "")
	table.insert(lines, "                -- Execute the module code in its own environment")
	table.insert(lines, "                local env = {")
	table.insert(lines, "                    module = { exports = {} },")
	table.insert(lines, "                    require = require,")
	table.insert(lines, "                    _G = _G,")
	table.insert(lines, "                    ... = ...")
	table.insert(lines, "                }")
	table.insert(lines, "                setmetatable(env, { __index = _G })")
	table.insert(lines, '                local fn, err = load(content, sub_full, "t", env)')
	table.insert(lines, "                if fn then")
	table.insert(lines, "                    local result = fn()")
	table.insert(lines, "                    if env.module.exports and next(env.module.exports) then")
	table.insert(lines, "                        package.loaded[sub_full] = env.module.exports")
	table.insert(lines, "                        pkg_table[sub_name] = env.module.exports")
	table.insert(lines, "                    elseif result then")
	table.insert(lines, "                        package.loaded[sub_full] = result")
	table.insert(lines, "                        pkg_table[sub_name] = result")
	table.insert(lines, "                    else")
	table.insert(lines, "                        package.loaded[sub_full] = env")
	table.insert(lines, "                        pkg_table[sub_name] = env")
	table.insert(lines, "                    end")
	table.insert(lines, "                else")
	table.insert(lines, '                    error("Failed to load " .. sub_full .. ": " .. err)')
	table.insert(lines, "                end")
	table.insert(lines, "            end")
	table.insert(lines, "        end")
	table.insert(lines, "    end")
	table.insert(lines, "end")
	table.insert(lines, "")
	table.insert(lines, "-- Auto-register on load")
	table.insert(lines, "_calyx_import_shim()")
	table.insert(lines, "")

	-- ==================== SECTION 7: MAIN ENTRY ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- MAIN ENTRY POINT (if run as script)")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, 'if arg and arg[0] and debug.getinfo(1, "S").what == "main" then')
	table.insert(lines, '    print("CALYX Lua Bundle Loaded")')
	table.insert(lines, '    print(string.format("Modules: %d", #list_modules()))')
	table.insert(lines, '    print(string.format("Layers: %s", json.encode(get_layer_stats())))')
	table.insert(lines, '    print("")')
	table.insert(lines, '    print("Available commands:")')
	table.insert(lines, '    print("  - get_module(name)")')
	table.insert(lines, '    print("  - list_modules(layer)")')
	table.insert(lines, '    print("  - get_dependencies(name)")')
	table.insert(lines, '    print("  - get_layer_stats()")')
	table.insert(lines, '    print("  - get_external_deps()")')
	table.insert(lines, "end")
	table.insert(lines, "")

	-- ==================== SECTION 8: EXPORTS ====================
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "-- EXPORTS")
	table.insert(lines, "-- " .. string.rep("=", 70))
	table.insert(lines, "return {")
	table.insert(lines, "    get_module = get_module,")
	table.insert(lines, "    list_modules = list_modules,")
	table.insert(lines, "    get_dependencies = get_dependencies,")
	table.insert(lines, "    get_layer_stats = get_layer_stats,")
	table.insert(lines, "    get_external_deps = get_external_deps,")
	table.insert(lines, "    metadata = CALYX_METADATA,")
	table.insert(lines, "    module_map = MODULE_MAP,")
	table.insert(lines, "    dependency_graph = DEPENDENCY_GRAPH,")
	table.insert(lines, "    module_contents = MODULE_CONTENTS,")
	table.insert(lines, "}")

	-- Write to file
	local content = table.concat(lines, "\n")
	local output_file = output_path

	if not output_file:match("^/") and not output_file:match("^%a:") then
		output_file = self.root .. "/" .. output_path
	end

	local out, err = io.open(output_file, "w")
	if not out then
		error("Failed to write bundle: " .. err)
	end

	out:write(content)
	out:close()

	self:log("Bundle written: " .. output_file)

	-- Stats
	print("\n" .. string.rep("=", 60))
	print("CALYX LUA BUNDLE COMPLETE")
	print(string.rep("=", 60))
	print("Output: " .. output_file)
	print(string.format("Modules: %d", metadata.total_modules))
	print("Layers: " .. json.encode(metadata.layers))
	print(string.format("Size: %.1f KB", #content / 1024))
	print(string.format("External dependencies: %d", #metadata.external_deps))
	print(string.rep("=", 60))

	return output_file
end

-- Command line interface
local function main()
	local argparse = {
		output = "calyx_bundle.lua",
		root = ".",
		pattern = "**/*.lua",
		verbose = false,
	}

	-- Simple argument parsing
	local i = 1
	while i <= #arg do
		if arg[i] == "--output" or arg[i] == "-o" then
			i = i + 1
			argparse.output = arg[i] or argparse.output
		elseif arg[i] == "--root" or arg[i] == "-r" then
			i = i + 1
			argparse.root = arg[i] or argparse.root
		elseif arg[i] == "--pattern" or arg[i] == "-p" then
			i = i + 1
			argparse.pattern = arg[i] or argparse.pattern
		elseif arg[i] == "--verbose" or arg[i] == "-v" then
			argparse.verbose = true
		elseif arg[i] == "--help" or arg[i] == "-h" then
			print("Usage: lua calyx_bundle.lua [options]")
			print("Options:")
			print("  -o, --output FILE   Output file (default: calyx_bundle.lua)")
			print("  -r, --root DIR      Project root (default: .)")
			print("  -p, --pattern PAT   Glob pattern (default: **/*.lua)")
			print("  -v, --verbose       Verbose output")
			print("  -h, --help          Show this help")
			os.exit(0)
		end
		i = i + 1
	end

	local bundler = CalyxBundler.new(argparse.root, argparse.verbose)
	bundler:discover(argparse.pattern)
	bundler:generate_bundle(argparse.output)
end

-- Run if called directly
if arg and arg[0] and debug.getinfo(1, "S").what == "main" then
	local ok, err = pcall(main)
	if not ok then
		print("ERROR: " .. err)
		os.exit(1)
	end
end

return CalyxBundler
