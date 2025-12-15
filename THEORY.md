# CALYX Atlas: A Theory of Structural Code Comprehension

## Abstract

Modern large language models (LLMs) demonstrate strong local reasoning over code but consistently fail at **architectural reasoning** over real-world codebases. These failures are not primarily due to model capability, but to how code is *presented*: flattened, implicit, and structurally lossy.

This document presents **CALYX Atlas**, a structural intermediate representation (IR) designed to preserve architectural information in a form that enables reliable, architecture-level reasoning by both humans and LLMs—*without executing code*.

We argue that architectural reasoning becomes tractable when code is represented with explicit boundaries, declarative metadata, lossless source preservation, and flat, addressable structure. This hypothesis is validated empirically across Python, Lua, and C codebases.

---

## 1. The Problem: Why LLMs Struggle With Architecture

LLMs are effective at:

* local code completion,
* small refactors,
* single-function reasoning.

They struggle with:

* identifying system boundaries,
* understanding data flow,
* distinguishing orchestration from execution,
* avoiding hallucinated subsystems (databases, networking, concurrency),
* proposing safe, localized extensions.

These failures occur **even when the code itself is well-structured**.

### Root Cause

The dominant formats used to present code to LLMs are **architecturally destructive**:

* monolithic concatenation,
* stripped docstrings,
* implicit import graphs,
* heuristic dependency inference,
* execution-oriented views instead of structural ones.

LLMs are forced to *reconstruct architecture heuristically*, which leads to hallucination and boundary violations.

---

## 2. Core Hypothesis

> **LLMs can perform reliable architectural reasoning if and only if code structure is made explicit, declarative, and lossless.**

More precisely, architectural reasoning becomes possible when code is presented with:

1. **Explicit module boundaries**
2. **Declarative metadata (not inferred)**
3. **Lossless source preservation**
4. **Flat, addressable sections**
5. **Explicit dependency graphs**

CALYX Atlas is an IR designed to satisfy these constraints.

---

## 3. The CALYX Atlas IR

CALYX Atlas is not a formatter, linter, or documentation generator.
It is a **structural representation** whose goal is epistemic clarity.

Each Atlas bundle contains:

1. **Metadata**

   * language
   * module count
   * layer counts
   * external dependencies
   * generation timestamp

2. **Module Map**

   * module name → file path
   * architectural layer (UTILITY, FSM, ALBEO, etc.)
   * explicit exports

3. **Dependency Graph**

   * explicit edges between modules
   * no runtime inference

4. **Module Contents**

   * original source code preserved verbatim
   * no stripping, rewriting, or normalization

5. **Public Query Surface**

   * retrieve module source
   * list modules by layer
   * inspect dependencies
   * analyze external coupling

6. **(Optional) Runtime Shim**

   * enables execution
   * clearly separated from analysis concerns

The Atlas is intentionally **ugly for humans** and **ideal for transformers**:

* no implicit structure,
* no hidden state,
* no context-dependent meaning.

---

## 4. Architectural Invariants Preserved

Across all tested languages, the Atlas preserved the same set of architectural properties.

### 4.1 Responsibility Decomposition

LLMs reliably identified:

* which modules *own* which responsibilities,
* which modules explicitly **do not** perform certain actions.

This includes correct separation of:

* parsing vs execution,
* orchestration vs computation,
* interfaces vs implementations.

---

### 4.2 Data Flow Invariant

In every tested system, LLMs reconstructed the dominant data flow graph correctly:

**Python (JAQL):**

```
input → normalize → pipes → output
```

**Lua (g3d):**

```
model → matrices → camera → render
```

**C (HTTP client):**

```
URL string → Url struct → socket → buffer → stdout
```

**Invariant:**

> Data is created, transformed, and consumed in a linear or DAG-like structure.
> The Atlas preserves ownership and transformation boundaries.

---

### 4.3 Center of Gravity Invariant

Every system has a *semantic anchor*—a construct whose change would break the rest of the system:

| Language | Center of Gravity     |
| -------- | --------------------- |
| Python   | `apply_pipeline`      |
| Lua      | `model` / math tables |
| C        | `struct Url`          |

This center is **not always the entry point**.
It may be:

* a function,
* a data structure,
* or an interface contract.

The Atlas consistently enabled correct identification of this center.

---

### 4.4 Purity Invariant (Refined)

The Atlas enables a three-way distinction that is often blurred:

| Category            | Description                            |
| ------------------- | -------------------------------------- |
| Pure                | Deterministic, no state or I/O         |
| Stateful (internal) | Allocation, mutation, parsing          |
| Side-effectful      | I/O, syscalls, environment interaction |

Example (C):

* `url.c` → stateful but non-I/O
* `connect.c` → I/O
* `http.c` → orchestration + I/O

This distinction is critical for:

* safe refactoring,
* concurrency reasoning,
* security analysis.

---

### 4.5 Temporal Ordering Invariant

The Atlas preserves **required execution order** without executing code.

LLMs correctly inferred:

* what must happen first,
* what must happen last,
* what breaks if order is violated.

This held even in C, where ordering is implicit and enforced only by convention.

---

### 4.6 Negative Knowledge (Anti-Hallucination)

A critical test: *What is NOT in the system?*

Across all cases, LLMs correctly concluded absence of:

* networking,
* multithreading,
* databases,
* TLS,
* web frameworks,
* background workers.

This is where traditional monolithic bundles fail most often.

---

## 5. Why C Was the Crucible

C represents the hardest possible environment for architectural inference:

* no runtime reflection,
* header/source split,
* manual memory management,
* preprocessor macros,
* implicit contracts.

Despite this, the Atlas enabled **more precise reasoning** than in higher-level languages.

### Key Observation

C forces architecture to be expressed through:

* explicit data structures,
* explicit lifetimes,
* explicit dependencies.

This made architectural centers (e.g., `struct Url`) *unavoidable*.

**Conclusion:**
If the Atlas works on C, it is language-agnostic.

---

## 6. Practical Implications

This theory has immediate, non-academic value.

### 6.1 Legacy Code Archaeology

Understand large, undocumented systems without running them.

### 6.2 Architecture Review Without Execution

Analyze systems in restricted or air-gapped environments.

### 6.3 Safer AI-Assisted Refactoring

Constrain LLM edits to correct modules and layers.

### 6.4 Cross-Language Systems

Unify architectural understanding across Python, Lua, C, etc.

---

## 7. What CALYX Atlas Is Not

* ❌ Not a documentation generator
* ❌ Not a linter
* ❌ Not a formatter
* ❌ Not a build system
* ❌ Not an optimizer

It does not infer intent or correctness.

It preserves **structure**, not meaning.

---

## 8. Limitations

* Requires reasonable module boundaries to exist
* Cannot infer architecture that is not encoded
* Does not validate runtime correctness
* Does not replace tests or execution

The Atlas is epistemic, not executable-first.

---

## 9. Future Work

* TypeScript / JavaScript Atlas
* Rust Atlas (ownership-aware IR)
* Diffable Atlas versions for architectural regression
* Automated “architecture Q&A” harnesses
* Reverse Atlas (lossless unbundling)

---

## 10. Conclusion

CALYX Atlas demonstrates that architectural reasoning is not an emergent property of larger models—it is a property of **how code is represented**.

By making structure explicit, declarative, and lossless, we enable both humans and machines to reason about software systems *as systems*, not as token streams.

This is not a tooling improvement.

It is **epistemic infrastructure**.
