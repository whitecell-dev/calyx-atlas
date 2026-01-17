# ======================================================================
# CALYX BUNDLE - LLM OPTIMIZED FORMAT
# ======================================================================

CALYX_METADATA = {
  "format_version": "calyx-1.0",
  "total_modules": 15,
  "layers": {
    "UTILITY": 15
  },
  "external_deps": [
    "argparse",
    "dataclasses",
    "enum",
    "json",
    "typing",
    "yajph",
    "yajph.cli.main",
    "yajph.core.evaluator",
    "yajph.core.models",
    "yajph.core.router",
    "yajph.io.loaders",
    "yajph.resources.provider",
    "yaml"
  ],
  "generated_at": "2026-01-16T22:28:02.311341Z"
}

# ======================================================================
# MODULE MAP (name → path, layer)
# ======================================================================
MODULE_MAP = {
    "__init__": {
        "path": "__init__.py",
        "layer": "UTILITY",
        "exports": ["__version__", "__all__"]
    },
    "resources": {
        "path": "resources/__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "resources.provider": {
        "path": "resources/provider.py",
        "layer": "UTILITY",
        "exports": ["ResourceProvider"]
    },
    "cli.main": {
        "path": "cli/main.py",
        "layer": "UTILITY",
        "exports": ["main"]
    },
    "cli": {
        "path": "cli/__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "core.models": {
        "path": "core/models.py",
        "layer": "UTILITY",
        "exports": ["RuleDefinition", "RuleType", "Decision"]
    },
    "core": {
        "path": "core/__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "core.router": {
        "path": "core/router.py",
        "layer": "UTILITY",
        "exports": ["Router"]
    },
    "core.evaluator": {
        "path": "core/evaluator.py",
        "layer": "UTILITY",
        "exports": ["RuleEvaluator"]
    },
    "io": {
        "path": "io/__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "io.loaders": {
        "path": "io/loaders.py",
        "layer": "UTILITY",
        "exports": ["evaluate_yaml", "load_data", "attach_router", "load_rules"]
    },
    "examples.demo_hiring": {
        "path": "examples/demo_hiring.py",
        "layer": "UTILITY",
        "exports": ["demo_hiring"]
    },
    "examples.demo_loan": {
        "path": "examples/demo_loan.py",
        "layer": "UTILITY",
        "exports": ["demo_loan_approval"]
    },
    "examples": {
        "path": "examples/__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "examples.demo_simple": {
        "path": "examples/demo_simple.py",
        "layer": "UTILITY",
        "exports": ["demo_simple_api"]
    },
}

