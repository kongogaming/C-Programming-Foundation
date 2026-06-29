---
# C Programming Foundation

Welcome to my foundational C Programming repository. This repository serves as a permanent, structured record of an intensive developer sprint covering core computer science fundamentals, raw memory layout, low-level pointer manipulation, permanent storage systems, and dynamic execution models.

This repository documents my progression from procedural control flow to low-level systems engineering.

---

## 📂 Repository Structure

The codebase is organized cleanly by core engineering modules to maximize scannability and modular structure:

| Folder Name | Core Concepts Covered | Key Learning Milestones |
| --- | --- | --- |
| `01_Variables_Data_Types` | Built-in primitive types, memory size allocations, standard formatting. | Mastered printf mapping and storage limitations. |
| `02_Instructions_Operators` | Type conversions, mathematical precedence, logical operators. | Evaluated operator order of operations in memory. |
| `03_Conditional_Statements` | Hierarchical control flows, switch-case systems, state tracking. | Constructed rigid boolean evaluation architectures. |
| `04_Loop_Control` | Iteration engines (`for`, `while`, `do-while`), loop nesting. | Optimized logical exits and counter limits. |
| `05_Functions_Recursion` | Procedural abstraction, call stacks, recursive base-case systems. | Engineered decoupled, reusable processing units. |
| `06_Pointers` | Memory addresses (`&`), dereferencing (`*`), pass-by-reference architecture. | Handled physical memory locations and pointers directly. |
| `07_Arrays` | Contiguous block memory sequences, indexing, multi-dimensional structures. | Matrix parsing and tracking array head addresses. |
| `08_Strings` | Character arrays, null-terminator manipulation (`\0`), standard handling. | Custom parsing algorithms for stream data. |
| `09_Structures` | Custom records, standard alignment, memory-packed object layouts. | Formulated database schemas for asset management. |
| `10_File_IO` | Permanent data streams, processing pipelines (`fscanf`, `fprintf`), EOF handling. | Built input/output scripts for text state logging. |
| `11_Dynamic_Memory` | Runtime heap allocation (`malloc`, `calloc`), resizing (`realloc`), memory freeing. | Managed heap allocations and resolved potential leaks. |

---

## 🚀 Key Project Implementations

In addition to pure conceptual research, this foundation was applied to develop standalone architectural logic engines:

### 🎮 Project 1: The Tactical Number Guesses

* **Location:** `/Projects/Number_Guessing_Game`
* **Architecture:** Implemented system-clock seeded randomized token generation using `srand(time(0))`. Loops dynamically check values using linear conditional ladders to find absolute matches.

### ⚔️ Project 2: Prairie Pledge — Rock, Paper, Scissors

* **Location:** `/Projects/Rock_Paper_Scissors`
* **Architecture:** Built an infinite execution loop where runtime random choices are evaluated against live user state inputs. Features a complete matrix breakdown of competitive combinations to catch draw, win, and lose conditions efficiently.

---

## 🛠️ Compilation & Local Deployment

To run any of the foundational modules locally on a native Linux or Unix environment, ensure you have the `gcc` compiler collection installed.

1. **Navigate to the target directory:**

```bash
cd 10_File_IO

```

2. **Compile using the GNU Compiler Collection:**

```bash
gcc Q5_ASCII_Math.c -o output_executable

```

3. **Execute the binary:**

```bash
./output_executable

```

---

## 🧠 Core Engineering Principles Maintained

Throughout this sprint, every line of code was held to strict system-level design metrics:

* **Asset-Light Operations:** Designed loops and tracking metrics to maintain clear data processing pipelines without bloat.
* **Memory Defenses:** Enforced type-safe checking parameters on pointer targets to prevent memory overflows.
* **Clean Destructors:** Maintained clear resource tracking to guarantee that every heap block opened via allocation is systematically closed using `free()`.
