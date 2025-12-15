# CALYX Atlas – Architecture-Agnostic Deep Dissection Prompts

These prompts assume:

* The repository has been serialized into a single Atlas file
* The Atlas preserves module boundaries, paths, dependencies, and source
* No prior domain knowledge (e.g., “this is a game engine”) is assumed

---

## 1️⃣ Responsibility Decomposition Test (Non-Narrative)

**Prompt**

```
For each module in this Atlas:
1. State its primary responsibility in one sentence.
2. State one responsibility it explicitly does NOT have.
Use only evidence from code structure, imports, and function usage.
```

**Why this matters**

* Forces *negative knowledge*
* Prevents “everything does everything” hallucinations
* Tests whether boundaries survive flattening

**Failure mode**

> Vague descriptions (“handles various tasks”) or invented features

---

## 2️⃣ Data Ownership & Flow Test

**Prompt**

```
Identify:
1. Which modules create core data structures
2. Which modules transform them
3. Which modules only consume them

Then describe the dominant data flow graph using module names only.
```

**Why this matters**

* Distinguishes *producers vs transformers vs consumers*
* Works for engines, compilers, CLIs, libraries

**Expected for g3d**

* objloader → model → camera → render
* vectors/matrices as pure transformers

---

## 3️⃣ Purity vs Side-Effect Classification

**Prompt**

```
Classify each module as primarily:
- Pure computation
- Stateful logic
- I/O or environment interaction

Justify each classification with specific code evidence.
```

**Why this matters**

* This is *architecture*, not style
* LLMs usually fail this unless structure is explicit

**Key signal**

* Camera and init flagged as side-effectful
* Vectors/matrices flagged as pure

---

## 4️⃣ Replaceability / Swap Test

**Prompt**

```
If you were forced to replace ONE module without modifying the rest of the system:
1. Which module would be easiest to replace?
2. Which would be hardest?
Explain why using dependency direction and coupling evidence.
```

**Why this matters**

* Tests coupling awareness
* Reveals “gravity wells” in architecture

**This is very hard** without a good IR.

---

## 5️⃣ Hidden Centrality Test

**Prompt**

```
Which module acts as the architectural center of gravity?
Not the entry point, but the module whose design most constrains the rest of the system.
Explain using dependency fan-in and semantic coupling.
```

**Why this matters**

* Entry points lie
* True architecture lives elsewhere

For g3d, this should **not** be `main.lua`.

---

## 6️⃣ Temporal Ordering Test (Runtime-Agnostic)

**Prompt**

```
Describe the minimal correct order in which modules must be initialized or used at runtime.
What would break if this order were violated?
```

**Why this matters**

* Tests whether the model can infer *temporal constraints*
* No runtime traces needed

---

## 7️⃣ Extension Surface Test

**Prompt**

```
You want to add a new feature: [X].
List:
1. The first module you would inspect
2. The module(s) you would most likely modify
3. The modules you must avoid touching
Explain why for each.
```

Use variants:

* “new collision shape”
* “new camera mode”
* “new model format”

**Why this matters**

* Measures *surgical reasoning*
* Prevents shotgun edits

---

## 8️⃣ Anti-Hallucination Trap (Critical)

**Prompt**

```
Does this system include:
- Networking?
- Multithreading?
- GPU compute beyond graphics rendering?
- Asset hot-reloading?

Answer YES or NO for each, with justification.
```

**Why this matters**

* Forces restraint
* Exposes hallucination tendencies immediately

---

## 9️⃣ Architecture Summary Compression Test

**Prompt**

```
Summarize the architecture of this system in exactly 5 sentences.
Each sentence must refer to a different architectural concern.
```

**Why this matters**

* Tests abstraction ability
* Over-compression reveals misunderstandings

---

## 🔟 Counterfactual Stress Test

**Prompt**

```
If this system were rewritten in another language, which architectural decisions must remain unchanged for it to still be the same system?
Which decisions are language-specific and could change freely?
```

**Why this matters**

* Separates *architecture* from *implementation*
* This is where Atlas really shines

---

## Why These Questions Are the Right Ones

These prompts are:

* ✅ **Language-agnostic**
* ✅ **Domain-agnostic**
* ✅ **Architecture-centric**
* ✅ **Negative-knowledge enforcing**
* ✅ **Resistant to narrative fluff**

They don’t ask *what the code does* —
They ask *how the system thinks*.

---

## Key Insight (Important)

Your g3d example already shows something crucial:

> The model was able to infer *engine structure* without being told it was an engine.

That means the Atlas preserved:

* semantic clustering
* responsibility gradients
* dependency intent

That’s the bar.

