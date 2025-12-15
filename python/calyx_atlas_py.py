#!/usr/bin/env python3
"""
CALYX-OPTIMIZED PYTHON BUNDLER

Bundles Python modules into a single file FOR LLM CONSUMPTION.
Key features:
1. Explicit structure (no implicit boundaries)
2. Declarative metadata (no heuristics)
3. Lossless encoding (fully reversible)
4. Flat, addressable sections (easy for attention heads)

USAGE:
    python3 calyx_bundle.py --output bundle.py
    # Then in ChatGPT/Claude: "Here's my bundled project..."
"""

import json
import ast
import sys
from pathlib import Path
from typing import Dict, List, Any, Optional, Set
from dataclasses import dataclass, asdict
from datetime import datetime

# ============================================================================
# CALYX BUNDLE FORMAT
# ============================================================================
"""
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
"""

@dataclass
class CalyxModule:
    """Lossless module representation"""
    name: str                     # "albeo.scoring"
    path: str                     # "albeo/scoring.py"
    ast_dump: str                 # AST for structural analysis
    source: str                   # Original source (preserved exactly)
    imports: List[str]            # ALL imports (internal + external)
    exports: List[str]            # What this module exports
    dependencies: List[str]       # Internal dependencies only
    category: str                 # "ALBEO", "FSM", "BRIDGE", etc.

