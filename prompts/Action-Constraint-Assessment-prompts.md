# 🧠 **CALYX Action-Constraint Assessment (CACA) - Universal Prompt Set**

**Purpose:** Test LLM's ability to **reason and act within architectural constraints** derived from any CALYX Atlas.

## **GENERIC FRAMEWORK PROMPTS**

### **A. Boundary Integrity Tests**

#### **A1. Layer/Module Isolation Test**
```
Context: In this system, modules [X] and [Y] have been identified as architecturally separate with clear responsibility boundaries.

Prompt: "We need to add a new feature that conceptually sits between the responsibilities of modules [X] and [Y]. 
1. Describe why implementing this feature entirely within module [X] would violate architectural boundaries.
2. Describe why implementing it entirely within module [Y] would also violate boundaries.
3. Propose the minimal new interface/glue that respects both modules' existing contracts."
```

#### **A2. Purity Boundary Test**
```
Context: Module [P] has been classified as "Pure Computation" while module [I] is "I/O or Environment Interaction".

Prompt: "A developer proposes moving functionality from module [I] into module [P] to 'simplify the codebase'.
1. Identify which specific architectural invariant this violates.
2. Predict one concrete runtime failure that would result.
3. Propose an alternative that keeps the purity boundary intact."
```

### **B. Center-of-Gravity Stress Tests**

#### **B1. Core Constraint Identification**
```
Context: Module [C] has been identified as the architectural "center of gravity".

Prompt: "Suppose we must replace the underlying technology of module [C] (e.g., change database engine, graphics API, networking stack).
1. List the THREE most critical invariants that the new implementation MUST preserve.
2. For each, explain which downstream modules would break if the invariant were violated.
3. Identify which metrics you would monitor after the change to verify architectural integrity."
```

#### **B2. Temporal Constraint Violation**
```
Prompt: "The system currently initializes modules in order: A → B → C → D. 
A developer proposes reordering to: A → C → B → D to improve startup time.
1. Using only dependency evidence from the Atlas, predict which module will fail.
2. Explain the nature of the failure (compile-time, runtime deadlock, data corruption).
3. Propose a safer optimization that respects temporal constraints."
```

### **C. Negative Knowledge & Anti-Hallucination**

#### **C1. Feature Absence Interrogation**
```
Prompt: "A product manager requests adding [SPECIFIC CAPABILITY] to the system.
1. Using the Atlas's explicit 'does not include' constraints, state whether this capability exists.
2. If absent, identify which architectural principle explains its absence.
3. Estimate the minimum number of modules that would need modification to add it safely."
```

#### **C2. "Easy" Feature Trap**
```
Prompt: "A developer says: 'Adding [SIMPLE-SOUNDING FEATURE] should be easy - it's just a few lines of code.'
1. Identify which module they would likely modify.
2. Explain why this 'simple' change would actually violate architectural constraints.
3. Map the complete dependency chain that would be affected."
```

### **D. Evolutionary Architecture Tests**

#### **D1. Replacement Difficulty Assessment**
```
Prompt: "Rank all modules from EASIEST to HARDEST to replace with a different implementation.
For each, provide:
1. Coupling score (1-10) based on inbound/outbound dependencies
2. Interface stability assessment (volatile/stable/frozen)
3. One concrete test that would fail if replaced incorrectly"
```

#### **D2. Extension Surface Mapping**
```
Prompt: "To add feature [NEW_CAPABILITY]:
1. Identify the FIRST module you would inspect (not modify)
2. List modules you would PROBABLY need to modify (ordered by likelihood)
3. List modules you MUST AVOID touching (with justification for each)
4. Propose where to add integration tests to prevent regression"
```

### **E. Cross-Cutting Concern Tests**

#### **E1. Error Handling Architecture**
```
Prompt: "Analyze how errors flow through this system:
1. Which modules generate errors?
2. Which modules transform/translate errors?
3. Which modules consume/display errors?
4. Identify any architectural violation where errors cross purity boundaries."
```

#### **E2. Configuration & State Management**
```
Prompt: "Map the configuration/state architecture:
1. Which modules READ configuration/state?
2. Which modules WRITE configuration/state?
3. Which modules OWN configuration/state?
4. Identify any violations of the 'single writer principle'."
```

---

## **SCORING RUBRIC (Per Response)**

Each response is scored 0-3 on:

1. **Constraint Awareness** (0-3)
   - 0: Ignores architectural constraints
   - 1: Mentions constraints but misapplies
   - 2: Correctly identifies relevant constraints
   - 3: Uses constraints to derive correct action

2. **Negative Knowledge** (0-3)
   - 0: Hallucinates missing capabilities
   - 1: Acknowledges some limitations
   - 2: Correctly identifies what's absent
   - 3: Explains WHY absence is architecturally intentional

3. **Dependency Reasoning** (0-3)
   - 0: Ignores dependencies
   - 1: Identifies direct dependencies only
   - 2: Maps transitive dependencies
   - 3: Predicts cascading failures

4. **Boundary Respect** (0-3)
   - 0: Violates layer/module boundaries
   - 1: Respects boundaries but awkwardly
   - 2: Clean boundary preservation
   - 3: Uses boundaries to simplify solution

**Total:** 0-12 points per prompt




