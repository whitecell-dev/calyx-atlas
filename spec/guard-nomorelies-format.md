# 📘 **1. Formal Specification: `no-more-lies.json`**

> **Purpose:** A *truth constraint file* that explicitly defines (1) facts the LLM must never assert, (2) inferences it must never fabricate, and (3) honesty rules governing all statements about the system.

## 🎯 **Definition**

### **File Identity**

```
Filename: no-more-lies.json
Format Version: calyx-nomorelies-1.x
Role: Truth Constraint Specification
```

---

## 🎛️ **Required Top-Level Fields**

### **1. `format_version`**

* **Type:** string
* **Requirement:** MUST follow `calyx-nomorelies-<major>.<minor>`
* **Purpose:** Versioning of semantics and validator expectations.

---

### **2. `project_name`**

* **Type:** string
* **Purpose:** The canonical name of the governed project.

---

### **3. `never_claim`**

* **Type:** array of strings

* **Interpretation:**
  **Statements the LLM is strictly forbidden to assert as true**, under any circumstance.

* **Violations:**
  MUST trigger immediate rejection mode.

* **Examples:**

  * nonexistent features
  * unsupported architectures
  * unimplemented algorithms
  * safety guarantees the system does not enforce

---

### **4. `never_infer`**

* **Type:** array of strings

* **Interpretation:**
  Patterns or categories of inference the LLM must not generate, even if they appear "reasonable".

* **This prevents:**

  * invented functions
  * invented struct fields
  * imaginary modules
  * fictitious dependencies

---

### **5. `truth_rules`**

* **Type:** array of strings

* **Interpretation:**
  Mandatory **truth constraints** that govern *all* statements about the project.

* **If a rule cannot be satisfied → The LLM must respond with uncertainty or decline.**

---

### **6. `honesty_enforcement`**

* **Type:** object

* **Fields:** implementation-defined semantic constraint labels

* **Interpretation:**
  Structural truth invariants the LLM must uphold whenever describing behavior.

* **Examples:**

  * `"memory_truth"`
  * `"error_truth"`
  * `"structural_truth"`

---

## 🧪 **Validation Rules**

A `no-more-lies.json` file is **valid** if:

1. All required fields exist
2. `never_claim` and `never_infer` are arrays of strings
3. No field asserts positive capabilities (file must be purely restrictive)
4. There is **no content describing desired outcomes** (that belongs in `guard.json` or `semantic.json`)

---

## 🔐 **Behavioral Contract for LLMs**

When loaded, the LLM must:

1. **Evaluate every outgoing claim** against `never_claim`.
2. **Evaluate every proposed inference** against `never_infer`.
3. **If violation detected:**
   → Output must be a *rejection*, not a workaround.
4. **If truth is ambiguous:**
   → LLM must answer *“insufficient evidence exists in source or semantic files.”*

---

---

# 📗 **2. Formal Specification: `guard.json`**

> **Purpose:** Defines **structural boundaries** on what mutations, extensions, or refactors the LLM may or may not propose.

This is the **mutation governance file**.

---

# 🎯 **Definition**

### **File Identity**

```
Filename: guard.json
Format Version: calyx-guard-1.x
Role: Mutation Constraint Specification
```

---

# 🧩 **Required Top-Level Fields**

### **1. `format_version`**

* MUST match `calyx-guard-<major>.<minor>`.

---

### **2. `project_name`**

* Identifies the governed project.

---

### **3. `frozen_interfaces`**

* **Type:** array of strings
* **Meaning:**
  Hard architectural elements the LLM may **never** modify, remove, or reinterpret.

Examples:

* Struct layouts
* Public API signatures
* Parsing models
* Threading models
* ABI boundaries

If a user request would modify one of these →
**LLM must reject the request outright.**

---

### **4. `forbidden_mutations`**

* **Type:** array of strings
* **Interpretation:**
  Categories of modification that the LLM must never propose.

Typical categories:

* Adding new dependencies
* Changing ownership models
* Changing data structure layouts
* Introducing threading or async
* Removing compatibility guarantees
* Altering memory allocation semantics

---

### **5. `allowed_mutations`**

* **Type:** array of strings
* **Interpretation:**
  Classes of transformation **explicitly permitted** if they do not violate frozen interfaces.

This is a whitelist — the *only* safe mutation categories.

---

### **6. `stability_levels`**

* **Type:** object with fields:

  * `frozen`: array
  * `stable`: array
  * `experimental`: array

* **Interpretation:**
  Hierarchy of API/ABI durability expectations.

Mutation logic:

```
frozen        → NEVER modify
stable        → MAY extend, MUST preserve backward compatibility
experimental  → MAY alter if user explicitly requests
```

---

### **7. `mutation_rules`**

* **Type:** object
* **Interpretation:**
  Deep constraints tied to architecture:

Allowed example categories:

* `"memory_model"`
* `"parsing_rules"`
* `"serialization_rules"`

Each contains `"must_preserve"` arrays.

These provide **runtime-level boundaries**.

---

# 🧪 **Validation Rules**

A valid `guard.json` must:

1. Include all required keys
2. List **no positive claims** (those belong in semantic.json)
3. Have non-empty `frozen_interfaces`
4. Not contradict `semantic.json` invariants
5. Not loosen any constraint defined in `no-more-lies.json`
6. Provide at least one `"allowed_mutations"` entry

---

# 🔐 **Behavioral Contract for LLMs**

When processing a mutation request, the LLM must:

### **Reject** the request if:

* It changes a frozen interface
* It belongs to `forbidden_mutations`
* It alters any `"must_preserve"` rule
* It requires new dependencies
* It modifies invariants in `semantic.json`

### **Accept** the request if:

* It is listed under `allowed_mutations`
* It does not violate `frozen_interfaces`
* It preserves all semantic invariants

### **Negotiate** if:

* Request is ambiguous
* Request implies cascade changes
* Request is allowed but requires disclaimers

---

# 🧠 **Meta-Model Summary**

Together, these formal specs define:

| File                | Function            | Analogy                    |
| ------------------- | ------------------- | -------------------------- |
| `semantic.json`     | Meaning             | The laws of physics        |
| `no-more-lies.json` | Truth boundaries    | Can't walk through walls   |
| `guard.json`        | Mutation boundaries | Can't rebuild the universe |

You now have **precise** and **machine-validatable** CALYX governance specs.
