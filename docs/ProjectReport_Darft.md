# Zed Language — Project Report

## Overview

**Zed** is a statically-typed, compiled systems language that transpiles to C++17. It is inspired by C, Odin, Jai, and Zig. Source files use the `.z` extension and live under the `ZedLang` namespace. The language targets systems-level programming while introducing modern ergonomics absent from C/C++.

---

## Features Shared With C/C++ (But Done Differently)

These features exist in C/C++ but Zed changes their syntax, semantics, or safety model.

### Primitive Types
Zed uses explicit-width types (`i8`, `i32`, `u64`, `f32`, etc.) rather than platform-dependent types like `int` or `long`. There is no ambiguity about size.

### Constants
Defined with `::` and support full compile-time expression folding across named constants — no `#define` macros or `const` with runtime semantics.

```zed
MAX    :: 100
HALF   :: MAX / 2
CANVAS :: GRID * CELL_SIZE
```

### Variables
Zed supports type inference with `:=`, multiple assignment from multi-return calls, and tuple-style swap (`x, y = y, x`) where all RHS values are evaluated before any assignment. C/C++ has none of this natively.

### Pointers
Dereference uses the postfix `.*` operator (Zig-style) rather than the C prefix `*`. This makes chained access more readable and avoids ambiguity with multiplication.

```zed
p.* = 20        -- instead of *p = 20
p.*.field       -- instead of (*p).field or p->field
```

### Type Casts
Explicit-only via `cast(T)(expr)` and `bit_cast(T)(expr)`. No implicit numeric coercions. This eliminates a large class of silent bugs common in C.

### Arrays
Fixed arrays with const-expression sizes (`[GRID * GRID]i32`) and a built-in **slice** type (`[]T`) — a fat pointer carrying both data and length. C has neither slices nor safe bounds; C++ has `std::span` but it is not a first-class syntax.

### Structs
Struct literals use named fields (`Vec2{ x = 1.0, y = 2.0 }`) and support a **struct spread / update syntax**:

```zed
v2 := Vec2{ ..v, x = 10.0 }   -- copy v, override x
```

C++ has no such syntax.

### Unions
Same C-union semantics, but with consistent syntax aligned with structs. No separate language for `union` vs `struct` access.

### Enums
Enums in Zed allow dot-shorthand in `match` expressions — the type name can be omitted when it is inferrable. C++ `enum class` requires the full qualified name.

### Procedures (Functions)
- Declared with `name :: proc(...) -> T {}` syntax.
- Support **multiple return values** natively — no output parameters or `std::tuple` hacks.
- Support **named return values** that are zero-initialised and committed on bare `return`.
- Support **variadic args** (C-style, for C interop only).

### for Loop
Six distinct forms unified under a single `for` keyword: infinite loop, while-style, exclusive range, inclusive range with step, for-each, and indexed for-each. C/C++ requires separate `while`, `do-while`, and `for` keywords, and has no range or for-each syntax at the language level (only range-based `for` in C++11).

### Match
`match` replaces `switch`. No fallthrough by default. Supports an `else` default case, and **dot-shorthand** for enum matching. C/C++ `switch` has implicit fallthrough — a frequent source of bugs.

### Compile-time Conditional (`when`)
`when` is a first-class language construct for compile-time branching, not a preprocessor directive. Unmatched branches are never emitted. Cleaner than `#if`/`#ifdef`.

### sizeof / alignof
Same semantics as C/C++, but returns `u64` and works on both types and variables.

---

## Features Zed Has That C/C++ Does Not

These are entirely new features with no direct equivalent in C or C++.

### Slices
A built-in fat-pointer type `[]T` carrying a pointer and a length, with range syntax:

```zed
sub  := arr[1 ..< 4]   -- exclusive
sub2 := arr[1 ..= 4]   -- inclusive
full := arr[:]
```

