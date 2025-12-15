# CALYX Atlas Format Specification

**Version:** 1.0 (draft)
**Status:** Experimental / Stabilizing
**Scope:** Representation only (no execution semantics)

---

## 1. Purpose

The **CALYX Atlas format** defines a **lossless, language-native intermediate representation (IR)** for software systems, optimized for **architectural reasoning by humans and large language models**.

The format is designed to:

* preserve semantic structure
* make architectural boundaries explicit
* eliminate heuristic inference
* prevent hallucination during analysis
* remain reversible back to original source

The Atlas format is **not executable by default** and **does not define runtime behavior**.

---

## 2. Design Goals

### 2.1 Primary Goals

1. **Losslessness**

   * All original source code MUST be preserved verbatim
   * No rewriting, minification, or normalization

2. **Explicit Structure**

   * Module boundaries MUST be explicit
   * Dependencies MUST be declared, not inferred

3. **Language-Native Encoding**

   * The Atlas MUST be a valid file in the host language
   * No external parsers required to load the file

4. **LLM-Optimized Layout**

   * Flat, addressable sections
   * No implicit state
   * No hidden relationships

5. **Reversibility**

   * Original repository structure MUST be reconstructable

---

## 3. Non-Goals

The Atlas format explicitly does **not** attempt to:

* build or compile code
* execute the system
* replace package managers
* enforce architectural correctness
* generate new code

It is a **representation**, not an opinionated framework.

---

## 4. High-Level Structure

An Atlas file is a **single language-native source file** composed of **explicit, ordered sections**.

### Required Sections (in order):

1. Metadata
2. Module Map
3. Dependency Graph
4. Module Contents
5. Query / Inspection API

### Optional Sections:

* Runtime shim (explicitly separated)
* Tooling metadata
* Checksums / hashes

---

## 5. Section Specifications

### 5.1 Metadata Section

The metadata section provides global, declarative context.

#### Required Fields

| Field                   | Type            | Description                                |
| ----------------------- | --------------- | ------------------------------------------ |
| `format_version`        | string          | Atlas format version                       |
| `language`              | string          | Source language (e.g. `"python"`, `"lua"`) |
| `generated_at`          | ISO-8601 string | UTC generation timestamp                   |
| `total_modules`         | integer         | Count of bundled modules                   |
| `external_dependencies` | list[string]    | External libraries used                    |

#### Optional Fields

* tool version
* git commit hash
* repository root name

**Constraints:**

* Metadata MUST NOT reference executable behavior
* Metadata MUST be static data only

---

### 5.2 Module Map

The module map is a **flat dictionary** describing all modules in the system.

Each module entry MUST include:

| Field     | Type         | Description                    |
| --------- | ------------ | ------------------------------ |
| `name`    | string       | Canonical module name          |
| `path`    | string       | Original relative file path    |
| `layer`   | string       | Architectural layer (freeform) |
| `exports` | list[string] | Publicly exposed symbols       |

**Rules:**

* No nested structures
* No inferred layers
* All fields MUST be explicit

The module map defines **identity**, not behavior.

---

### 5.3 Dependency Graph

The dependency graph defines **explicit directed edges** between modules.

* Represented as: `module_name → [dependency_names]`
* Dependencies MUST be internal modules only
* External libraries MUST NOT appear here

**Rules:**

* No transitive inference
* Cycles are allowed but MUST be explicit
* Order is not semantic

This section is the **authoritative source of coupling**.

---

### 5.4 Module Contents

This section contains the **verbatim source code** for every module.

#### Requirements

* Source MUST be preserved byte-for-byte
* No formatting changes
* No import stripping
* No execution wrapping

Each module MUST be annotated with:

* module name
* original path
* layer

**Important:**
This is the *only* section that contains executable code, and it is treated as **opaque text**.

---

### 5.5 Query / Inspection API

The Atlas MUST expose a minimal, read-only API for inspection.

Typical functions include:

* `list_modules(layer=None)`
* `get_module(name)`
* `get_dependencies(name)`
* `get_metadata()`

**Constraints:**

* MUST NOT execute module code
* MUST NOT perform I/O
* MUST NOT mutate internal state

The API exists purely to enable **interactive reasoning**.

---

## 6. Runtime Shim (Optional)

A runtime shim MAY be included **only if clearly separated**.

Rules:

* MUST NOT pollute reasoning sections
* MUST NOT alter module contents
* MUST be optional to invoke

If included, the shim MUST be clearly labeled and skippable.

---

## 7. Language-Specific Constraints

### 7.1 Python

* Atlas file MUST be valid Python
* Sections represented via dictionaries / lists
* Source stored as multiline strings

### 7.2 Lua

* Atlas file MUST be valid Lua
* Sections represented via tables
* Source stored as long bracket strings

### 7.3 TypeScript (planned)

* Atlas file MUST be valid TypeScript
* Prefer `const` objects with readonly typing
* No reliance on runtime imports

---

## 8. Architectural Invariants

The following invariants are assumed across all Atlases:

### 8.1 Data Flow Invariant

All systems can be reasoned about as:

```
creation → transformation → consumption
```

### 8.2 Center of Gravity Invariant

Every system has one or more **semantic anchors**:

* a function
* a struct
* a data contract

The Atlas must make these discoverable.

### 8.3 Purity Invariant

Modules fall into:

* pure computation
* stateful logic
* I/O

The Atlas must preserve evidence for this classification.

---

## 9. Negative Knowledge Preservation

The Atlas format MUST allow a reasoner to determine:

* what the system does **not** do
* which capabilities are absent
* which libraries are not used

This is achieved by:

* explicit dependency lists
* preserved imports
* absence of APIs

---

## 10. Validation Criteria

An Atlas is considered **valid** if:

1. All original source files are present
2. Module identities are stable
3. Dependency graph matches imports
4. No executable behavior is introduced
5. A human can reconstruct the repo layout

---

## 11. Versioning

* Format versions MUST be explicit
* Backward compatibility SHOULD be preserved
* Breaking changes require version bump

---

## 12. Summary

The CALYX Atlas format is a **semantic serialization standard**, not a tool.

It exists to make architecture **legible**, **auditable**, and **portable across intelligences**.

> Execution is ephemeral.
> Structure is durable.
