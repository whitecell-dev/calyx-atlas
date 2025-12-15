## ✍️ The CALYX Mutation Prompts (CMP)

**Purpose:** Test $\text{LLM}$'s ability to generate code that strictly adheres to the boundaries, purity, and interfaces defined in the $\text{Atlas}$.

### **I. Interface Contract & Data Model Mutability**

#### **M1. Core Data Model Extension (Hardest)**

```
Context: The architectural "center of gravity" [C] uses a core data structure, [STRUCT_NAME], which is coupled to modules X, Y, and Z.

Prompt: "We need to add a non-breaking, optional field [NEW_FIELD] to [STRUCT_NAME]. 
1. Provide the exact C, Python, or Lua code to modify [STRUCT_NAME].
2. Provide the minimal, non-breaking function signature required in module [X] to safely initialize this field.
3. List the modules that would require recompilation/re-import, even if they don't use the new field."
```

#### **M2. Primitive API Isolation (Pure Layer)**

```
Context: Module [P] is classified as 'Pure Computation' and provides the primitive [PRIMITIVE_FUNCTION].

Prompt: "Module [P] needs a new helper function, [NEW_HELPER], to refactor 10 lines out of [PRIMITIVE_FUNCTION].
1. Provide the code for [NEW_HELPER] ensuring it takes NO external state and performs NO I/O.
2. Provide the minimal code change to [PRIMITIVE_FUNCTION] to use [NEW_HELPER].
3. Explain why [NEW_HELPER] should NOT be added to the public header/exports of module [P]."
```

### **II. Boundary Enforcement and Glue Generation**

#### **M3. Safe Glue Implementation (Layer Boundary)**

```
Context: The system needs new functionality, [NEW_FEATURE], which involves reading state from [SOURCE_MODULE] and writing the result to [TARGET_MODULE].

Prompt: "Create a new function, [GLUE_FUNCTION], in a new Utility Layer file to implement [NEW_FEATURE].
1. The function must take and return *only* simple data types (e.g., int, string, simple struct).
2. Write the $\text{I/O}$ boundary code that calls [SOURCE_MODULE]'s accessor function.
3. Write the $\text{I/O}$ boundary code that calls [TARGET_MODULE]'s mutation function.
4. The function must include a comment stating, 'This function is the boundary transform layer.'"
```

#### **M4. Error Handling Isolation**

```
Context: Module [E] generates a system error, [ERROR_CODE], during a failure condition. The error must be handled by the consuming module [H].

Prompt: "Module [H] currently handles [ERROR_CODE] incorrectly. Modify module [H]'s primary handler function to:
1. Log the error using the system's logging primitive (assume it is available).
2. Transform [ERROR_CODE] into a high-level, human-readable string using a local lookup table (or equivalent).
3. Ensure the error is consumed and does NOT propagate further up the call stack."
```

### **III. Anti-Hallucination and Constraint Enforcement**

#### **M5. Constrained I/O Generation**

```
Context: Module [I] is the only module permitted to perform $\text{I/O}$ (e.g., file writing, logging).

Prompt: "Write a new function in module [I] called [FUNCTION_NAME] that serializes the data structure [DATA_STRUCT] into a local file named 'output.log'.
1. The function must explicitly use the $\text{I/O}$ primitives visible in the $\text{Atlas}$ (e.g., fopen/fwrite/fclose, or equivalent file stream API).
2. The function must include explicit error handling for $\text{I/O}$ failure, returning a success/fail code.
3. Ensure the function does NOT attempt to parse or interpret the contents of [DATA_STRUCT], only serialize it."
```

#### **M6. Forbidden Feature Resistance**

```
Context: The $\text{Anti-Hallucination Trap}$ section explicitly states this system has NO [FORBIDDEN_FEATURE] (e.g., concurrency, networking).

Prompt: "A new requirement asks for [FEATURE_REQUIRING_FORBIDDEN_FEATURE] (e.g., 'Make the file processing run in parallel').
1. Reject the request using a comment, citing the Atlas constraint.
2. Propose an **architecturally compliant** alternative that achieves the goal without introducing [FORBIDDEN_FEATURE] (e.g., if concurrency is forbidden, propose a batched, synchronous solution)."
```



