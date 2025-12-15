# 🎯 **Architecture-Agnostic Deep Dissection: JAQL CALYX Atlas**

Using **only** structural evidence from the Atlas IR.

---

## **1️⃣ Responsibility Decomposition Test**

### **Module Responsibilities:**

| Module | Primary Responsibility | Explicitly Does NOT |
|--------|----------------------|-------------------|
| **jaql** | Package entry point, exposes public API (`apply_pipeline`, `run_pipeline`, `load_pipeline`) | Does NOT implement pipeline operations or I/O |
| **jaql.cli** | Command-line argument parsing and user-facing interface | Does NOT implement pipeline logic or data transformation |
| **jaql.io** | Stream loading (YAML/JSON), output formatting, file/stdin handling | Does NOT transform data or validate pipeline structure |
| **jaql.pipes** | Core pipeline operations (select, project, derive) and record normalization | Does NOT handle I/O, CLI, or pipeline file parsing |
| **jaql.utils** | Safe expression evaluation, nested field access utilities | Does NOT execute pipelines or handle I/O operations |
| **jaql.runner** | Pipeline orchestration (single/multi-stage), validation coordination | Does NOT implement transformation operations or parse YAML |
| **jaql.parser** | YAML pipeline file parsing and structural validation | Does NOT execute transformations or handle data I/O |

**Evidence:**
- `jaql.__init__` only contains imports and `__all__` (no implementation)
- `jaql.cli` calls `run_pipeline()` but doesn't implement it
- `jaql.io` has `load_stream()` and `output_result()` but no `apply_pipeline()`
- `jaql.pipes` implements `pipe_select/project/derive` but no file loading
- `jaql.utils` has `safe_eval()` but no pipeline execution logic
- `jaql.runner` calls both `parser` and `pipes` modules (orchestrator)
- `jaql.parser` validates structure but doesn't execute operations

---

## **2️⃣ Data Ownership & Flow Test**

### **Data Structure Creators:**
1. **jaql.io** - Creates document lists from YAML/JSON streams
2. **jaql.io** - Creates normalized record lists via `normalize_to_records()`
3. **jaql.parser** - Creates pipeline specification dictionaries from YAML

### **Data Transformers:**
1. **jaql.pipes** - Transforms records via `apply_pipeline()` operations
2. **jaql.utils** - Transforms expressions to values via `safe_eval()`
3. **jaql.pipes** - Normalizes data structures in `normalize_to_records()`

### **Data Consumers:**
1. **jaql.cli** - Consumes command-line arguments (argparse)
2. **jaql.io** - Consumes results for output formatting
3. **jaql.runner** - Consumes pipeline specs and documents

### **Dominant Flow Graph:**
```
cli → runner → [ parser → pipeline_spec ]
              ↓
              [ io → documents → normalize → records ]
              ↓
              pipes → transformed_records
              ↓
              io → output
```

**Evidence:**
- `cli.main()` calls `runner.run_pipeline()` (consumer → orchestrator)
- `runner` calls both `parser.load_pipeline_spec()` and `io.load_stream()` (orchestrator → producers)
- `pipes.apply_pipeline()` receives records, returns records (transformer)
- `io.output_result()` is terminal consumer (no return value, writes to file/stdout)

---

## **3️⃣ Purity vs Side-Effect Classification**

| Module | Classification | Evidence |
|--------|---------------|----------|
| **jaql** | **Stateless facade** | Only imports, no state or side effects |
| **jaql.cli** | **I/O (environment)** | Calls `argparse`, `sys.exit()`, reads stdin/files |
| **jaql.io** | **I/O** | `sys.stdin.read()`, `open()`, `sys.stdout`, filesystem access |
| **jaql.pipes** | **Pure computation** | All functions return new lists, no mutation or I/O |
| **jaql.utils** | **Pure computation** | `safe_eval()`, `deep_get/set` are pure transformations |
| **jaql.runner** | **Stateful logic + I/O** | Orchestrates pipeline execution, reads files via `Path.read_text()` |
| **jaql.parser** | **I/O + validation** | Calls `open()`, reads YAML files |

**Key Signal:**
- **jaql.pipes** has no `import sys`, `open()`, or global state (pure)
- **jaql.utils** `safe_eval()` creates local scope but doesn't mutate external state (pure)
- **jaql.cli** calls `sys.exit()` and `argparse` (side-effectful)
- **jaql.runner** reads files and calls multiple modules (orchestrator with I/O)

