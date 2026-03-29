<br><br>

<p align="center"><font size="6"><b>Zed</b> Language — Project Report</font></p>

<br>

<p><font size="5"><b>Overview</b></font></p>

**Zed** is a statically-typed, compiled systems language that transpiles to **C++17**. It is especially inspired by **C/C++**, **Odin**, **Jai**, and **Zig** languages. Source files use the `.z` extension and live under the `ZedLang` namespace. The language targets systems-level programming while introducing modern ergonomics absent from **C/C++**.

<br>

<p><font size="5"><b>Different From C/C++</b></font></p>

<br>

| Feature             | C/C++                              | Zed                                                          |
| ------------------- | ---------------------------------- | ------------------------------------------------------------ |
| Integer types       | platform-dependent (`int`, `long`) | explicit-width (`i8`, `i32`, `u64`, …)                       |
| Constants           | `#define` / `const`                | `::` with compile-time expression folding                    |
| Type inference      | C++11 `auto` (limited)             | `:=`                                                         |
| Dereference         | prefix `*p`                        | postfix `p.*`                                                |
| Type casts          | implicit coercions allowed         | explicit-only via `cast(T)` / `bit_cast(T)`                  |
| Switch              | fallthrough by default             | `match` — no fallthrough, dot-shorthand for enums            |
| Compile-time branch | `#if` preprocessor                 | `when` — first-class language construct                      |
| C header import     | `#include`                         | `cimport "header.h"` — types and functions in scope directly |
| Struct literals     | no named-field syntax              | `Vec2{ x = 1.0, y = 2.0 }` + spread `{ ..base, x = 5.0 }`    |
| for loop            | `for`, `while`, `do-while`         | single `for` keyword, six unified forms                      |
| `++` / `--`         | yes                                | removed — use `+= 1` / `-= 1`                                |

<br><br><br>

<p><font size="5"><b>Not (by default) in C/C++, but present in Zed</b></font></p>

<br>

| Feature                 | Description                                                                                |
| ----------------------- | ------------------------------------------------------------------------------------------ |
| **Slices**              | Fat-pointer type `[]T` with range syntax `arr[1 ..< 4]` / `arr[1 ..= 4]`                   |
| **Dynamic arrays**      | `[dynamic]T` — native growable array with `append`, `reserve`, `clear`, `len`, `cap`       |
| **Variants**            | `variant` — native tagged union with pattern matching via `match`                          |
| **Multiple returns**    | `-> (i32, bool)` — no output params or tuple hacks                                         |
| **Named returns**       | Return variables declared in signature, zero-inited, committed on bare `return`            |
| **or_return / or_else** | Postfix error propagation for `(T, bool)` procs — no exceptions needed                     |
| **Defer**               | Runs at end of enclosing block (LIFO); works inside loops                                  |
| **Proc literals**       | Anonymous closures: `proc(x: i32) -> i32 { return x * 2 }`                                 |
| **typeid**              | Compile-time `u64` type hash — zero runtime cost, used with `when`                         |
| **Tuple assignment**    | `x, y = y, x` — all RHS evaluated before assignment                                        |
| **Two string types**    | `cstr` (`const char*`) and `string` (`std::string`) — explicit conversion between them     |
| **`#assert`**           | Compile-time assert usable at top-level and inside procs                                   |
| **Soft keywords**       | `len`, `append`, `panic`, etc. reserved only as calls — usable as variable names elsewhere |
| **C keyword shadowing** | Variables named `int`, `float`, etc. auto-renamed in output — no conflicts                 |