# ======================================================================
# DEPENDENCY GRAPH (module → [dependencies])
# ======================================================================
DEPENDENCY_GRAPH = {
    "__init__": [],
    "resources": [],
    "resources.provider": [],
    "cli.main": [],
    "cli": [],
    "core.models": [],
    "core": [],
    "core.router": [],
    "core.evaluator": [],
    "io": [],
    "io.loaders": [],
    "examples.demo_hiring": [],
    "examples.demo_loan": [],
    "examples": [],
    "examples.demo_simple": [],
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
YAJPH: The Anti-Black-Box Engine
Public API - exports the stable interface
\"\"\"

# Core exports (FROZEN interface)
from yajph.core.models import Decision, RuleType
from yajph.core.router import Router
from yajph.core.evaluator import RuleEvaluator

# Resource management
from yajph.resources.provider import ResourceProvider

# I/O utilities
from yajph.io.loaders import evaluate_yaml, attach_router

# CLI entry point
from yajph.cli.main import main

# Version
__version__ = "0.2.0"

__all__ = [
    'Decision',
    'RuleType',
    'Router',
    'RuleEvaluator',
    'ResourceProvider',
    'evaluate_yaml',
    'attach_router',
    'main',
]


""",

    # ------------------------------------------------------------
    # MODULE: resources
    # LAYER: UTILITY
    # PATH: resources/__init__.py
    # ------------------------------------------------------------
    "resources": """
\"\"\"
Resource management module.
Maintains purity - no I/O, just data transformation.
\"\"\"

from yajph.resources.provider import ResourceProvider

__all__ = ['ResourceProvider']


""",

    # ------------------------------------------------------------
    # MODULE: resources.provider
    # LAYER: UTILITY
    # PATH: resources/provider.py
    # ------------------------------------------------------------
    "resources.provider": """
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

    # ------------------------------------------------------------
    # MODULE: cli.main
    # LAYER: UTILITY
    # PATH: cli/main.py
    # ------------------------------------------------------------
    "cli.main": """
\"\"\"
Command-line interface entry point.

I/O Boundary: This module handles all CLI interaction.
No business logic - only argument parsing and output formatting.
\"\"\"

import json
import argparse
from yajph.io.loaders import evaluate_yaml


def main() -> None:
    \"\"\"
    Simple CLI for testing and quick evaluations.
    
    I/O Boundary: This function handles all CLI interaction.
    All business logic is delegated to core modules.
    
    Example usage:
        $ yajph --rules rules.yaml --input application.json
        $ yajph --rules rules.yaml --input app.json --output result.json --verbose
    \"\"\"
    parser = argparse.ArgumentParser(
        description="YAJPH: The Anti-Black-Box Engine",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=\"\"\"
Examples:
  yajph --rules loan_rules.yaml --input applicant.json
  yajph --rules hiring.yaml --input candidate.yaml --verbose
  yajph --rules rules.yaml --input data.json --output decision.json

Every "no" comes with a roadmap to "yes".
        \"\"\"
    )
    
    parser.add_argument(
        '--rules',
        required=True,
        help='YAML rules file defining requirements'
    )
    parser.add_argument(
        '--input',
        required=True,
        help='Input data file (YAML or JSON)'
    )
    parser.add_argument(
        '--output',
        help='Output JSON file (optional, prints to stdout if not specified)'
    )
    parser.add_argument(
        '--verbose',
        action='store_true',
        help='Show detailed audit trail'
    )
    parser.add_argument(
        '--pretty',
        action='store_true',
        default=True,
        help='Pretty-print JSON output (default: True)'
    )
    
    args = parser.parse_args()
    
    # Delegate to I/O layer
    result = evaluate_yaml(args.rules, args.input)
    
    # Filter audit trail unless verbose
    if not args.verbose:
        result.pop('audit_trail', None)
    
    # Format output
    indent = 2 if args.pretty else None
    output_json = json.dumps(result, indent=indent)
    
    # Write to file or stdout
    if args.output:
        with open(args.output, 'w') as f:
            f.write(output_json)
        print(f"✓ Decision written to {args.output}")
    else:
        print(output_json)


if __name__ == "__main__":
    main()


""",

    # ------------------------------------------------------------
    # MODULE: cli
    # LAYER: UTILITY
    # PATH: cli/__init__.py
    # ------------------------------------------------------------
    "cli": """
\"\"\"
Command-line interface module.
\"\"\"

from yajph.cli.main import main

__all__ = ['main']


""",

    # ------------------------------------------------------------
    # MODULE: core.models
    # LAYER: UTILITY
    # PATH: core/models.py
    # ------------------------------------------------------------
    "core.models": """
\"\"\"
Core data models for YAJPH.

ARCHITECTURAL INVARIANT: Decision dataclass is FROZEN.
Only add optional fields to maintain backward compatibility.
\"\"\"

import json
from typing import Dict, Any, List, Optional, Callable
from dataclasses import dataclass, asdict, field
from enum import Enum


class RuleType(Enum):
    \"\"\"Enumeration of supported rule types for type safety\"\"\"
    NUMERIC_MIN = "numeric_min"
    NUMERIC_MAX = "numeric_max"
    PERCENTAGE_MAX = "percentage_max"
    REQUIRED = "required"
    CUSTOM = "custom"


@dataclass
class Decision:
    \"\"\"
    The explainable decision result.
    
    ARCHITECTURAL INVARIANT: This structure is FROZEN.
    New fields must be optional to maintain backward compatibility.
    
    Fields:
        passed: Whether the evaluation passed
        score: Optional numeric score
        missing: Dict of missing/insufficient fields
        rejected_on: Field name that caused rejection
        your_score: User's actual value
        threshold: Required threshold value
        fix: Human-readable fix suggestion
        resources: List of educational resources
        audit_trail: Evaluation steps taken
        metadata: Optional additional context
    \"\"\"
    passed: bool
    score: Optional[float] = None
    missing: Dict[str, str] = field(default_factory=dict)
    rejected_on: Optional[str] = None
    your_score: Optional[Any] = None
    threshold: Optional[Any] = None
    fix: Optional[str] = None
    resources: List[str] = field(default_factory=list)
    audit_trail: List[str] = field(default_factory=list)
    metadata: Optional[Dict[str, Any]] = field(default_factory=dict)
    
    def to_json(self) -> str:
        \"\"\"Convert to JSON string\"\"\"
        return json.dumps(asdict(self), indent=2)
    
    def to_dict(self) -> Dict[str, Any]:
        \"\"\"Convert to dictionary\"\"\"
        return asdict(self)


@dataclass
class RuleDefinition:
    \"\"\"
    Internal structure for type-safe rule representation.
    NOT exposed in public API - maintains encapsulation.
    
    This is the transform layer between config and execution.
    \"\"\"
    name: str
    rule_type: RuleType
    threshold: Any
    comparator: Callable[[Any, Any], bool]
    error_message_template: str


""",

    # ------------------------------------------------------------
    # MODULE: core
    # LAYER: UTILITY
    # PATH: core/__init__.py
    # ------------------------------------------------------------
    "core": """
\"\"\"
Core computation module - ZERO I/O
All functions are pure and testable in isolation
\"\"\"

from yajph.core.models import Decision, RuleType, RuleDefinition
from yajph.core.router import Router
from yajph.core.evaluator import RuleEvaluator

__all__ = [
    'Decision',
    'RuleType', 
    'RuleDefinition',
    'Router',
    'RuleEvaluator',
]


""",

    # ------------------------------------------------------------
    # MODULE: core.router
    # LAYER: UTILITY
    # PATH: core/router.py
    # ------------------------------------------------------------
    "core.router": """
\"\"\"
Core Router implementation.

ARCHITECTURAL INVARIANT: Router.evaluate() signature is FROZEN.
Input: Dict[str, Any]
Output: Decision
\"\"\"

from typing import Dict, Any, Optional
from yajph.core.models import Decision
from yajph.core.evaluator import RuleEvaluator
from yajph.resources.provider import ResourceProvider


class Router:
    \"\"\"
    The core YAJPH reasoning engine.
    
    ARCHITECTURAL INVARIANT: Public interface is FROZEN.
    - Constructor signature must remain compatible
    - evaluate() input/output contract cannot change
    
    This class orchestrates rule evaluation but delegates
    pure computation to RuleEvaluator.
    \"\"\"
    
    def __init__(
        self, 
        input_schema: Optional[str] = None, 
        output_schema: Optional[str] = None,
        rules: Optional[Dict[str, Any]] = None, 
        models: Optional[Dict[str, str]] = None,
        resource_provider: Optional[ResourceProvider] = None
    ):
        \"\"\"
        Initialize Router with rules and configuration.
        
        Args:
            input_schema: Path to input schema (future use)
            output_schema: Path to output schema (future use)
            rules: Dictionary of evaluation rules
            models: Model configuration (future use)
            resource_provider: Custom resource provider
        \"\"\"
        self.input_schema = input_schema
        self.output_schema = output_schema
        self.rules = rules or {}
        self.models = models or {}
        self._resource_provider = resource_provider or ResourceProvider()
    
    def evaluate(self, data: Dict[str, Any]) -> Decision:
        \"\"\"
        Evaluate data against rules with full explainability.
        
        ARCHITECTURAL INVARIANT: This signature is FROZEN.
        
        Args:
            data: Dictionary of values to evaluate
            
        Returns:
            Decision object with pass/fail and explanation
            
        Example:
            >>> router = Router(rules={'requirements': {'age': 18}})
            >>> result = router.evaluate({'age': 20})
            >>> result.passed
            True
        \"\"\"
        audit_trail = [f"evaluating: {list(data.keys())}"]
        
        # Check required items first (fail-fast)
        for required_item in self.rules.get('must_have', []):
            if required_item not in data or not data[required_item]:
                return Decision(
                    passed=False,
                    rejected_on=required_item,
                    missing={required_item: "required but missing"},
                    audit_trail=audit_trail,
                    fix=f"Please provide {required_item}"
                )
        
        # Check threshold requirements
        for rule_name, threshold in self.rules.get('requirements', {}).items():
            audit_trail.append(f"checking: {rule_name}")
            
            if rule_name not in data:
                return Decision(
                    passed=False,
                    missing={rule_name: "required but not provided"},
                    rejected_on=rule_name,
                    audit_trail=audit_trail,
                    fix=f"Please provide {rule_name} information"
                )
            
            user_value = data[rule_name]
            
            # Delegate to pure evaluator
            try:
                rule_def = RuleEvaluator.create_rule_definition(rule_name, threshold)
                
                if not rule_def.comparator(user_value, threshold):
                    return Decision(
                        passed=False,
                        rejected_on=rule_name,
                        your_score=user_value,
                        threshold=threshold,
                        missing={rule_name: f"{user_value} (need {threshold})"},
                        audit_trail=audit_trail,
                        resources=self._resource_provider.get_resources(rule_name),
                        fix=rule_def.error_message_template.format(threshold=threshold)
                    )
            except ValueError as e:
                # Handle malformed rules gracefully
                audit_trail.append(f"error: {str(e)}")
                return Decision(
                    passed=False,
                    rejected_on=rule_name,
                    audit_trail=audit_trail,
                    fix=f"Rule configuration error: {str(e)}"
                )
        
        # All checks passed!
        audit_trail.append("all_checks_passed")
        return Decision(
            passed=True,
            audit_trail=audit_trail,
            fix="No action needed - you qualify!"
        )


""",

    # ------------------------------------------------------------
    # MODULE: core.evaluator
    # LAYER: UTILITY
    # PATH: core/evaluator.py
    # ------------------------------------------------------------
    "core.evaluator": """
\"\"\"
Pure rule evaluation logic.

BOUNDARY: This module performs ZERO I/O.
All functions are pure and deterministic.
\"\"\"

from typing import Union, Any
from yajph.core.models import RuleType, RuleDefinition


class RuleEvaluator:
    \"\"\"
    Pure evaluation logic extracted for testability.
    
    All methods are static to emphasize purity.
    No instance state, no side effects.
    \"\"\"
    
    @staticmethod
    def _parse_percentage(value: Union[str, int, float]) -> float:
        \"\"\"
        Pure function: Convert percentage string to float.
        
        Args:
            value: Percentage as string ("45%"), int, or float
            
        Returns:
            Float representation of percentage
            
        Examples:
            >>> RuleEvaluator._parse_percentage("45%")
            45.0
            >>> RuleEvaluator._parse_percentage(45)
            45.0
        \"\"\"
        if isinstance(value, str) and value.endswith('%'):
            return float(value.rstrip('%'))
        return float(value)
    
    @staticmethod
    def _parse_numeric_with_slash(value: Union[str, int, float]) -> float:
        \"\"\"
        Pure function: Handle "2/5" rating format.
        
        Args:
            value: Rating as "numerator/denominator" or numeric
            
        Returns:
            Numeric value (numerator if slash format)
            
        Examples:
            >>> RuleEvaluator._parse_numeric_with_slash("3/5")
            3.0
            >>> RuleEvaluator._parse_numeric_with_slash(3.5)
            3.5
        \"\"\"
        if isinstance(value, str) and '/' in value:
            return float(value.split('/')[0])
        return float(value)
    
    @staticmethod
    def evaluate_percentage_rule(user_value: Any, threshold: str) -> bool:
        \"\"\"
        Pure function: Evaluate percentage threshold (MAX).
        
        Args:
            user_value: User's percentage value
            threshold: Maximum allowed percentage
            
        Returns:
            True if user_value <= threshold
        \"\"\"
        threshold_val = RuleEvaluator._parse_percentage(threshold)
        user_val = RuleEvaluator._parse_percentage(user_value)
        return user_val <= threshold_val
    
    @staticmethod
    def evaluate_numeric_rule(user_value: Any, threshold: Union[int, float]) -> bool:
        \"\"\"
        Pure function: Evaluate numeric minimum threshold.
        
        Args:
            user_value: User's numeric value
            threshold: Minimum required value
            
        Returns:
            True if user_value >= threshold
        \"\"\"
        user_val = RuleEvaluator._parse_numeric_with_slash(user_value)
        return user_val >= threshold
    
    @staticmethod
    def create_rule_definition(rule_name: str, threshold: Any) -> RuleDefinition:
        \"\"\"
        Pure function: Convert rule config into typed definition.
        
        This is the transform layer between YAML config and execution.
        
        Args:
            rule_name: Name of the rule
            threshold: Threshold value (determines rule type)
            
        Returns:
            RuleDefinition with appropriate comparator
            
        Raises:
            ValueError: If threshold type is unsupported
        \"\"\"
        if isinstance(threshold, str) and threshold.endswith('%'):
            return RuleDefinition(
                name=rule_name,
                rule_type=RuleType.PERCENTAGE_MAX,
                threshold=threshold,
                comparator=RuleEvaluator.evaluate_percentage_rule,
                error_message_template=f"Reduce {rule_name} to below {{threshold}}"
            )
        elif isinstance(threshold, (int, float)):
            return RuleDefinition(
                name=rule_name,
                rule_type=RuleType.NUMERIC_MIN,
                threshold=threshold,
                comparator=RuleEvaluator.evaluate_numeric_rule,
                error_message_template=f"Improve {rule_name} to at least {{threshold}}"
            )
        else:
            raise ValueError(
                f"Unsupported threshold type for rule '{rule_name}': {type(threshold)}"
            )


""",

    # ------------------------------------------------------------
    # MODULE: io
    # LAYER: UTILITY
    # PATH: io/__init__.py
    # ------------------------------------------------------------
    "io": """
\"\"\"
I/O boundary layer.
All file operations are isolated to this module.
\"\"\"

from yajph.io.loaders import evaluate_yaml, attach_router, load_rules, load_data

__all__ = ['evaluate_yaml', 'attach_router', 'load_rules', 'load_data']


""",

    # ------------------------------------------------------------
    # MODULE: io.loaders
    # LAYER: UTILITY
    # PATH: io/loaders.py
    # ------------------------------------------------------------
    "io.loaders": """
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

    # ------------------------------------------------------------
    # MODULE: examples.demo_hiring
    # LAYER: UTILITY
    # PATH: examples/demo_hiring.py
    # ------------------------------------------------------------
    "examples.demo_hiring": """
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
    # MODULE: examples.demo_loan
    # LAYER: UTILITY
    # PATH: examples/demo_loan.py
    # ------------------------------------------------------------
    "examples.demo_loan": """
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
    # MODULE: examples
    # LAYER: UTILITY
    # PATH: examples/__init__.py
    # ------------------------------------------------------------
    "examples": """
\"\"\"
I/O boundary layer.
All file operations are isolated to this module.
\"\"\"

from yajph.io.loaders import evaluate_yaml, attach_router, load_rules, load_data

__all__ = ['evaluate_yaml', 'attach_router', 'load_rules', 'load_data']


""",

    # ------------------------------------------------------------
    # MODULE: examples.demo_simple
    # LAYER: UTILITY
    # PATH: examples/demo_simple.py
    # ------------------------------------------------------------
    "examples.demo_simple": """
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