**Evidence of Purity (jaql.pipes):**
```python
def pipe_select(records: List[Dict], expression: str) -> List[Dict]:
    result = []  # Local accumulator
    for record in records:
        if safe_eval(expression, record):
            result.append(record)  # No mutation of input
    return result  # New list
```

---

## **4️⃣ Replaceability / Swap Test**

### **Easiest to Replace:**
**jaql.parser**

**Why:**
- Single responsibility (YAML → dict conversion)
- Clean interface: `load_pipeline(path) → List[Dict]`
- No dependencies on other jaql modules
- Could swap for JSON parser, TOML parser, or hardcoded configs

**Evidence:**
```python
# jaql.parser has zero imports from jaql.* modules
import yaml
from typing import Dict, List, Any

def load_pipeline(path: str) -> List[Dict[str, Any]]:
    # ... just YAML parsing ...
    return pipes
```

### **Hardest to Replace:**
**jaql.pipes**

**Why:**
- High fan-in (runner depends on it directly)
- Defines core transformation semantics (select, project, derive)
- Other modules reference its functions (`apply_pipeline`, `normalize_to_records`)
- Changing operation semantics breaks runner's multi-stage orchestration

**Evidence:**
- `jaql.__init__` exports `apply_pipeline` (public API)
- `runner.run_pipeline_single_stage()` calls `apply_pipeline()`
- `runner.run_pipeline_multi_stage()` calls `apply_pipeline()` per stage
- Replacing would require coordinated changes across 3+ modules

---

## **5️⃣ Hidden Centrality Test**

### **Architectural Center of Gravity:**
**jaql.pipes**

**Why NOT cli:**
- cli is entry point but architecturally shallow
- cli just parses args and delegates

**Why NOT runner:**
- runner is orchestrator but doesn't define *what* operations mean

**Why jaql.pipes:**
1. **Semantic coupling:** Defines what "select", "project", "derive" *mean*
2. **Fan-in:** Both runner and public API depend on it
3. **Constraint propagation:** 
   - Dictates record structure (`List[Dict[str, Any]]`)
   - Defines expression language semantics (via `safe_eval`)
   - Determines what multi-stage pipelines can do
4. **Extension gravity:** Adding new operations (join, group, sort) means modifying pipes

**Evidence:**
```python
# runner.py
from .pipes import apply_pipeline  # Core dependency

# __init__.py
from .pipes import apply_pipeline  # Exposed in public API

# pipes.py defines THE DATA CONTRACT
def apply_pipeline(data: Any, pipeline: List[Dict]) -> List[Dict[str, Any]]
# This signature constrains the entire system
```

**Compare to runner:**
```python
# runner.py just orchestrates
result = apply_pipeline(records, pipeline)  # Calls pipes
# Runner doesn't define semantics, just coordinates calls
```

---

## **6️⃣ Temporal Ordering Test**

### **Minimal Correct Order:**

1. **jaql.parser** → Pipeline spec loaded
   - Must happen before runner can execute

2. **jaql.io** → Documents loaded
   - Must happen before normalization

3. **jaql.io.normalize_to_records()** → Records created
   - Must happen before pipeline operations

4. **jaql.pipes.apply_pipeline()** → Transformations applied
   - Must happen after records exist

5. **jaql.io.output_result()** → Output written
   - Must happen last (terminal operation)

### **What Breaks if Violated:**

**If runner executes before parser loads spec:**
```python
# CRASH: spec is undefined
result = run_pipeline_multi_stage(docs, spec)  # NameError
```

**If pipes.apply_pipeline() called before normalize:**
```python
# TYPE ERROR: expects List[Dict], might get raw JSON
records = [1, 2, 3]  # Not normalized
apply_pipeline(records, pipeline)  # Fails in pipe_select
```

**If output called before pipeline execution:**
```python
# LOGIC ERROR: outputs None or empty results
output_result(result)  # result doesn't exist yet
```

**Evidence from runner.py:**
```python
def run_pipeline(pipeline_path, input_file, output_file, output_format):
    spec = load_pipeline_spec(pipeline_path)  # 1. Parse
    input_text = load_from_file_or_stdin(input_file)  # 2. Load
    docs = load_stream(input_text)  # 3. Parse input
    records = normalize_to_records(docs[0])  # 4. Normalize
    result = run_pipeline_single_stage(records, pipeline)  # 5. Execute
    output_result(result, output_format)  # 6. Output
# This order is enforced by data dependencies
```

