# CALYX Atlas

**Lossless semantic serialization for LLM-assisted code reasoning.**

> Turn a real codebase into an explicit architectural map that humans and LLMs can reason over **without hallucination**.

---

## Why This Exists

LLMs fail at code reasoning when structure is implicit:

* module boundaries are blurred
* relationships must be inferred
* long files collapse attention locality

Traditional bundlers optimize for **execution**.
CALYX Atlas optimizes for **cognition**.

It makes structure explicit so reasoning can happen **without guessing**.

---

## What CALYX Atlas Does

CALYX Atlas converts a repository into a **language-native, lossless intermediate representation (IR)** that preserves:

* module identity
* dependency relationships
* architectural layers
* verbatim source code
* negative knowledge (what the system does *not* do)

Nothing is executed.
Nothing is reordered.
Nothing is summarized.

---

## What You Actually Get

Given a codebase, CALYX Atlas produces:

* a **single language-native file** (`.py`, `.lua`, `.ts`)
* containing explicit, declarative sections:

  * metadata (version, timestamps, external deps)
  * module map (name → path, layer, exports)
  * dependency graph (explicit edges)
  * preserved source (verbatim, lossless)
  * a small query API for inspection

This file is designed for **reasoning**, not running.

---

## What This Is *Not*

* ❌ Not a bundler
* ❌ Not a build system
* ❌ Not a deployment tool
* ❌ Not a runtime
* ❌ Not a code generator

Traditional bundlers:

* collapse files
* erase boundaries
* optimize for runtime

CALYX Atlas:

* preserves files
* preserves boundaries
* optimizes for understanding

---

## Why This Works

Transformers reason best over:

* explicit graphs
* flat, addressable sections
* bounded contexts
* declarative relationships

Executable code is a poor reasoning surface.
Explicit structure is not.

CALYX Atlas reshapes code into the form **LLMs already reason well over**.

---

## Supported Languages

### ✅ Python (available)

* Preserves real modules and docstrings
* Builds explicit dependency graphs
* Outputs a single `.py` Atlas file

### 🚧 Lua (in progress)

* Designed for `require()`-based systems
* Natural fit for table-driven runtimes
* Ideal for FSM and embedded systems

### 🚧 TypeScript (planned)

* Handles modern TS/ESM imports
* Exposes real dependency graphs
* Stress-tests Atlas against high-entropy ecosystems

---

## Example Use Cases

* Hand a large codebase to an LLM **without hallucinations**
* Ask *“Where should this change live?”* and get a correct answer
* Perform **surgical refactors** instead of global rewrites
* Audit responsibility boundaries (who owns what)
* Understand legacy systems quickly and safely
* Collaborate across multiple LLMs using a shared structure

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

Atlas can be used **independently**.

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

> **Representation matters more than intelligence.**

Most LLM failures in software engineering are not model failures — they are **format failures**.

CALYX Atlas treats structure as a first-class artifact, not an emergent property.

If you’re looking for a bundler, this is not it.
If you’re trying to make complex systems **legible to intelligence**, welcome.
