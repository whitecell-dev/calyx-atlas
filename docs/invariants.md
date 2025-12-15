# CALYX Atlas — Canonical Architectural Invariants

CALYX Atlas is built around a small number of **architecture-level invariants**.
These invariants are **language-agnostic**, **domain-agnostic**, and **runtime-independent**.

They define what it means for an Atlas to be *correct*, not just complete.

If these invariants hold, meaningful architectural reasoning is possible.
If they fail, the representation is insufficient — regardless of model intelligence.

---

## Invariant 1: Data Flow Invariant

> **Every system can be understood as the movement of data through distinct roles: creation, transformation, and consumption.**

### Definition

In a valid Atlas:

1. **Data creators** must be identifiable
   (modules that allocate, parse, load, or instantiate core structures)

2. **Data transformers** must be identifiable
   (modules that take data and return modified data without owning it)

3. **Data consumers** must be identifiable
   (modules that serialize, render, transmit, or terminate data)

4. The **dominant data flow graph** must be reconstructible using **module names only**, without execution.

### What the Atlas Must Preserve

* Which module *creates* a structure
* Which modules *touch* it
* Which module *terminates* it
* The **directionality** of flow (who depends on whom)

### Why This Is Non-Negotiable

LLMs (and humans) fail when:

* ownership is implicit
* transformations are interleaved with I/O
* creation and consumption collapse into the same place

Atlas forces data flow to be **explicit**, not inferred.

### Examples

* **JAQL:** `io → normalize → pipes → output`
* **g3d:** `objloader → model → camera → render`
* **HTTP client (C):** `URL string → Url struct → socket → buffer`
* **cJSON:** `text → cJSON tree → printed string`

If you cannot draw a clean arrow diagram from the Atlas alone, the invariant is broken.

---

## Invariant 2: Center of Gravity Invariant

> **Every non-trivial system has a semantic center of gravity that constrains the rest of the architecture.**

### Definition

The *center of gravity* is **not**:

* the entry point
* the CLI
* the main loop
* the biggest file

It **is**:

* the module, type, or function whose design decisions propagate outward
* the thing that, if changed, forces coordinated changes elsewhere

### How It Is Identified

From the Atlas alone, the center of gravity must be discoverable via:

* **dependency fan-in**
* **semantic coupling**
* **API exposure**
* **structural centrality**

### What the Atlas Must Preserve

* Explicit dependency edges
* Public API exposure
* Structural contracts (types, schemas, core functions)

### Why This Is Critical

Without identifying gravity, LLMs:

* edit the wrong files
* touch orchestration instead of semantics
* refactor symptoms instead of causes

Atlas makes *gravity visible*.

### Examples

* **JAQL:** `apply_pipeline()` in `pipes`
* **g3d:** `model` (not `main.lua`)
* **HTTP client:** `struct Url`
* **cJSON:** `struct cJSON` (the tree node)

If the Atlas causes the model to pick the entry point as “central,” it failed.

---

## Invariant 3: Purity / Effect Boundary Invariant

> **Architectural reasoning requires a clear separation between computation, state, and side effects.**

### Definition

Every module must be classifiable as primarily:

1. **Pure computation**

   * Deterministic
   * No I/O
   * No global mutation

2. **Stateful logic**

   * Owns memory, lifecycle, or internal state
   * No external I/O

3. **I/O or environment interaction**

   * Files, network, rendering, system calls, user input

### What the Atlas Must Preserve

* Which modules perform I/O
* Which allocate or free resources
* Which are mathematically or functionally pure
* Evidence for each classification (imports, syscalls, APIs)

### Why This Matters

LLMs routinely confuse:

* allocation with I/O
* parsing with execution
* orchestration with computation

The Atlas removes ambiguity by making **effect boundaries explicit**.

### Examples

* **cJSON:**

  * parsing = stateful
  * printing = stateful
  * tests/fuzzing = I/O

* **HTTP client:**

  * `url.c` = stateful, non-I/O
  * `connect.c` = I/O
  * `http.c` = orchestration + I/O

* **JAQL:**

  * `pipes` = pure
  * `runner` = orchestration
  * `cli/io` = I/O

If a model cannot justify purity classification using *code evidence*, the Atlas failed.

---

## Why These Three (And Only These Three)

These invariants are:

* **Necessary**: without them, architecture collapses into narrative
* **Sufficient**: with them, high-quality reasoning emerges consistently
* **Minimal**: adding more increases noise, not signal

They correspond directly to how transformers succeed:

| Invariant | Transformer Strength      |
| --------- | ------------------------- |
| Data Flow | Graph reasoning           |
| Gravity   | Central token salience    |
| Purity    | Effect boundary isolation |

This is not stylistic theory — it is **format-aligned cognition**.

---

## Canonical Failure Conditions

An Atlas is considered **invalid** if:

* Data flow cannot be reconstructed without guessing
* The entry point is misidentified as the center of gravity
* I/O and computation are structurally indistinguishable
* Negative knowledge (“this system does not do X”) cannot be derived

---

## Canonical Success Condition

> If an intelligent agent, with no domain context and no execution, can:
>
> * identify data flow
> * locate semantic gravity
> * respect effect boundaries
>   **then the Atlas is sufficient.**