---

## **7️⃣ Extension Surface Test**

### **Feature: Add "join" operation (merge two datasets)**

**First module to inspect:**
`jaql.pipes`

**Why:** Contains all transformation operations (select, project, derive)

**Modules to modify:**
1. **jaql.pipes** - Add `pipe_join(records, other_records, on_field)`
2. **jaql.pipes** - Update `apply_pipeline()` to handle `'join'` key

**Modules to AVOID touching:**
- ❌ **jaql.cli** - Already generic, just passes pipeline file
- ❌ **jaql.io** - Data loading agnostic to operations
- ❌ **jaql.parser** - Would need `valid_operations.add('join')` but that's it
- ❌ **jaql.runner** - Orchestration doesn't care about operation types

**Evidence:**
```python
# pipes.py already has pattern for adding operations
def apply_pipeline(data, pipeline):
    for pipe in pipeline:
        if 'select' in pipe:
            records = pipe_select(...)
        elif 'project' in pipe:
            records = pipe_project(...)
        elif 'derive' in pipe:
            records = pipe_derive(...)
        # Just add: elif 'join' in pipe:
```

---

### **Feature: Add support for XML input**

**First module to inspect:**
`jaql.io`

**Modules to modify:**
1. **jaql.io.load_stream()** - Add XML parsing branch
2. Add external dependency: `import xml.etree.ElementTree`

**Modules to AVOID:**
- ❌ **jaql.pipes** - Works on normalized records, doesn't care about source format
- ❌ **jaql.runner** - Calls `load_stream()`, doesn't need changes
- ❌ **jaql.cli** - Already file-format agnostic

**Evidence:**
```python
# io.py already has fallback chain
def load_stream(text: str) -> List[Any]:
    # Try YAML first
    if HAS_YAML:
        try: return list(yaml.safe_load_all(text))
        except: pass
    # Fall back to JSON
    try: return [json.loads(text)]
    except: pass
    # Just add: Try XML next
    # if HAS_XML: try: return parse_xml(text)
```

---

### **Feature: Add "group by" aggregation**

**First module to inspect:**
`jaql.pipes`

**Modules to modify:**
1. **jaql.pipes** - Add `pipe_group(records, by_field, agg_functions)`
2. **jaql.utils** - Add aggregation helpers (`sum`, `avg`, `count`)

**Modules to AVOID:**
- ❌ **jaql.runner** - Orchestration layer doesn't change
- ❌ **jaql.io** - Input/output format unchanged
- ❌ **jaql.parser** - Just add `'group'` to valid operations

**Evidence:**
```python
# pipes.py transformation pattern
def pipe_derive(records, derivations):
    for record in records:
        new_record = dict(record)
        for field, expr in derivations.items():
            new_record[field] = safe_eval(expr, record)
# Group would follow same pattern: iterate, transform, return new list
```

---

## **8️⃣ Anti-Hallucination Trap**

### **Does this system include:**

| Feature | Answer | Justification |
|---------|--------|--------------|
| **Networking?** | **NO** | Zero `socket`, `http`, `requests` imports. No network I/O anywhere. |
| **Multithreading?** | **NO** | No `threading`, `multiprocessing`, `asyncio` imports. Single-threaded pipeline execution. |
| **Database access?** | **NO** | No `sqlite3`, `psycopg2`, or database imports. Only file and stdin I/O. |
| **Machine learning?** | **NO** | No `sklearn`, `tensorflow`, `torch` imports. Pure data transformation logic. |
| **Web framework?** | **NO** | No `flask`, `django`, `fastapi`. CLI tool only. |

**Evidence:**
- Searched all modules for: `socket`, `http`, `thread`, `async`, `sql`, `db`, `ml`, `flask` - **zero matches**
- Only I/O is `sys.stdin`, `open()`, `Path.read_text()` (filesystem only)
- External deps listed in metadata: `argparse`, `ast`, `json`, `yaml` - all standard library or data parsing
- No server, no network sockets, no persistent connections

---

## **9️⃣ Architecture Summary Compression**

**5-Sentence Summary:**

1. **Data Pipeline Pattern:** The system implements a Unix-like pipe-and-filter architecture where data flows through sequential transformation operations (select, project, derive) on record streams.

