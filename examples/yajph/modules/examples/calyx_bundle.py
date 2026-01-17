# ======================================================================
# CALYX BUNDLE - LLM OPTIMIZED FORMAT
# ======================================================================

CALYX_METADATA = {
  "format_version": "calyx-1.0",
  "total_modules": 4,
  "layers": {
    "UTILITY": 4
  },
  "external_deps": [
    "json",
    "yajph",
    "yajph.io.loaders"
  ],
  "generated_at": "2026-01-16T22:49:17.621762Z"
}

# ======================================================================
# MODULE MAP (name → path, layer)
# ======================================================================
MODULE_MAP = {
    "demo_hiring": {
        "path": "demo_hiring.py",
        "layer": "UTILITY",
        "exports": ["demo_hiring"]
    },
    "demo_loan": {
        "path": "demo_loan.py",
        "layer": "UTILITY",
        "exports": ["demo_loan_approval"]
    },
    "__init__": {
        "path": "__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "demo_simple": {
        "path": "demo_simple.py",
        "layer": "UTILITY",
        "exports": ["demo_simple_api"]
    },
}

# ======================================================================
# DEPENDENCY GRAPH (module → [dependencies])
# ======================================================================
DEPENDENCY_GRAPH = {
    "demo_hiring": [],
    "demo_loan": [],
    "__init__": [],
    "demo_simple": [],
}

# ======================================================================
# MODULE CONTENTS (PRESERVED EXACTLY)
# ======================================================================
MODULE_CONTENTS = {
    # ------------------------------------------------------------
    # MODULE: demo_hiring
    # LAYER: UTILITY
    # PATH: demo_hiring.py
    # ------------------------------------------------------------
    "demo_hiring": """
#!/usr/bin/env python3
\"\"\"
Hiring Demo: Job candidate screening with growth paths
\"\"\"

from yajph import Router
import json


def demo_hiring():
    \"\"\"Demo: Job candidate screening with improvement resources\"\"\"
    print("💼 HIRING DEMO")
    print("=" * 50)
    
    rules = {
        'requirements': {
            'python': 3,  # out of 5
            'sql': 4,     # out of 5
        },
        'must_have': ['portfolio']
    }
    
    # Weak candidate
    weak_candidate = {
        'python': '2/5',  # too low
        'sql': '2/5',     # too low
        'portfolio': 'github.com/user/projects'
    }
    
    router = Router(rules=rules)
    result = router.evaluate(weak_candidate)
    
    print("❌ REJECTION (with growth path):")
    print(json.dumps({
        'passed': result.passed,
        'rejected_on': result.rejected_on,
        'missing': result.missing,
        'resources': result.resources,
        'fix': result.fix
    }, indent=2))
    
    print("" + "=" * 50)
    
    # Strong candidate
    strong_candidate = {
        'python': '4/5',
        'sql': '5/5',
        'portfolio': 'github.com/expert/amazing-work'
    }
    
    result = router.evaluate(strong_candidate)
    print("✅ APPROVAL:")
    print(json.dumps({
        'passed': result.passed,
        'fix': result.fix
    }, indent=2))


if __name__ == "__main__":
    demo_hiring()


""",

    # ------------------------------------------------------------
    # MODULE: demo_loan
    # LAYER: UTILITY
    # PATH: demo_loan.py
    # ------------------------------------------------------------
    "demo_loan": """
#!/usr/bin/env python3
\"\"\"
Loan Approval Demo: Explainable loan decisions
\"\"\"

from yajph import Router
import json


def demo_loan_approval():
    \"\"\"Demo: Loan approval with explainable rejection\"\"\"
    print("🏦 LOAN APPROVAL DEMO")
    print("=" * 50)
    
    # Define rules
    rules = {
        'requirements': {
            'credit_score': 680,
            'dti': '43%',
            'income': 50000
        },
        'must_have': ['bank_account', 'employment_verification']
    }
    
    # Test bad applicant
    bad_applicant = {
        'credit_score': 620,  # too low
        'dti': '47%',         # too high
        'income': 45000,      # too low
        'bank_account': True,
        # missing employment_verification
    }
    
    router = Router(rules=rules)
    result = router.evaluate(bad_applicant)
    
    print("❌ REJECTION (with explanation):")
    print(json.dumps({
        'passed': result.passed,
        'rejected_on': result.rejected_on,
        'your_score': result.your_score,
        'threshold': result.threshold,
        'fix': result.fix,
        'resources': result.resources
    }, indent=2))
    
    print("" + "=" * 50)
    
    # Test good applicant
    good_applicant = {
        'credit_score': 720,
        'dti': '38%',
        'income': 75000,
        'bank_account': True,
        'employment_verification': True
    }
    
    result = router.evaluate(good_applicant)
    print("✅ APPROVAL:")
    print(json.dumps({
        'passed': result.passed,
        'fix': result.fix
    }, indent=2))


if __name__ == "__main__":
    demo_loan_approval()


""",

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
    # MODULE: demo_simple
    # LAYER: UTILITY
    # PATH: demo_simple.py
    # ------------------------------------------------------------
    "demo_simple": """
#!/usr/bin/env python3
\"\"\"
Simple API Demo: Show the minimal API
\"\"\"

from yajph import Router


def demo_simple_api():
    \"\"\"Demo: Show the simple, intuitive API\"\"\"
    print("🚀 SIMPLE API DEMO")
    print("=" * 50)
    
    # One-liner setup
    router = Router(rules={
        'requirements': {'age': 18},
        'must_have': ['id']
    })
    
    # One-liner evaluation
    result = router.evaluate({'age': 16, 'id': True})
    
    print("Code:")
    print("  router = Router(rules={'requirements': {'age': 18}})")
    print("  result = router.evaluate({'age': 16})")
    
    print(f"Result:")
    print(f"  Passed: {result.passed}")
    print(f"  Fix: {result.fix}")
    
    print("" + "=" * 50)
    print("🎉 Every 'no' comes with a roadmap to 'yes'")


if __name__ == "__main__":
    demo_simple_api()


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