class CalyxBundler:
    """Transformer-optimized bundler"""
    
    def __init__(self, root: str = ".", verbose: bool = False):
        self.root = Path(root)
        self.verbose = verbose
        self.modules: Dict[str, CalyxModule] = {}
        
    def log(self, msg: str):
        if self.verbose:
            print(f"[CALYX] {msg}")
    
    def analyze_module(self, path: Path) -> CalyxModule:
        """Analyze module WITHOUT modifying source"""
        rel_path = path.relative_to(self.root)
        module_name = str(rel_path).replace("/", ".").replace("\\", ".")[:-3]
        
        if module_name.endswith(".__init__"):
            module_name = module_name[:-9]
        
        with open(path, "r", encoding="utf-8") as f:
            source = f.read()
        
        # Parse AST for structural analysis
        imports = []
        exports = []
        
        try:
            tree = ast.parse(source)
            
            # Walk AST to find imports
            for node in ast.walk(tree):
                if isinstance(node, ast.Import):
                    for alias in node.names:
                        imports.append(alias.name)
                elif isinstance(node, ast.ImportFrom):
                    if node.module:
                        imports.append(node.module)
            
            # Find exports: top-level functions, classes, and assignments
            for node in tree.body:
                if isinstance(node, ast.Assign):
                    # Handle assignments like x = 1, y = 2
                    for target in node.targets:
                        if isinstance(target, ast.Name):
                            exports.append(target.id)
                        elif isinstance(target, ast.Tuple):
                            # Handle tuple unpacking: a, b = 1, 2
                            for elt in target.elts:
                                if isinstance(elt, ast.Name):
                                    exports.append(elt.id)
                elif isinstance(node, (ast.FunctionDef, ast.ClassDef, ast.AsyncFunctionDef)):
                    exports.append(node.name)
            
            # Remove duplicates
            exports = list(set(exports))
            
        except SyntaxError:
            # If AST parsing fails, still capture the source
            pass
        
        # Determine CALYX layer from path
        category = self._detect_layer(rel_path)
        
        return CalyxModule(
            name=module_name,
            path=str(rel_path),
            ast_dump=str(ast.dump(ast.parse(source)) if 'tree' in locals() else ""),
            source=source,
            imports=imports,
            exports=exports,
            dependencies=[i for i in imports if any(i.startswith(p) for p in ["albeo", "kern", "bridge", "fsm", "nexus", "mneme"])],
            category=category
        )
    
    def _detect_layer(self, path: Path) -> str:
        """Detect CALYX layer from path"""
        parts = str(path).split("/")
        if len(parts) > 0:
            first = parts[0].lower()
            if first == "albeo":
                return "ALBEO"
            elif first in ["kern", "bridge"]:
                return "BRIDGE"
            elif first == "fsm":
                return "FSM"
            elif first == "nexus":
                return "NEXUS"
            elif first == "mneme":
                return "MNEME"
        return "UTILITY"
    
    def discover(self, patterns: Optional[List[str]] = None) -> None:
        """Discover and analyze all modules"""
        if patterns is None:
            patterns = ["**/*.py"]
        
        excluded_dirs = {"__pycache__", ".pytest_cache", ".git", ".venv", "venv", "env"}
        excluded_files = {"test_", "_test.py", "conftest.py"}
        
        for pattern in patterns:
            for path in self.root.glob(pattern):
                # Skip excluded directories
                if any(excl in str(path) for excl in excluded_dirs):
                    continue
                
                # Skip excluded files
                if any(excl in path.name for excl in excluded_files):
                    continue
                
                if path.is_file() and path.suffix == ".py":
                    module = self.analyze_module(path)
                    self.modules[module.name] = module
                    self.log(f"Analyzed: {module.name} ({module.category})")
    
    def build_dependency_graph(self) -> Dict[str, List[str]]:
        """Build explicit dependency graph"""
        graph = {}
        for name, module in self.modules.items():
            # Only track internal dependencies
            deps = []
            for imp in module.imports:
                # Check if this import is in our bundle
                # Look for exact match or prefix match
                found = False
                for mod_name in self.modules:
                    if imp == mod_name:
                        deps.append(mod_name)
                        found = True
                        break
                    elif imp.startswith(mod_name + "."):
                        deps.append(mod_name)
                        found = True
                        break
                
                # Also check for package imports (e.g., "from albeo import scoring")
                if not found:
                    for mod_name in self.modules:
                        if "." in imp:
                            base = imp.split(".")[0]
                            if base == mod_name.split(".")[0]:
                                deps.append(mod_name)
                                break
            
            # Remove duplicates
            graph[name] = list(set(deps))
        
        # Sort by dependencies (topological sort)
        sorted_names = []
        visited = set()
        temp = set()  # For cycle detection
        
        def visit(name):
            if name in temp:
                # Circular dependency detected
                return
            if name in visited:
                return
            
            temp.add(name)
            for dep in graph.get(name, []):
                if dep in self.modules:
                    visit(dep)
            temp.remove(name)
            visited.add(name)
            sorted_names.append(name)
        
        for name in self.modules:
            if name not in visited:
                visit(name)
        
        # Reorder modules based on dependencies
        sorted_modules = {}
        for name in sorted_names:
            sorted_modules[name] = self.modules[name]
        self.modules = sorted_modules
        
        return graph
    
    def generate_bundle(self, output_path: str) -> str:
        """Generate LLM-optimized bundle"""
        
        # Build metadata
        metadata = {
            "format_version": "calyx-1.0",
            "total_modules": len(self.modules),
            "layers": {},
            "external_deps": set(),
            "generated_at": datetime.utcnow().isoformat() + "Z"
        }
        
        # Count by layer and collect external dependencies
        for module in self.modules.values():
            metadata["layers"][module.category] = metadata["layers"].get(module.category, 0) + 1
            for imp in module.imports:
                # Check if this is external (not in our bundle)
                is_external = True
                for mod_name in self.modules:
                    if imp == mod_name or imp.startswith(mod_name + "."):
                        is_external = False
                        break
                    # Check for package imports
                    if "." in imp:
                        base = imp.split(".")[0]
                        if base == mod_name.split(".")[0]:
                            is_external = False
                            break
                
                if is_external:
                    metadata["external_deps"].add(imp)
        
        metadata["external_deps"] = sorted(list(metadata["external_deps"]))
        
        # Generate bundle content
        lines = []
        
        # ==================== SECTION 1: METADATA ====================
        lines.append("# " + "=" * 70)
        lines.append("# CALYX BUNDLE - LLM OPTIMIZED FORMAT")
        lines.append("# " + "=" * 70)
        lines.append("")
        lines.append("CALYX_METADATA = " + json.dumps(metadata, indent=2))
        lines.append("")
        
        # ==================== SECTION 2: MODULE MAP ====================
        lines.append("# " + "=" * 70)
        lines.append("# MODULE MAP (name → path, layer)")
        lines.append("# " + "=" * 70)
        lines.append("MODULE_MAP = {")
        for name, module in self.modules.items():
            lines.append(f'    "{name}": {{')
            lines.append(f'        "path": "{module.path}",')
            lines.append(f'        "layer": "{module.category}",')
            lines.append(f'        "exports": {json.dumps(module.exports)}')
            lines.append(f'    }},')
        lines.append("}")
        lines.append("")
        
        # ==================== SECTION 3: DEPENDENCY GRAPH ====================
        lines.append("# " + "=" * 70)
        lines.append("# DEPENDENCY GRAPH (module → [dependencies])")
        lines.append("# " + "=" * 70)
        graph = self.build_dependency_graph()
        lines.append("DEPENDENCY_GRAPH = {")
        for name, deps in graph.items():
            lines.append(f'    "{name}": {json.dumps(deps)},')
        lines.append("}")
        lines.append("")
        
        # ==================== SECTION 4: MODULE CONTENTS ====================
        lines.append("# " + "=" * 70)
        lines.append("# MODULE CONTENTS (PRESERVED EXACTLY)")
        lines.append("# " + "=" * 70)
        lines.append("MODULE_CONTENTS = {")
        for name, module in self.modules.items():
            lines.append(f'    # {"-" * 60}')
            lines.append(f'    # MODULE: {name}')
            lines.append(f'    # LAYER: {module.category}')
            lines.append(f'    # PATH: {module.path}')
            lines.append(f'    # {"-" * 60}')
            lines.append(f'    "{name}": """')
            
            # Escape triple quotes in source
            escaped = module.source.replace('"""', '\\"\\"\\"')
            lines.append(escaped)
            
            lines.append('""",')
            lines.append("")
        lines.append("}")
        lines.append("")
        
        # ==================== SECTION 5: PUBLIC API ====================
        lines.append("# " + "=" * 70)
        lines.append("# PUBLIC API (what to expose)")
        lines.append("# " + "=" * 70)
        lines.append("")
        lines.append("from typing import List")
        lines.append("")
        lines.append("def get_module(name: str) -> str:")
        lines.append('    """Retrieve module source by name"""')
        lines.append('    return MODULE_CONTENTS.get(name, "")')
        lines.append("")
        lines.append("def list_modules(layer: str = None) -> List[str]:")
        lines.append('    """List modules, optionally filtered by layer"""')
        lines.append("    if layer:")
        lines.append("        return [name for name, meta in MODULE_MAP.items() if meta['layer'] == layer]")
        lines.append("    return list(MODULE_CONTENTS.keys())")
        lines.append("")
        lines.append("def get_dependencies(name: str) -> List[str]:")
        lines.append('    """Get module dependencies"""')
        lines.append("    return DEPENDENCY_GRAPH.get(name, [])")
        lines.append("")
        lines.append("def get_layer_stats() -> dict:")
        lines.append('    """Get statistics by layer"""')
        lines.append("    return CALYX_METADATA['layers']")
        lines.append("")
        lines.append("def get_external_deps() -> List[str]:")
        lines.append('    """Get external dependencies"""')
        lines.append("    return CALYX_METADATA['external_deps']")
        lines.append("")
        
        # ==================== SECTION 6: IMPORT SHIM ====================
        lines.append("# " + "=" * 70)
        lines.append("# RUNTIME SHIM (for execution)")
        lines.append("# " + "=" * 70)
        lines.append("import sys")
        lines.append("from types import ModuleType")
        lines.append("")
        lines.append("def _calyx_import_shim():")
        lines.append('    """Register modules in sys.modules"""')
        lines.append("    # Only create packages that exist in our bundle")
        lines.append("    packages = set(name.split('.')[0] for name in MODULE_CONTENTS)")
        lines.append("    ")
        lines.append("    for pkg in packages:")
        lines.append("        # Create package")
        lines.append(f'        pkg_name = f"{{__name__}}.{{pkg}}"')
        lines.append("        pkg_mod = ModuleType(pkg_name)")
        lines.append("        sys.modules[pkg_name] = pkg_mod")
        lines.append("        ")
        lines.append("        # Add submodules that belong to this package")
        lines.append("        for full_name in MODULE_CONTENTS:")
        lines.append("            if full_name.startswith(pkg + '.'):")
        lines.append("                sub_name = full_name[len(pkg)+1:]")
        lines.append(f'                sub_full = f"{{pkg_name}}.{{sub_name}}"')
        lines.append("                sub_mod = ModuleType(sub_full)")
        lines.append("                ")
        lines.append("                # Execute the module code in its namespace")
        lines.append("                exec(MODULE_CONTENTS[full_name], sub_mod.__dict__)")
        lines.append("                sys.modules[sub_full] = sub_mod")
        lines.append("                setattr(pkg_mod, sub_name, sub_mod)")
        lines.append("")
        lines.append("# Auto-register on import")
        lines.append("_calyx_import_shim()")
        lines.append("")
        
        # ==================== SECTION 7: MAIN ENTRY ====================
        lines.append("# " + "=" * 70)
        lines.append("# MAIN ENTRY POINT (if run as script)")
        lines.append("# " + "=" * 70)
        lines.append("if __name__ == '__main__':")
        lines.append('    print("CALYX Bundle Loaded")')
        lines.append('    print(f"Modules: {len(MODULE_CONTENTS)}")')
        lines.append('    print(f"Layers: {CALYX_METADATA[\"layers\"]}")')
        lines.append('    print("\\nAvailable commands:")')
        lines.append('    print("  - get_module(name)")')
        lines.append('    print("  - list_modules(layer=None)")')
        lines.append('    print("  - get_dependencies(name)")')
        lines.append('    print("  - get_layer_stats()")')
        lines.append('    print("  - get_external_deps()")')
        
        # Write to file
        content = "\n".join(lines)
        output_file = self.root / output_path
        with open(output_file, "w", encoding="utf-8") as f:
            f.write(content)
        
        self.log(f"Bundle written: {output_file}")
        
        # Stats
        print(f"\n{'='*60}")
        print("CALYX BUNDLE COMPLETE")
        print(f"{'='*60}")
        print(f"Output: {output_file}")
        print(f"Modules: {len(self.modules)}")
        print(f"Layers: {metadata['layers']}")
        print(f"Size: {len(content) / 1024:.1f} KB")
        print(f"External dependencies: {len(metadata['external_deps'])}")
        print(f"{'='*60}")
        
        return str(output_file)

def main():
    """Command line interface"""
    import argparse
    
    parser = argparse.ArgumentParser(
        description="Bundle Python modules for LLM consumption (CALYX format)"
    )
    parser.add_argument(
        "--output", "-o",
        default="calyx_bundle.py",
        help="Output file (default: calyx_bundle.py)"
    )
    parser.add_argument(
        "--root", "-r",
        default=".",
        help="Project root (default: .)"
    )
    parser.add_argument(
        "--patterns", "-p",
        nargs="+",
        default=["**/*.py"],
        help="Glob patterns (default: all .py files)"
    )
    parser.add_argument(
        "--verbose", "-v",
        action="store_true",
        help="Verbose output"
    )
    
    args = parser.parse_args()
    
    bundler = CalyxBundler(root=args.root, verbose=args.verbose)
    bundler.discover(args.patterns)
    bundler.generate_bundle(args.output)

if __name__ == "__main__":
    main()