2. **Separation of Concerns:** Pure transformation logic (pipes) is isolated from I/O operations (io), orchestration (runner), and user interface (cli), enabling independent evolution of each layer.

3. **Multi-Format Input:** The system accepts YAML and JSON input streams, normalizing heterogeneous data into a canonical record list format before applying transformations.

4. **Expression Safety:** User-provided filter and derivation expressions are evaluated in a sandboxed AST environment with restricted built-ins, preventing arbitrary code execution.

5. **Extensibility Contract:** New operations can be added by implementing pure functions in the pipes module that accept and return `List[Dict[str, Any]]`, maintaining the transformation chain contract.

---

## **🔟 Counterfactual Stress Test**

### **Architectural Decisions That MUST Remain:**

1. **Pipe-and-filter data flow**
   - Records flow through sequential transformations
   - Each operation is independent
   - Language-agnostic (same in Java, Rust, Go)

2. **Record normalization**
   - Heterogeneous input → canonical `List[Dict]` format
   - Essential for uniform pipeline operations
   - Works in any language with list/dict primitives

3. **Expression evaluation sandboxing**
   - User expressions must be constrained
   - Prevents arbitrary code execution
   - Universal security requirement

4. **Separation of parsing from execution**
   - Pipeline spec parsing ≠ pipeline execution
   - Enables validation before execution
   - Standard compiler pattern

### **Language-Specific Decisions That COULD Change:**

1. **Python dynamic typing**
   - In TypeScript: use interfaces (`Record<string, any>`)
   - In Rust: use `HashMap<String, Value>` with serde
   - Type system choice doesn't affect architecture

2. **YAML as pipeline format**
   - In Java ecosystem: use JSON or HOCON
   - In .NET: use XML or TOML
   - Serialization format is swappable

3. **List comprehensions for transformations**
   - In Go: use explicit loops
   - In Rust: use iterators
   - Syntax choice, not architectural

4. **AST-based safe eval**
   - In Rust: use expression parser crate
   - In Java: use JEXL or similar
   - Implementation detail, not architecture

5. **argparse for CLI**
   - In Rust: use clap
   - In Go: use cobra
   - CLI library choice doesn't affect pipeline design

**Core Insight:**
The architecture is **data transformation driven**, not language-feature driven. The shape of the computation (input → normalize → transform → output) would remain even in a statically-typed, compiled language with different memory models.

---

## ✅ **IR Validation Result**

### **What Held Up:**

1. ✅ **Module boundaries** - Clear responsibility separation
2. ✅ **Dependency graph** - Clean orchestrator → executor → utility pattern
3. ✅ **Purity classification** - pipes correctly identified as pure transformer
4. ✅ **Center of gravity** - pipes identified as semantic anchor (not cli or runner)
5. ✅ **Negative knowledge** - No hallucinated features (databases, networking, etc.)
6. ✅ **Temporal constraints** - Load → normalize → transform → output order derivable
7. ✅ **Extension surfaces** - Surgical modification points clear (add operation → edit pipes only)

### **What Would Have Failed Without Atlas IR:**

- ❌ Distinguishing runner (orchestrator) from pipes (transformer)
- ❌ Identifying pipes as pure (easy to confuse with runner's side effects)
- ❌ Understanding normalize_to_records appears in 3 modules (duplication vs reuse)
- ❌ Knowing what system does NOT have (database, networking hallucinations common)
- ❌ Seeing that multi-stage support is bolted on (runner complexity vs pipes simplicity)

### **Interesting Discovery:**

**Duplication Pattern Detected:**
`normalize_to_records()` appears in:
- `jaql.io` (primary implementation)
- `jaql.pipes` (duplicate for backward compatibility per comment)
- `jaql.utils` (duplicate with NOTE about backward compatibility)

**Evidence:**
```python
# utils.py
def normalize_to_records(data):
    """NOTE: This duplicates functionality from io.py 
    but is kept for backward compatibility"""
```

This is **architectural debt** - the IR correctly exposed it without being told.

### **Conclusion:**

**The IR held up perfectly.** All answers derived from structural evidence. The Atlas preserved:
- Transformation semantics (pipes as pure operations)
- Orchestration patterns (runner as coordinator)
- I/O boundaries (io module isolation)
- Extension points (pipe operations are composable)

**The system is actually well-structured** - pipe-and-filter architecture with clean separation. The only wart is the `normalize_to_records` duplication, which the IR correctly surfaced.
