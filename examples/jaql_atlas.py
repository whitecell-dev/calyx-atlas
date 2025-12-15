# ======================================================================
# CALYX BUNDLE - LLM OPTIMIZED FORMAT
# ======================================================================

CALYX_METADATA = {
  "format_version": "calyx-1.0",
  "total_modules": 7,
  "layers": {
    "UTILITY": 7
  },
  "external_deps": [
    "argparse",
    "ast",
    "io",
    "json",
    "parser",
    "pathlib",
    "pipes",
    "runner",
    "sys",
    "typing",
    "utils",
    "yaml"
  ],
  "generated_at": "2025-12-15T06:13:24.515205Z"
}

# ======================================================================
# MODULE MAP (name → path, layer)
# ======================================================================
MODULE_MAP = {
    "jaql": {
        "path": "jaql/__init__.py",
        "layer": "UTILITY",
        "exports": ["__all__"]
    },
    "jaql.cli": {
        "path": "jaql/cli.py",
        "layer": "UTILITY",
        "exports": ["main"]
    },
    "jaql.io": {
        "path": "jaql/io.py",
        "layer": "UTILITY",
        "exports": ["output_result", "load_stream", "load_from_file_or_stdin", "normalize_to_records"]
    },
    "jaql.pipes": {
        "path": "jaql/pipes.py",
        "layer": "UTILITY",
        "exports": ["apply_pipeline", "normalize_to_records", "pipe_select", "pipe_derive", "pipe_project"]
    },
    "jaql.utils": {
        "path": "jaql/utils.py",
        "layer": "UTILITY",
        "exports": ["deep_get", "normalize_to_records", "test_safe_eval_context_resolution", "is_list_of_dicts", "deep_set", "safe_eval"]
    },
    "jaql.runner": {
        "path": "jaql/runner.py",
        "layer": "UTILITY",
        "exports": ["validate_pipeline_file", "run_pipeline_multi_stage", "load_pipeline_spec", "run_pipeline_single_stage", "run_pipeline"]
    },
    "jaql.parser": {
        "path": "jaql/parser.py",
        "layer": "UTILITY",
        "exports": ["load_pipeline", "validate_pipeline"]
    },
}

# ======================================================================
# DEPENDENCY GRAPH (module → [dependencies])
# ======================================================================
DEPENDENCY_GRAPH = {
    "jaql": [],
    "jaql.cli": [],
    "jaql.io": [],
    "jaql.pipes": [],
    "jaql.utils": [],
    "jaql.runner": [],
    "jaql.parser": [],
}

