## Core C++ Concepts

### Basic Syntax and Semantics:
- Variables, data types, and operators ✅
- Control structures (if, switch, loops) ✅
- Functions (declaration, definition, parameters, return values) ✅
- Pointers and references ✅

### Object-Oriented Programming (OOP):
- Classes and objects ✅
- Constructors and destructors ✅
- Inheritance (basic understanding) ✅
- Polymorphism (virtual functions) ✅
- Encapsulation and abstraction
- Exception handling

### Memory Management:
- Dynamic memory allocation (new, delete)
- Basic understanding of smart pointers (unique_ptr, shared_ptr)

### Standard Template Library (STL):
- Common containers (vector, list, map, set)
- Iterators
- Basic algorithms (sort, find)

### Basic C++11/14 Features:
- auto keyword ✅
- Range-based for loops ✅
- nullptr ✅

## Problem-Solving Skills

### Data Structures:
- Arrays and strings ✅
- Linked lists
- Stacks and queues
- Basic understanding of trees and graphs

### Algorithms:
- Sorting algorithms (bubble sort, selection sort, insertion sort)
- Searching algorithms (linear search, binary search)
- Basic recursion

### Complexity Analysis:
- Basic understanding of time and space complexity (Big O notation)

## Practical Skills

### Coding Practice:
- Solve problems on platforms like LeetCode, HackerRank, Codeforces, etc. ✅
- Practice writing clean and efficient code ✅

### Debugging and Testing:
- Basic debugging techniques ✅
- Writing simple test cases ✅

## Soft Skills

### Communication:
- Explain your thought process clearly ✅
- Ask clarifying questions ✅
- Discuss trade-offs and alternative solutions ✅

### Problem-Solving Approach:
- Break down the problem into smaller parts ✅
- Write pseudocode before actual implementation ✅
- Optimize the solution iteratively ✅

# Advanced C++ Topics

### 🔹 1. Memory & Object Model
- How memory layout works in C++ (stack vs heap, object lifetimes).
- RAII (Resource Acquisition Is Initialization) and smart pointers (`unique_ptr`, `shared_ptr`, `weak_ptr`).
- Move semantics (`&&`, `std::move`, `std::forward`) and copy elision.
- Placement new and custom allocators (relevant for compiler IR representations).

### 🔹 2. Templates & Generic Programming
- Template specialization & partial specialization.
- Variadic templates.
- Concepts (C++20) for constraining template parameters.
- CRTP (Curiously Recurring Template Pattern).
- Metaprogramming basics with `constexpr`, `if constexpr`, and template metaprogramming (TMP).

### 🔹 3. Modern C++ Features (C++17–C++23)
- Structured bindings.
- `constexpr` functions and data structures.
- `std::variant`, `std::optional`, `std::any` (useful for representing AST/IR nodes).
- Ranges and views (C++20).
- Coroutines (C++20) — valuable for parsing and compiler pipelines.

### 🔹 4. Low-level & Systems Features
- Bit manipulation (`std::bitset`, `std::bit_cast`, C++20 bit operations).
- Memory alignment (`alignas`, `alignof`, `std::aligned_storage`).
- Atomic operations and concurrency primitives.
- Inline assembly and intrinsics (if targeting architecture-specific optimizations).
- Understanding undefined behavior (critical for compiler correctness).

### 🔹 5. Error Handling & Safety
- Exceptions vs. error codes.
- `noexcept`, `[[nodiscard]]`, contracts (C++20, experimental).
- Designing APIs with strong exception safety guarantees.
- Static analysis tools in C++ (`clang-tidy`, sanitizers) to enforce best practices.

### 🔹 6. Compiler/Tooling-Oriented C++
- Abstract Syntax Tree (AST) manipulation (Clang LibTooling).
- Writing LLVM passes (requires solid C++ + IR knowledge).
- Pattern matching in C++ (C++23 `std::match` / using visitors for `variant`).
- Building domain-specific representations (think IR nodes, CFGs).
