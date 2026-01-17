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
    "typing",
    "yajph.resources.provider"
  ],
  "generated_at": "2026-01-16T22:50:30.947037Z"
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
    "provider": {
        "path": "provider.py",
        "layer": "UTILITY",
        "exports": ["ResourceProvider"]
    },
}

# ======================================================================
# DEPENDENCY GRAPH (module → [dependencies])
# ======================================================================
DEPENDENCY_GRAPH = {
    "__init__": [],
    "provider": [],
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
Resource management module.
Maintains purity - no I/O, just data transformation.
\"\"\"

from yajph.resources.provider import ResourceProvider

__all__ = ['ResourceProvider']


""",

    # ------------------------------------------------------------
    # MODULE: provider
    # LAYER: UTILITY
    # PATH: provider.py
    # ------------------------------------------------------------
    "provider": """
\"\"\"
Resource suggestion system with immutable design.

This module provides educational resources for failed checks.
All methods maintain immutability through functional patterns.
\"\"\"

from typing import Dict, List, Optional


class ResourceProvider:
    \"\"\"
    Centralized resource management with extensibility.
    
    Design principle: Immutable state.
    - get_resources: Pure read operation
    - add_resource: Returns NEW instance (functional style)
    
    This maintains purity - no I/O, just data transformation.
    \"\"\"
    
    DEFAULT_RESOURCES = {
        'sql': [
            'https://sqlzoo.net',
            'https://w3schools.com/sql'
        ],
        'python': [
            'https://python.org/tutorial',
            'https://codecademy.com/python'
        ],
        'credit_score': [
            'https://creditkarma.com',
            'https://annualcreditreport.com'
        ],
        'dti': [
            'https://consumerfinance.gov/debt-to-income'
        ],
        'income': [
            'https://bls.gov/ooh',
            'https://salary.com'
        ],
    }
    
    def __init__(self, custom_resources: Optional[Dict[str, List[str]]] = None):
        \"\"\"
        Initialize with optional custom resources.
        
        Maintains immutability by creating new dict.
        
        Args:
            custom_resources: Additional resources to merge with defaults
        \"\"\"
        self._resources = {**self.DEFAULT_RESOURCES}
        if custom_resources:
            self._resources.update(custom_resources)
    
    def get_resources(self, skill: str) -> List[str]:
        \"\"\"
        Pure function: Retrieve resources for a skill.
        
        Args:
            skill: Skill name (case-insensitive)
            
        Returns:
            List of resource URLs
            
        Example:
            >>> provider = ResourceProvider()
            >>> provider.get_resources('python')
            ['https://python.org/tutorial', ...]
        \"\"\"
        return self._resources.get(skill.lower(), [])
    
    def add_resource(self, skill: str, url: str) -> 'ResourceProvider':
        \"\"\"
        Functional-style resource addition.
        
        Returns NEW instance to maintain immutability.
        Original instance is unchanged.
        
        Args:
            skill: Skill name
            url: Resource URL to add
            
        Returns:
            New ResourceProvider instance with added resource
            
        Example:
            >>> provider1 = ResourceProvider()
            >>> provider2 = provider1.add_resource('rust', 'https://doc.rust-lang.org')
            >>> # provider1 is unchanged, provider2 has new resource
        \"\"\"
        new_resources = {**self._resources}
        if skill.lower() not in new_resources:
            new_resources[skill.lower()] = []
        new_resources[skill.lower()].append(url)
        return ResourceProvider(new_resources)


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