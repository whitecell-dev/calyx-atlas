# CALYX Atlas

**Lossless semantic serialization for LLM-assisted code reasoning.**

CALYX Atlas converts real codebases into a **language-native, LLM-optimized intermediate representation** that preserves *structure, intent, and relationships* — not just source text.

This is **not** a packaging tool.
This is **an atlas of a codebase**: a structured map that allows humans and large language models to reason about systems without hallucinating, collapsing boundaries, or inventing architecture.

---

## Why CALYX Atlas Exists

LLMs are extremely good at reasoning — **if the structure is explicit**.

They fail when:

* module boundaries are implicit
* relationships must be inferred
* semantics are scattered across execution glue
* long files collapse attention locality

Traditional “monolithic bundles” optimize for execution.
**CALYX Atlas optimizes for cognition.**

It preserves:

* module identity
* dependency graphs
* architectural layers
* docstrings and intent
* negative knowledge (what the system does *not* do)

So models can reason *without guessing*.

---

## What CALYX Atlas Is (and Is Not)

### ✅ It *is*

* A **lossless semantic transport format**
* A **LLM-native intermediate representation (IR)**
* A **reversible encoding** of a codebase
* A way to safely move systems between humans and models
* A foundation for AI-assisted refactoring, auditing, and extension

### ❌ It is *not*

* A build system
* A deployment tool
* A zip / pack / bundle utility
* A runtime replacement
* A code generator

---

## Core Idea

> **Executable code is a poor reasoning surface.
> Explicit semantic graphs are not.**

CALYX Atlas turns a repo into **explicit data**:

* what modules exist
* where they live
* how they depend on each other
* what they export
* what layer they belong to
* what external dependencies they require
* their source, preserved verbatim

This aligns with how transformers actually process information.

---

## Atlas Format (High Level)

A CALYX Atlas file is a **single language-native file** containing clearly delimited, declarative sections:

* **Metadata** (format version, generation time, external deps)
* **Module Map** (name → path, layer, exports)
* **Dependency Graph** (explicit edges)
* **Module Contents** (verbatim source, lossless)
* **Public Query API** (for inspection)
* **Optional Runtime Shim** (kept separate from reasoning surface)

The format is:

* flat
* explicit
* addressable
* reversible
* language-agnostic in concept

---

## Supported Languages

### ✅ Python (available now)

* Parses real Python modules
* Preserves docstrings, imports, AST-level intent
* Builds explicit dependency graphs
* Outputs a single `.py` Atlas file

### 🚧 Lua (in progress)

* Designed for `require()`-based systems
* Natural fit for table-driven Atlas structures
* Ideal for CALYX FSM / runtime layers

### 🚧 TypeScript (planned)

* Handles modern TS imports and project layouts
* Exposes real dependency graphs (no barrel magic)
* Stress-tests Atlas against high-entropy ecosystems

---

## Example Use Cases

* Hand a complex system to an LLM **without hallucinations**
* Ask “where should this change live?” and get a correct answer
* Perform **surgical refactors** instead of global rewrites
* Split monoliths *intentionally*, not heuristically
* Audit responsibility boundaries (who does what)
* Preserve architectural intent across time and models
* Collaborate across multiple LLMs safely

---

## Why This Works (Briefly)

LLMs struggle with:

* implicit structure
* heuristic inference
* long-range dependencies

They excel at:

* explicit graphs
* named sections
* declarative relationships
* local reasoning over bounded contexts

CALYX Atlas reshapes code into the form **models already reason well over**.

---

## Relationship to CALYX

CALYX Atlas is part of the broader **CALYX ecosystem**, which focuses on:

* explicit constraints
* layer-aware architecture
* deterministic computation
* auditability
* reasoning as infrastructure

Atlas handles **representation**.
Other CALYX components handle **execution, orchestration, and memory**.

You can use Atlas independently.

---

## Repository Structure (Planned)

```
calyx-atlas/
├── python/
│   └── calyx_atlas_py.py
├── lua/
│   └── calyx_atlas_lua.lua
├── typescript/
│   └── calyx_atlas_ts.ts
├── spec/
│   └── atlas-format.md
├── examples/
│   └── bundled-repos/
└── README.md
```

---

## Philosophy

> **Representation matters more than intelligence.**

Most LLM failures in software engineering are not model failures — they are **format failures**.

CALYX Atlas treats structure as a first-class artifact, not an emergent property.

---

## Status

* Python Atlas: ✅ working
* Lua Atlas: 🔥 in progress
* TypeScript Atlas: 🧪 upcoming
* Formal spec: drafting
* Stress testing on random GitHub repos: ongoing

---

## License

MIT (subject to change if Atlas becomes part of a broader CALYX protocol release).

---

## Final Note

This project is intentionally *boring in execution* and *radical in representation*.

If you’re looking for a bundler, this is not it.
If you’re trying to make complex systems **legible to intelligence**, welcome.




