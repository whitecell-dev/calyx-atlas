-- ========================================================================
-- calyx_fsm.lua - JSON-driven FSM Engine for CALYX
-- ========================================================================

local json = require("dkjson") -- any JSON parser will do

local machine = {}
machine.__index = machine

-- Load FSM spec
local function load_fsm_spec(path)
	local f = assert(io.open(path, "r"))
	local text = f:read("*all")
	f:close()
	return assert(json.decode(text))
end

-- Helper for timestamp
local function timestamp()
	return os.date("%Y-%m-%d %H:%M:%S")
end

-- Success/failure wrappers
local function success(data)
	return true, { ok = true, data = data, timestamp = timestamp() }
end

local function failure(err, details)
	return false, { ok = false, error_type = err, details = details, timestamp = timestamp() }
end

-- ========================================================================
-- CREATE NEW FSM
-- ========================================================================
function machine.create(fsm_json_path)
	local spec = load_fsm_spec(fsm_json_path)

	local fsm = {
		current = spec.initial or "IDLE",
		states = spec.states,
		transitions = {}, -- event → {from, to, validation}
		handlers = {}, -- module-based handlers
		spec = spec,
		asyncState = "none",
		_context = nil,
	}

	setmetatable(fsm, machine)

	-- Build transitions
	for _, t in ipairs(spec.transitions) do
		fsm.transitions[t.event] = t
	end

	return fsm
end

-- ========================================================================
-- VALIDATION ENGINE (Guard + No-More-Lies)
-- ========================================================================
function machine:_validate_transition(event, from, to, ctx)
	local rule = self.transitions[event]
	if not rule then
		return false, "no_such_event"
	end

	-- Check correct 'from'
	if rule.from ~= "*" and rule.from ~= from then
		return false, "invalid_from_state"
	end

	-- Check invariants
	local state_def = self.states[from]
	if state_def.invariants then
		for _, inv in ipairs(state_def.invariants) do
			-- Placeholder check hook
			-- In real CALYX: load constitution.json + semantic.json and validate
			if inv == "no_global_state" and ctx.data.creates_global_state then
				return false, "violates_invariant:" .. inv
			end
		end
	end

	return true
end

-- ========================================================================
-- TRANSITION PROCESSING
-- ========================================================================
function machine:_run_handler(state_name, phase, ctx)
	local st = self.states[state_name]
	if not st or not st.handlers then
		return
	end

	local fn = st.handlers[phase]
	if fn then
		return fn(ctx)
	end
end

function machine:_transition(event, params)
	params = params or {}

	local rule = self.transitions[event]
	if not rule then
		return failure("unknown_event", event)
	end

	local ctx = {
		event = event,
		from = self.current,
		to = rule.to,
		data = params.data or {},
		options = params.options or {},
	}

	-- Validate semantics
	local ok, err = self:_validate_transition(event, ctx.from, ctx.to, ctx)
	if not ok then
		return failure("validation_failed", err)
	end

	-- Leave phase
	local leave_result = self:_run_handler(ctx.from, "onleave", ctx)
	if leave_result == "async" then
		self.asyncState = event .. "_LEAVE_WAIT"
		self._context = ctx
		return true
	end

	-- Fast path: complete transition
	self.current = ctx.to
	self:_run_handler(ctx.to, "onenter", ctx)
	self:_run_handler(ctx.event, "onafter", ctx)

	return success(ctx)
end

-- PUBLIC API
function machine:fire(event, params)
	if self.asyncState ~= "none" then
		return failure("transition_in_progress", self.asyncState)
	end
	return self:_transition(event, params)
end

function machine:resume()
	if self.asyncState == "none" then
		return failure("no_async_transition")
	end

	local ctx = assert(self._context)
	self.asyncState = "none"
	self.current = ctx.to

	self:_run_handler(ctx.to, "onenter", ctx)
	self:_run_handler(ctx.event, "onafter", ctx)

	return success(ctx)
end

return machine
