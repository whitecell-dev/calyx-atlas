# ======================================================================
# CALYX BUNDLE - LLM OPTIMIZED FORMAT
# ======================================================================

CALYX_METADATA = {
  "format_version": "calyx-1.0",
  "total_modules": 2,
  "layers": {
    "UTILITY": 2
  },
  "external_deps": [
    "json",
    "typing",
    "yajph.core.router",
    "yajph.io.loaders",
    "yaml"
  ],
  "generated_at": "2026-01-16T22:49:49.505236Z"
}

# ======================================================================
# MODULE MAP (name → path, layer)
# ======================================================================
MODULE_MAP = {
    "__init__": {
        "path": "__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "loaders": {
        "path": "loaders.py",
        "layer": "UTILITY",
        "exports": ["evaluate_yaml", "attach_router", "load_data", "load_rules"]
    },
}

# ======================================================================
# DEPENDENCY GRAPH (module → [dependencies])
# ======================================================================
DEPENDENCY_GRAPH = {
    "__init__": [],
    "loaders": [],
}

# ======================================================================
# MODULE CONTENTS (PRESERVED EXACTLY)
# ======================================================================
MODULE_CONTENTS = {
    # ------------------------------------------------------------
    # MODULE: __init__
    # LAYER: UTILITY
    # PATH: __init__.py
    # ------------------------------------------------------------
    "__init__": """
\"\"\"
I/O boundary layer.
All file operations are isolated to this module.
\"\"\"

from yajph.io.loaders import evaluate_yaml, attach_router, load_rules, load_data

__all__ = ['evaluate_yaml', 'attach_router', 'load_rules', 'load_data']


""",

    # ------------------------------------------------------------
    # MODULE: loaders
    # LAYER: UTILITY
    # PATH: loaders.py
    # ------------------------------------------------------------
    "loaders": """
\"\"\"
File loading and I/O boundary functions.

BOUNDARY: All I/O operations are isolated to this module.
This function is the boundary transform layer.
\"\"\"

import yaml
import json
from typing import Dict, Any, Optional
from yajph.core.router import Router


def load_rules(filepath: str) -> Dict[str, Any]:
    \"\"\"
    Load rules from YAML file.
    
    I/O Boundary: File reading isolated to this function.
    
    Args:
        filepath: Path to YAML rules file
        
    Returns:
        Dictionary of rules
        
    Raises:
        FileNotFoundError: If file doesn't exist
        yaml.YAMLError: If YAML is malformed
    \"\"\"
    with open(filepath, 'r') as f:
        return yaml.safe_load(f)


def load_data(filepath: str) -> Dict[str, Any]:
    \"\"\"
    Load data from YAML or JSON file.
    
    I/O Boundary: File reading isolated to this function.
    
    Args:
        filepath: Path to data file (.yaml, .yml, or .json)
        
    Returns:
        Dictionary of data
        
    Raises:
        FileNotFoundError: If file doesn't exist
        ValueError: If file format is unsupported
    \"\"\"
    with open(filepath, 'r') as f:
        if filepath.endswith('.yaml') or filepath.endswith('.yml'):
            return yaml.safe_load(f)
        elif filepath.endswith('.json'):
            return json.load(f)
        else:
            raise ValueError(f"Unsupported file format: {filepath}")


def evaluate_yaml(rules_file: str, data_file: str) -> Dict[str, Any]:
    \"\"\"
    CLI-friendly function for YAML-to-JSON evaluation.
    
    I/O Boundary: This function reads files and delegates to Router.
    This function is the boundary transform layer.
    
    Args:
        rules_file: Path to rules YAML file
        data_file: Path to data file (YAML or JSON)
        
    Returns:
        Dictionary representation of Decision
        
    Example:
        >>> result = evaluate_yaml('rules.yaml', 'application.json')
        >>> print(result['passed'])
        True
    \"\"\"
    rules = load_rules(rules_file)
    data = load_data(data_file)
    
    router = Router(rules=rules)
    result = router.evaluate(data)
    
    return result.to_dict()


def attach_router(
    input_schema: str, 
    output_schema: str,
    llm_router: Optional[Any] = None
) -> Router:
    \"\"\"
    Factory function to attach YAJPH to existing application.
    
    ARCHITECTURAL INVARIANT: This factory signature is stable.
    
    Args:
        input_schema: Path to input schema
        output_schema: Path to output schema
        llm_router: Optional LLM router for future integration
        
    Returns:
        Configured Router instance
    \"\"\"
    # Load schemas if they're file paths
    rules = None
    if input_schema.endswith('.yaml'):
        rules = load_rules(input_schema)
    
    return Router(
        input_schema=input_schema,
        output_schema=output_schema,
        rules=rules
    )


""",

}

# ======================================================================
# PUBLIC API (what to expose)
# ======================================================================

from typing import List

def get_module(name: str) -> str:
    """Retrieve module source by name"""
    return MODULE_CONTENTS.get(name, "")

def list_modules(layer: str = None) -> List[str]:
    """List modules, optionally filtered by layer"""
    if layer:
        return [name for name, meta in MODULE_MAP.items() if meta['layer'] == layer]
    return list(MODULE_CONTENTS.keys())

def get_dependencies(name: str) -> List[str]:
    """Get module dependencies"""
    return DEPENDENCY_GRAPH.get(name, [])

def get_layer_stats() -> dict:
    """Get statistics by layer"""
    return CALYX_METADATA['layers']

def get_external_deps() -> List[str]:
    """Get external dependencies"""
    return CALYX_METADATA['external_deps']

# ======================================================================
# RUNTIME SHIM (for execution)
# ======================================================================
import sys
from types import ModuleType

def _calyx_import_shim():
    """Register modules in sys.modules"""
    # Only create packages that exist in our bundle
    packages = set(name.split('.')[0] for name in MODULE_CONTENTS)
    
    for pkg in packages:
        # Create package
        pkg_name = f"{__name__}.{pkg}"
        pkg_mod = ModuleType(pkg_name)
        sys.modules[pkg_name] = pkg_mod
        
        # Add submodules that belong to this package
        for full_name in MODULE_CONTENTS:
            if full_name.startswith(pkg + '.'):
                sub_name = full_name[len(pkg)+1:]
                sub_full = f"{pkg_name}.{sub_name}"
                sub_mod = ModuleType(sub_full)
                
                # Execute the module code in its namespace
                exec(MODULE_CONTENTS[full_name], sub_mod.__dict__)
                sys.modules[sub_full] = sub_mod
                setattr(pkg_mod, sub_name, sub_mod)

# Auto-register on import
_calyx_import_shim()

# ======================================================================
# MAIN ENTRY POINT (if run as script)
# ======================================================================
if __name__ == '__main__':
    print("CALYX Bundle Loaded")
    print(f"Modules: {len(MODULE_CONTENTS)}")
    print(f"Layers: {CALYX_METADATA["layers"]}")
    print("\nAvailable commands:")
    print("  - get_module(name)")
    print("  - list_modules(layer=None)")
    print("  - get_dependencies(name)")
    print("  - get_layer_stats()")
    print("  - get_external_deps()")