# ======================================================================
# MODULE CONTENTS (PRESERVED EXACTLY)
# ======================================================================
MODULE_CONTENTS = {
    # ------------------------------------------------------------
    # MODULE: jaql
    # LAYER: UTILITY
    # PATH: jaql/__init__.py
    # ------------------------------------------------------------
    "jaql": """
\"\"\"
JAQL: JSON + YAML Query Language
A jq-like tool using YAML pipelines for JSON transformation

Core operations: select, project, derive
Pure functional transformations with no side effects
\"\"\"

from .pipes import apply_pipeline
from .runner import run_pipeline
from .parser import load_pipeline

__all__ = ["apply_pipeline", "run_pipeline", "load_pipeline"]

""",

    # ------------------------------------------------------------
    # MODULE: jaql.cli
    # LAYER: UTILITY
    # PATH: jaql/cli.py
    # ------------------------------------------------------------
    "jaql.cli": """
\"\"\"
JAQL command-line interface (enhanced)
Supports YAML output and multi-document processing
\"\"\"

import argparse
from .runner import run_pipeline, validate_pipeline_file

def main():
    \"\"\"Main CLI entry point with enhanced options\"\"\"
    parser = argparse.ArgumentParser(
        description="JAQL: JSON + YAML Query Language - jq-like tool with YAML pipelines",
        formatter_class=argparse.RawDescriptionHelpFormatter,
        epilog=\"\"\"
Examples:
  # Traditional single-stage pipeline
  cat data.json | jaql run transform.yaml
  ps aux | jc --ps --yaml-out | jaql run pipeline.yaml
  
  # Multi-document input (YAML)
  { echo '---'; ps aux | jc --ps --yaml-out; echo '---'; free | jc --free --yaml-out; } | jaql run analysis.yaml
  
  # File I/O with YAML output
  jaql run pipeline.yaml --input data.json --output result.yaml --emit yaml
  
  # Pipeline validation
  jaql validate pipeline.yaml
        \"\"\".strip()
    )
    
    parser.add_argument("command", choices=["run", "validate"], help="Command to execute")
    parser.add_argument("pipeline", help="YAML/JSON pipeline file")
    parser.add_argument("--input", "-i", help="Input file (default: stdin)")
    parser.add_argument("--output", "-o", help="Output file (default: stdout)")
    parser.add_argument("--emit", choices=["json", "yaml"], default="json", 
                       help="Output format (default: json)")
    
    args = parser.parse_args()
    
    if args.command == "run":
        run_pipeline(args.pipeline, args.input, args.output, args.emit)
    elif args.command == "validate":
        if not validate_pipeline_file(args.pipeline):
            exit(1)

if __name__ == "__main__":
    main()

""",

    # ------------------------------------------------------------
    # MODULE: jaql.io
    # LAYER: UTILITY
    # PATH: jaql/io.py
    # ------------------------------------------------------------
    "jaql.io": """
\"\"\"
JAQL I/O utilities: YAML/JSON stream loading and output formatting
Enables jc --yaml-out | jaql workflow with multi-document support
\"\"\"

import json
from typing import List, Any, Union, TextIO
import sys

try:
    import yaml
    HAS_YAML = True
except ImportError:
    yaml = None
    HAS_YAML = False

def load_stream(text: str) -> List[Any]:
    \"\"\"
    Load a stream of documents, preferring YAML multi-doc, falling back to JSON
    
    Returns:
        List of documents. YAML multi-doc → [doc0, doc1, ...], single → [doc]
    \"\"\"
    if not text.strip():
        return []
    
    # Try YAML first (handles multi-doc and single doc)
    if HAS_YAML:
        try:
            docs = list(yaml.safe_load_all(text))
            # Filter out None documents from empty YAML docs
            docs = [doc for doc in docs if doc is not None]
            if len(docs) > 0:
                return docs
        except Exception:
            pass
    
    # Fall back to JSON
    try:
        return [json.loads(text)]
    except json.JSONDecodeError as e:
        raise ValueError(f"Invalid JSON input: {e}")

def normalize_to_records(doc: Any) -> List[dict]:
    \"\"\"
    Normalize a document to a list of record dictionaries for pipeline processing
    
    Args:
        doc: Document (dict, list of dicts, or other)
        
    Returns:
        List of record dictionaries
    \"\"\"
    if isinstance(doc, list):
        # If it's a list of dicts, return as-is
        if all(isinstance(item, dict) for item in doc):
            return doc
        # If it's a mixed list, wrap each item
        return [{"value": item} if not isinstance(item, dict) else item for item in doc]
    elif isinstance(doc, dict):
        return [doc]
    else:
        # Wrap primitive values
        return [{"value": doc}]

def output_result(result: Any, output_format: str = "json", file: TextIO = None) -> None:
    \"\"\"
    Output result in specified format to file or stdout
    
    Args:
        result: Data to output
        output_format: "json" or "yaml"
        file: Output file (defaults to stdout)
    \"\"\"
    if file is None:
        file = sys.stdout
    
    if output_format == "yaml" and HAS_YAML:
        # Use safe_dump with clean formatting
        yaml.safe_dump(result, file, 
                      default_flow_style=False, 
                      sort_keys=False, 
                      indent=2)
    else:
        # Default to JSON
        json.dump(result, file, indent=2)
        file.write('\n')  # Add newline for clean terminal output

def load_from_file_or_stdin(input_file: str = None) -> str:
    \"\"\"
    Load text content from file or stdin
    
    Args:
        input_file: Path to input file (None for stdin)
        
    Returns:
        Text content
    \"\"\"
    if input_file:
        try:
            with open(input_file, 'r') as f:
                return f.read()
        except FileNotFoundError:
            raise ValueError(f"Input file not found: {input_file}")
        except Exception as e:
            raise ValueError(f"Error reading {input_file}: {e}")
    else:
        try:
            return sys.stdin.read()
        except Exception as e:
            raise ValueError(f"Error reading from stdin: {e}")

""",

    # ------------------------------------------------------------
    # MODULE: jaql.pipes
    # LAYER: UTILITY
    # PATH: jaql/pipes.py
    # ------------------------------------------------------------
    "jaql.pipes": """
\"\"\"
JAQL core pipeline operations: select, project, derive (updated)
Enhanced with better expression evaluation for JC compatibility
\"\"\"

import json
from typing import Any, Dict, List, Union
from .utils import safe_eval, deep_get

def normalize_to_records(data: Any) -> List[Dict[str, Any]]:
    \"\"\"Normalize input to list of records for processing\"\"\"
    if isinstance(data, dict):
        return [data]
    elif isinstance(data, list) and all(isinstance(item, dict) for item in data):
        return data
    else:
        # Wrap non-dict data as a record
        return [{"value": data}]

def apply_pipeline(data: Any, pipeline: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
    \"\"\"
    Apply a sequence of pipe operations to data
    
    Args:
        data: Input data (dict, list of dicts, or other)
        pipeline: List of pipe operations from YAML config
        
    Returns:
        List of transformed records
    \"\"\"
    # Normalize input to list of records
    if isinstance(data, list) and all(isinstance(item, dict) for item in data):
        records = data  # Already normalized
    else:
        records = normalize_to_records(data)
    
    # Apply each pipe operation in sequence
    for pipe in pipeline:
        if 'select' in pipe:
            records = pipe_select(records, pipe['select'])
        elif 'project' in pipe:
            records = pipe_project(records, pipe['project'])
        elif 'derive' in pipe:
            records = pipe_derive(records, pipe['derive'])
    
    return records

def pipe_select(records: List[Dict[str, Any]], expression: str) -> List[Dict[str, Any]]:
    \"\"\"
    Filter records based on expression (σ operation)
    Enhanced with better expression evaluation for JC data
    
    Args:
        records: List of record dictionaries
        expression: Python expression to evaluate (e.g., "age >= 18", "rec['load-state'] == 'loaded'")
        
    Returns:
        Filtered list of records
    \"\"\"
    result = []
    for record in records:
        try:
            # Use enhanced safe_eval with 'rec' binding and 'get' helper
            if safe_eval(expression, record):
                result.append(record)
        except Exception:
            # Skip records that cause evaluation errors
            continue
    return result

def pipe_project(records: List[Dict[str, Any]], fields: List[str]) -> List[Dict[str, Any]]:
    \"\"\"
    Select specific fields from records (π operation)
    Enhanced with nested field support
    
    Args:
        records: List of record dictionaries
        fields: List of field names to keep (supports dot notation like 'user.name')
        
    Returns:
        Records with only the specified fields
    \"\"\"
    result = []
    for record in records:
        projected = {}
        for field in fields:
            if '.' in field:
                # Handle nested field access
                value = deep_get(record, field)
                if value is not None:
                    # Preserve the full path in the output
                    projected[field] = value
            else:
                # Simple field access
                if field in record:
                    projected[field] = record[field]
        result.append(projected)
    return result

def pipe_derive(records: List[Dict[str, Any]], derivations: Dict[str, str]) -> List[Dict[str, Any]]:
    \"\"\"
    Add new fields computed from expressions
    Enhanced with better expression evaluation
    
    Args:
        records: List of record dictionaries
        derivations: Dict mapping new field names to expressions
        
    Returns:
        Records with additional derived fields
    \"\"\"
    result = []
    for record in records:
        # Create new record with derived fields
        new_record = dict(record)
        for field_name, expression in derivations.items():
            try:
                # Use enhanced safe_eval with 'rec' binding and 'get' helper
                new_record[field_name] = safe_eval(expression, record)
            except Exception:
                # Set to None if derivation fails
                new_record[field_name] = None
        result.append(new_record)
    return result

""",

    # ------------------------------------------------------------
    # MODULE: jaql.utils
    # LAYER: UTILITY
    # PATH: jaql/utils.py
    # ------------------------------------------------------------
    "jaql.utils": """
\"\"\"
JAQL utilities: enhanced safe evaluation with better key access
Supports hyphenated keys from jc output via 'rec' binding and 'get()' helper
\"\"\"

import ast
from typing import Any, Dict, List, Union

def safe_eval(expr: str, context: Dict[str, Any]) -> Any:
    \"\"\"
    Safely evaluate expressions against context with limited built-ins
    Enhanced with 'rec' binding and 'get' helper for hyphenated keys
    \"\"\"
    try:
        parsed = ast.parse(expr, mode='eval')

        # Allow only safe built-ins
        safe_builtins = {
            "len": len,
            "min": min,
            "max": max,
            "sum": sum,
            "abs": abs,
            "str": str,
            "int": int,
            "float": float,
            "bool": bool,
        }

        # Create safe environment with context variables
        safe_globals = {"__builtins__": safe_builtins}
        
        # Add all context variables directly (for bare variable access)
        safe_globals.update(context)
        
        # Add 'rec' binding for explicit record access
        safe_globals["rec"] = context
        
        # Add 'get' helper function for safe key access
        safe_globals["get"] = lambda key, default=None: context.get(key, default)

        return eval(compile(parsed, '<string>', 'eval'), safe_globals)
    except Exception:
        # Return False for any evaluation errors (used in select operations)
        return False

def deep_get(obj: Dict[str, Any], path: str, default=None) -> Any:
    \"\"\"
    Get nested values using dot notation like 'user.profile.name'
    \"\"\"
    try:
        current = obj
        for part in path.split('.'):
            if isinstance(current, dict):
                current = current[part]
            else:
                return default
        return current
    except (KeyError, TypeError):
        return default

def deep_set(obj: Dict[str, Any], path: str, value: Any) -> None:
    \"\"\"
    Set nested values using dot notation
    \"\"\"
    parts = path.split('.')
    current = obj
    
    for part in parts[:-1]:
        if part not in current:
            current[part] = {}
        current = current[part]
    
    current[parts[-1]] = value

def is_list_of_dicts(data: Any) -> bool:
    \"\"\"Check if data is a list containing only dictionaries\"\"\"
    return isinstance(data, list) and all(isinstance(item, dict) for item in data)

def normalize_to_records(data: Any) -> List[Dict[str, Any]]:
    \"\"\"
    Normalize input to list of records for processing
    NOTE: This duplicates functionality from io.py but is kept for backward compatibility
    \"\"\"
    if isinstance(data, dict):
        return [data]
    elif is_list_of_dicts(data):
        return data
    else:
        # Wrap non-dict data as a record
        return [{"value": data}]

# Test function for validation
def test_safe_eval_context_resolution():
    \"\"\"Test enhanced expression evaluation\"\"\"
    # Test bare variable access
    assert safe_eval("age >= 18", {"age": 20}) is True
    
    # Test built-in functions
    assert safe_eval("len(name)", {"name": "Alice"}) == 5
    
    # Test 'rec' binding for hyphenated keys
    assert safe_eval("rec['load-state'] == 'loaded'", {"load-state": "loaded"}) is True
    
    # Test 'get' helper
    assert safe_eval("get('load-state') == 'loaded'", {"load-state": "loaded"}) is True
    assert safe_eval("get('nonexistent', 'default')", {}) == 'default'
    
    # Test error handling
    assert safe_eval("nonexistent", {}) is False

if __name__ == "__main__":
    test_safe_eval_context_resolution()
    print("All tests passed!")


""",

    # ------------------------------------------------------------
    # MODULE: jaql.runner
    # LAYER: UTILITY
    # PATH: jaql/runner.py
    # ------------------------------------------------------------
    "jaql.runner": """
\"\"\"
JAQL pipeline runner: enhanced with multi-stage and multi-document support
Enables correlation of data from multiple sources (like ps + free)
\"\"\"

import sys
import json
from typing import Any, Dict, List
from pathlib import Path

from .parser import load_pipeline, validate_pipeline
from .pipes import apply_pipeline
from .io import load_stream, normalize_to_records, output_result, load_from_file_or_stdin

try:
    import yaml
    HAS_YAML = True
except ImportError:
    yaml = None
    HAS_YAML = False

def run_pipeline_single_stage(records: List[Dict[str, Any]], pipeline: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
    \"\"\"
    Run a traditional single-stage pipeline (backward compatibility)
    
    Args:
        records: List of record dictionaries
        pipeline: List of pipe operations
        
    Returns:
        List of transformed records
    \"\"\"
    return apply_pipeline(records, pipeline)

def run_pipeline_multi_stage(docs: List[Any], spec: Dict[str, Any]) -> Dict[str, Any]:
    \"\"\"
    Run a multi-stage pipeline with named stages and cross-document correlation
    
    Args:
        docs: List of documents from multi-document input
        spec: Pipeline specification with 'stages' and optional 'outputs'
        
    Returns:
        Dictionary of stage results or named outputs
    \"\"\"
    stage_results = {}
    
    # Execute each stage
    for stage_name, stage_config in spec["stages"].items():
        # Get input document index (defaults to 0)
        doc_index = stage_config.get("input", 0)
        
        if doc_index >= len(docs):
            raise ValueError(f"Stage '{stage_name}': input document index {doc_index} out of range (have {len(docs)} docs)")
        
        # Normalize document to records and apply pipes
        records = normalize_to_records(docs[doc_index])
        
        # Get pipeline operations (support both 'pipes' and 'steps' keys for flexibility)
        pipes = stage_config.get("pipes") or stage_config.get("steps", [])
        
        # Apply pipeline operations
        result = apply_pipeline(records, pipes)
        stage_results[stage_name] = result
    
    # Handle outputs specification
    outputs_spec = spec.get("outputs", {})
    if outputs_spec:
        named_outputs = {}
        for output_name, output_config in outputs_spec.items():
            source_stage = output_config["from"]
            if source_stage not in stage_results:
                raise ValueError(f"Output '{output_name}': source stage '{source_stage}' not found")
            named_outputs[output_name] = stage_results[source_stage]
        return named_outputs
    else:
        # Return all stage results if no outputs specified
        return stage_results

def load_pipeline_spec(pipeline_path: str) -> Dict[str, Any]:
    \"\"\"
    Load pipeline specification from YAML file
    
    Args:
        pipeline_path: Path to pipeline file
        
    Returns:
        Pipeline specification dictionary
    \"\"\"
    try:
        pipeline_text = Path(pipeline_path).read_text()
    except FileNotFoundError:
        raise ValueError(f"Pipeline file not found: {pipeline_path}")
    
    if HAS_YAML:
        try:
            return yaml.safe_load(pipeline_text)
        except yaml.YAMLError as e:
            raise ValueError(f"Invalid YAML in {pipeline_path}: {e}")
    else:
        try:
            return json.loads(pipeline_text)
        except json.JSONDecodeError as e:
            raise ValueError(f"Invalid JSON in {pipeline_path}: {e}")

def run_pipeline(pipeline_path: str, input_file: str = None, output_file: str = None, output_format: str = "json") -> None:
    \"\"\"
    Run a JAQL pipeline on input data (enhanced version)
    
    Args:
        pipeline_path: Path to YAML/JSON pipeline file
        input_file: Path to input file (None for stdin)
        output_file: Path to output file (None for stdout)
        output_format: Output format ("json" or "yaml")
    \"\"\"
    try:
        # Load pipeline specification
        spec = load_pipeline_spec(pipeline_path)
        
        # Load input data as stream of documents
        input_text = load_from_file_or_stdin(input_file)
        docs = load_stream(input_text)
        
        if not docs:
            raise ValueError("No input documents found")
        
        # Determine pipeline type and execute
        if "stages" in spec:
            # Multi-stage pipeline
            result = run_pipeline_multi_stage(docs, spec)
        else:
            # Traditional single-stage pipeline (backward compatibility)
            if "pipes" not in spec:
                raise ValueError("Pipeline must contain either 'pipes' or 'stages'")
            
            # Use first document for single-stage pipeline
            records = normalize_to_records(docs[0])
            
            # Validate traditional pipeline format
            pipeline = spec["pipes"]
            validation_errors = validate_pipeline(pipeline)
            
            if validation_errors:
                print("Pipeline validation errors:", file=sys.stderr)
                for error in validation_errors:
                    print(f"  - {error}", file=sys.stderr)
                sys.exit(1)
            
            result = run_pipeline_single_stage(records, pipeline)
        
        # Output result
        if output_file:
            with open(output_file, 'w') as f:
                output_result(result, output_format, f)
        else:
            output_result(result, output_format)
            
    except Exception as e:
        print(f"Error: {e}", file=sys.stderr)
        sys.exit(1)

def validate_pipeline_file(pipeline_path: str) -> bool:
    \"\"\"
    Validate a pipeline file and return True if valid
    \"\"\"
    try:
        spec = load_pipeline_spec(pipeline_path)
        
        if "stages" in spec:
            # Validate multi-stage pipeline
            if not isinstance(spec["stages"], dict):
                print("Multi-stage pipeline: 'stages' must be a dictionary")
                return False
            
            for stage_name, stage_config in spec["stages"].items():
                if not isinstance(stage_config, dict):
                    print(f"Stage '{stage_name}': must be a dictionary")
                    return False
                
                pipes = stage_config.get("pipes") or stage_config.get("steps", [])
                if not isinstance(pipes, list):
                    print(f"Stage '{stage_name}': 'pipes' or 'steps' must be a list")
                    return False
                
                # Validate pipeline operations
                validation_errors = validate_pipeline(pipes)
                if validation_errors:
                    print(f"Stage '{stage_name}' validation errors:")
                    for error in validation_errors:
                        print(f"  - {error}")
                    return False
            
            print(f"Multi-stage pipeline valid: {len(spec['stages'])} stages")
            return True
        else:
            # Validate traditional single-stage pipeline
            if "pipes" not in spec:
                print("Pipeline must contain either 'pipes' or 'stages'")
                return False
            
            pipeline = spec["pipes"]
            validation_errors = validate_pipeline(pipeline)
            
            if validation_errors:
                print("Pipeline validation errors:")
                for error in validation_errors:
                    print(f"  - {error}")
                return False
            else:
                print(f"Pipeline valid: {len(pipeline)} operations")
                return True
                
    except Exception as e:
        print(f"Error: {e}")
        return False

""",

    # ------------------------------------------------------------
    # MODULE: jaql.parser
    # LAYER: UTILITY
    # PATH: jaql/parser.py
    # ------------------------------------------------------------
    "jaql.parser": """
\"\"\"
JAQL pipeline parser and validator
\"\"\"

import yaml
from typing import Dict, List, Any

def load_pipeline(path: str) -> List[Dict[str, Any]]:
    \"\"\"
    Load and validate YAML pipeline configuration
    \"\"\"
    try:
        with open(path, 'r') as f:
            config = yaml.safe_load(f)
    except FileNotFoundError:
        raise ValueError(f"Pipeline file not found: {path}")
    except yaml.YAMLError as e:
        raise ValueError(f"Invalid YAML in {path}: {e}")
    
    if not isinstance(config, dict):
        raise ValueError("Pipeline config must be a YAML object")
    
    if 'pipes' not in config:
        raise ValueError("Pipeline config must contain 'pipes' key")
    
    pipes = config['pipes']
    if not isinstance(pipes, list):
        raise ValueError("'pipes' must be a list of operations")
    
    # Basic validation of pipe operations
    valid_operations = {'select', 'project', 'derive'}
    
    for i, pipe in enumerate(pipes):
        if not isinstance(pipe, dict):
            raise ValueError(f"Pipe {i}: must be an object")
        
        pipe_ops = set(pipe.keys())
        if not pipe_ops.issubset(valid_operations):
            invalid_ops = pipe_ops - valid_operations
            raise ValueError(f"Pipe {i}: unknown operations {invalid_ops}")
        
        if len(pipe_ops) != 1:
            raise ValueError(f"Pipe {i}: each pipe must contain exactly one operation")
    
    return pipes

def validate_pipeline(pipeline: List[Dict[str, Any]]) -> List[str]:
    \"\"\"
    Validate pipeline operations and return list of error messages
    \"\"\"
    errors = []
    
    for i, pipe in enumerate(pipeline):
        if 'select' in pipe:
            if not isinstance(pipe['select'], str):
                errors.append(f"Pipe {i}: 'select' must be a string expression")
        
        elif 'project' in pipe:
            if not isinstance(pipe['project'], list):
                errors.append(f"Pipe {i}: 'project' must be a list of field names")
            elif not all(isinstance(field, str) for field in pipe['project']):
                errors.append(f"Pipe {i}: 'project' fields must be strings")
        
        elif 'derive' in pipe:
            if not isinstance(pipe['derive'], dict):
                errors.append(f"Pipe {i}: 'derive' must be an object mapping field names to expressions")
            elif not all(isinstance(k, str) and isinstance(v, str) for k, v in pipe['derive'].items()):
                errors.append(f"Pipe {i}: 'derive' keys and values must be strings")
    
    return errors

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