### Dynamic Arrays
`[dynamic]T` — a first-class growable array backed by `std::vector<T>`, with built-in `append`, `reserve`, `clear`, `len`, and `cap` operations. Not a library type — it is part of the language.

### Variants (Tagged Unions)
`variant` is a language-level tagged union — a discriminated union with an automatic tag enum and pattern-match support. C++ `std::variant` is a library workaround; Zed makes it native.

```zed
Shape :: variant {
    Circle: CircleData,
    Rect:   RectData,
}

match s {
    case .Circle(c) { return 3.14159 * c.radius * c.radius }
    case .Rect(r)   { return r.width * r.height }
}
```

### or_return / or_else
Postfix error-propagation operators for `(T, bool)`-returning procs. No exceptions, no `Result` type — errors propagate cleanly at the call site.

```zed
n := read_int(input) or_return       -- propagate failure up
n := read_int(input) or_else 0       -- fallback value
```

### Defer
`defer` runs a statement at the end of the enclosing block (LIFO). Works inside loops — fires every iteration. Eliminates manual cleanup boilerplate.

```zed
defer fclose(f)        -- guaranteed cleanup on any exit path
```

### Proc Literals (Closures)
Anonymous proc expressions that capture by copy (`[=]` semantics). First-class and passable as arguments.

```zed
double := proc(x: i32) -> i32 { return x * 2 }
```

### typeid
`typeid(T)` produces a compile-time `u64` hash unique to a type. No runtime cost. Useful for `when`-based type dispatch.

```zed
when typeid(T) == typeid(i32) { ... }
```

### Tuple Assignment and Swap
Multiple variables can be assigned simultaneously with all RHS values evaluated first — making swap idiomatic and safe.

```zed
x, y = y, x
a, b, c := 1, "hello", 3.14
```

### Two String Types
`cstr` (`const char*`) and `string` (`std::string`) are distinct language types. Conversion between them is always explicit (`to_cstr`, `from_cstr`). String concatenation with `+` is built in.

### C Keyword Shadowing
Variable names that collide with C/C++ reserved words (`double`, `float`, `int`, …) are automatically renamed with a `_zl_` prefix in the generated output. The Zed source is unaffected.

### cimport
A single directive brings a C header — its types, functions, and macros — directly into scope. No binding code required.

```zed
cimport "raylib.h"
tex := LoadTexture("sprite.png")   -- used directly
```

### Compile-time Assert (`#assert`)
Available at both top level and inside procs. Emits a C++ `static_assert` with a `file:line` diagnostic.

### Soft Keywords
Built-ins like `len`, `cap`, `append`, `panic`, `free`, etc. are soft keywords — they are only reserved when used as function calls and can be freely used as variable names elsewhere.

---

## Summary Table

| Feature | C/C++ | Zed |
|---|---|---|
| Fixed-width types | via `<stdint.h>` | built-in (`i32`, `u64`, …) |
| Constants | `#define` / `const` | `::` with full expr folding |
| Type inference | C++11 `auto` (limited) | `:=` |
| Multiple returns | workarounds only | native |
| Named returns | no | yes |
| Slices | no | `[]T` with range syntax |
| Dynamic arrays | `std::vector` (library) | `[dynamic]T` (native) |
| Tagged unions | `std::variant` (library) | `variant` (native) |
| Pattern match | `switch` with fallthrough | `match`, no fallthrough |
| Error propagation | exceptions / out-params | `or_return` / `or_else` |
| Defer | no | yes |
| Closures | C++11 lambdas | proc literals |
| Compile-time branch | `#if` (preprocessor) | `when` (language) |
| Compile-time type id | no | `typeid(T)` |
| Struct spread/update | no | `{ ..base, field = val }` |
| Tuple swap | no | `x, y = y, x` |
| C header import | `#include` | `cimport` |
| Postfix dereference | no (`*p` prefix) | `p.*` |
| String concatenation | no | `+` operator |
| `enum_name` at runtime | no | built-in |