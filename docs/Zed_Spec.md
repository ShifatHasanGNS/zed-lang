# Zed Language Reference

**Zed** is a statically-typed, compiled systems language that transpiles to C++17.
Inspired by C, Odin, Jai and Zig. File extension: `.z`. Namespace: `ZedLang`.
Pointer dereference operator: `.*` (Zig-style).

---

## Table of Contents

1. [Comments](#comments)
2. [Primitive Types](#primitive-types)
3. [Literals](#literals)
4. [Constants](#constants)
5. [Variables](#variables)
6. [Operators](#operators)
7. [Type Casts](#type-casts)
8. [Pointers](#pointers)
9. [Arrays & Slices](#arrays--slices)
10. [Dynamic Arrays](#dynamic-arrays)
11. [Structs](#structs)
12. [Unions](#unions)
13. [Enums](#enums)
14. [Procedures](#procedures)
15. [Named Return Values](#named-return-values)
16. [Proc Literals](#proc-literals)
17. [Control Flow](#control-flow)
18. [Defer](#defer)
19. [Match](#match)
20. [When](#when)
21. [typeid](#typeid)
22. [Compile-time Assert](#compile-time-assert)
23. [String Types & Conversion](#string-types--conversion)
24. [Built-in Operations](#built-in-operations)
25. [C Interop](#c-interop)
26. [Multi-file Projects](#multi-file-projects)
27. [sizeof / alignof](#sizeof--alignof)

---

## Comments

```zed
-- single-line comment (no block comments)
```

---

## Primitive Types

| Zed type | C equivalent  |
| -------- | ------------- |
| `i8`     | `int8_t`      |
| `i16`    | `int16_t`     |
| `i32`    | `int32_t`     |
| `i64`    | `int64_t`     |
| `u8`     | `uint8_t`     |
| `u16`    | `uint16_t`    |
| `u32`    | `uint32_t`    |
| `u64`    | `uint64_t`    |
| `f32`    | `float`       |
| `f64`    | `double`      |
| `bool`   | `bool`        |
| `cstr`   | `const char*` |
| `string` | `std::string` |
| `void`   | `void`        |

---

## Literals

```zed
42          -- decimal integer
0xFF        -- hex
0b1010      -- binary
0o17        -- octal
3.14        -- float (f32 default; annotate type or cast for f64)
true false  -- bool
nil         -- null pointer
"hello"     -- cstr  (escape: \n \t \\ \")
```

---

## Constants

Declared with `::`. Evaluated at compile time. Supports full integer expression folding across names.

```zed
MAX     :: 100
HALF    :: MAX / 2
CANVAS  :: GRID * CELL_SIZE   -- chains of const exprs work
PI      :: 3.14159265
```

---

## Variables

```zed
-- Type-inferred declaration (:=)
x := 42
name := "zed"          -- inferred as cstr

-- Explicit type, no init (zero-initialised)
count: i32

-- Explicit type with init
speed: f32 = 0.5

-- Multiple declaration from multi-return call
ok, val := parse_int(s)

-- Discard with _
_, val2 := fallible_call()
```

Global variables are declared at the top level (outside any proc).
Foreign C types declared globally are zero-initialised with `= {}`:

```zed
window: Window          -- foreign C type, zero-init
score  := 0             -- global, type inferred
```

> **C keyword shadowing.** Zed allows variable names that happen to be C/C++ reserved words (`double`, `float`, `int`, …). The code generator automatically renames them with a `_zl_` prefix in the output so compilation is never affected. The names remain usable as-is in Zed source.

---

## Operators

**Arithmetic:** `+  -  *  /  %`
**Bitwise:** `&  |  ^  <<  >>`
**Comparison:** `==  !=  <  <=  >  >=`
**Logical:** `&&  ||  !` — aliases: `and  or  not`
**Compound assign:** `+=  -=  *=  /=  %=  &=  |=  ^= <<= >>=`
**Pointer arithmetic:** `ptr + n`, `ptr - n`, `ptr - ptr` (→ `i64`)

> Zed has no `++`/`--` operators. Use `x += 1` / `x -= 1`.

---

## Type Casts

Explicit only — no implicit numeric coercions.

```zed
cast(f32)(my_i32)
cast(i32)(3.7)
cast(*u8)(raw_ptr)
```

---

## Pointers

```zed
x   := 10
p   := &x          -- take address: *i32
p.* = 20           -- dereference and assign (.* postfix)
val := p.*         -- dereference and read

-- Pointer indexing
arr_ptr[2]         -- equivalent to (arr_ptr + 2).*
arr_ptr + 1        -- pointer arithmetic
```

---

## Arrays & Slices

**Fixed arrays** — size must be a compile-time integer literal, a `::` constant, or any arithmetic expression (`+`, `-`, `*`, `/`, `%`) over those.

```zed
nums: [4]i32
nums[0] = 1

-- Aggregate initializer
verts: [3]Vec3 = { Vec3{x=0.0,y=0.0,z=0.0}, Vec3{x=1.0,y=0.0,z=0.0}, Vec3{x=0.0,y=1.0,z=0.0} }

-- Named constant as size
MAX_ITEMS :: 64
buf: [MAX_ITEMS]u8

-- Const-expr size (full arithmetic supported)
GRID      :: 20
CELL_SIZE :: 4
cells:  [GRID * GRID]i32              -- 400 elements
pixels: [GRID * GRID * CELL_SIZE]u8   -- 1600 elements
border: [(GRID + 2) * (GRID + 2)]i32  -- with padding
```

**Slices** — fat pointer (data + length).

```zed
s: []i32
sub  := arr[1 ..< 4]   -- exclusive upper bound [1, 4)
sub2 := arr[1 ..= 4]   -- inclusive upper bound [1, 4]
full := arr[:]          -- full slice
```

---

## Dynamic Arrays

Heap-allocated, growable arrays backed by `std::vector<T>`. Declared with the `[dynamic]` prefix.

```zed
-- Declaration (empty, zero-length)
nums: [dynamic]i32

-- Append a value (pass pointer to array)
append(&nums, 10)
append(&nums, 20)

-- Length and capacity
n       := len(nums)   -- current element count  → u64
cap_val := cap(nums)   -- current capacity       → u64

-- Pre-allocate capacity
-- Sets capacity to n; len stays 0. Reserved slots are zero-initialized.
reserve(&nums, 100)

-- Index (same syntax as fixed arrays)
first := nums[0]
nums[1] = 99

-- Clear the array (len → 0, retains allocation)
clear(&nums)
```

> **`reserve` semantics.** `reserve(&x, n)` allocates backing memory for at least `n` elements and zero-initializes all reserved slots. `len(x)` remains `0`; `cap(x)` returns `n`. Elements in the reserved range `[0, cap-1]` read as zero and can be written directly by index.

`len` works on fixed arrays, slices, `string`, and dynamic arrays.

> **Soft keywords.** `len`, `cap`, `append`, `reserve`, `clear`, `to_cstr`, `from_cstr`, `panic`, `free`, `copy`, and `enum_name` are recognised as built-in calls only when used as calls. They may freely be used as variable names in other positions (`cap_val := cap(nums)` or `len := 0` both work).

---

## Structs

```zed
Vec2 :: struct {
    x: f32,
    y: f32,
}

-- Literal
v := Vec2{ x = 1.0, y = 2.0 }

-- Field access
v.x = 3.0

-- Struct update (spread) — copy base, override named fields
v2 := Vec2{ ..v, x = 10.0 }

-- Pointer to struct
p := &v
p.*.x = 5.0
```

---

## Unions

Same syntax as structs but all fields share the same memory (C `union` semantics). Size equals the largest field. Fields may be separated by either `,` or `;`.

```zed
Value :: union {
    as_int:   i64,
    as_float: f64,
    as_ptr:   *u8,
}

v: Value
v.as_int = 42
x := v.as_float   -- reinterprets the same bytes
```

---

## Enums

```zed
Direction :: enum {
    North,
    South,
    East,
    West,
}

-- Explicit values
Status :: enum {
    Ok    = 0,
    Error = 1,
    Retry = 2,
}

d := Direction.North
```

---

## Procedures

```zed
-- Basic
add :: proc(a: i32, b: i32) -> i32 {
    return a + b
}

-- Void return (no ->)
greet :: proc(name: cstr) {
    printf("%s\n", name)
}

-- Multiple return values
min_max :: proc(a: i32, b: i32) -> (i32, i32) {
    return a, b
}

lo, hi := min_max(3, 7)

-- Named return values (see §Named Return Values)
divide :: proc(a: i32, b: i32) -> (result: i32, ok: bool) {
    if b == 0 { return }
    result = a / b
    ok = true
    return
}

-- Proc type annotation (function pointer)
callback: proc(i32) -> bool

-- Variadic (C-style, must be last parameter, only usable via cimport)
printf :: proc(fmt: cstr, ..) -> i32 ---

-- Extern / no body
puts :: proc(s: cstr) -> i32 ---
```

### or_return

Postfix operator for propagating errors out of a proc. The callee must return `(T, bool)`; if the bool is `false`, the enclosing proc immediately returns a zero-value `T` and `false`.

```zed
read_int :: proc(s: cstr) -> (i32, bool) { ... }

parse :: proc(input: cstr) -> (i32, bool) {
    n := read_int(input) or_return   -- on failure: returns (0, false)
    return n * 2, true
}
```

---

## Named Return Values

Return variables can be given names in the signature. They are zero-initialised automatically and a bare `return` commits whatever values they hold at that point.

```zed
divide :: proc(a: i32, b: i32) -> (result: i32, ok: bool) {
    if b == 0 { return }        -- result=0, ok=false (zero values)
    result = a / b
    ok = true
    return
}

q, valid := divide(10, 2)
```

Named returns are useful for documenting what each return slot means and for early-exit patterns where the zero-value is a sensible default.

---

## Proc Literals

Anonymous proc expressions. Capture semantics follow C++ lambda `[=]` (capture by copy).

```zed
-- Assigned to a proc-typed variable
double: proc(i32) -> i32 = proc(x: i32) -> i32 { return x * 2 }

-- Passed directly as an argument
apply :: proc(f: proc(i32) -> i32, v: i32) -> i32 { return f(v) }
result := apply(proc(x: i32) -> i32 { return x + 1 }, 10)
```

---

## Control Flow

### if / else if / else

```zed
if x > 0 {
    -- ...
} else if x == 0 {
    -- ...
} else {
    -- ...
}
```

### for — six forms

```zed
-- Infinite loop
for { break }

-- While-style
for x > 0 { x -= 1 }

-- Range (exclusive)
for i in 0 ..< 10 { }

-- Range (inclusive) with optional step
for i in 0 ..= 100 step 5 { }

-- For-each: iterate over array, slice, [dynamic]T, or string
for item in nums { }

-- For-each with index
for i, item in nums { }
```

The index variable in `for i, item in coll` is typed `i64`. The element variable is the element type of the collection (`u8` for `string`).

For-each variables are read-write — mutating `item` writes back into the collection for arrays, slices, and dynamic arrays.

### break / continue (with labels)

Labels apply to infinite and while-style loops. Place the label before the `for` keyword; `break` and `continue` can target any enclosing labelled loop.

```zed
i := 0
outer: for {
    i += 1
    j := 0
    inner: for {
        j += 1
        if j == 3 { continue outer }
        if i == 5 { break outer }
    }
}
```

### return

```zed
return          -- void proc
return 42       -- single value
return a, b     -- multi-return
```

---

## Defer

Runs at the **end of the enclosing block** (LIFO order). Works inside loops — defers fire each iteration.

```zed
open_file :: proc() {
    f := fopen("data.bin", "rb")
    defer fclose(f)         -- runs when proc returns
    -- ...
}

-- Inside a loop — fires every iteration
for not WindowShouldClose() {
    BeginDrawing()
    defer EndDrawing()
    BeginMode2D(camera)
    defer EndMode2D()
    -- ...
}
```

---

## Match

Pattern-match on any integer or enum value. `else` is the default case.

```zed
match direction {
    case Direction.North { go_north() }
    case Direction.South { go_south() }
    else                 { stop() }
}
```

### Enum dot-shorthand

When matching on an enum value the type name can be omitted — write `.Variant` and Zed infers the enum type from the match expression.

```zed
match direction {
    case .North { go_north() }
    case .South { go_south() }
    case .East  { go_east()  }
    case .West  { go_west()  }
}
```

---

## When

Compile-time conditional (like `#if`). The condition must be a compile-time constant expression. Branches that do not match are not emitted into the output.

```zed
DEBUG :: true

when DEBUG {
    printf("debug mode\n")
} else {
    printf("release mode\n")
}
```

---

## typeid

`typeid(T)` produces a **compile-time `u64` hash** that uniquely identifies the type `T`. No runtime cost is incurred — the value folds away entirely at compile time.

```zed
id_i32 :: typeid(i32)   -- u64 constant
#assert typeid(i32) != typeid(f32)
```

`typeid` is most useful in `when` conditions to branch on type identity:

```zed
when typeid(T) == typeid(i32) {
    -- branch emitted only when T is i32
} else when typeid(T) == typeid(f32) {
    -- branch emitted only when T is f32
}
```

---

## Compile-time Assert

`#assert` is valid both at the **top level** (outside any proc) and inside proc bodies. It emits a C++ `static_assert` with a `file:line` diagnostic message.

```zed
-- top-level
#assert GRID_SIZE > 0
#assert sizeof(i32) == 4

-- inside a proc
main :: proc() -> i32 {
    #assert sizeof(i64) == 8
    return 0
}
```

---

## String Types & Conversion

Zed has two string types with distinct semantics:

| Type     | Backing type  | Mutable | Heap-allocated |
| -------- | ------------- | ------- | -------------- |
| `cstr`   | `const char*` | No      | No (pointer)   |
| `string` | `std::string` | Yes     | Yes            |

**String literals `"..."` always produce `cstr`.** Assign to a `string`-typed variable to get a `string` (the compiler inserts the implicit conversion).

```zed
a : cstr   = "hello"          -- cstr  (explicit)
b : string = "hello"          -- string (cstr literal coerced to string)
c := "hello"                  -- cstr  (inferred)
d :: "hello"                  -- cstr  (const)
e := from_cstr("hello")       -- string (explicit conversion)
```

**Conversion between the two always requires an explicit call:**

```zed
s : string = "world"
cs: cstr   = to_cstr(s)       -- string → cstr  (points into s's buffer)
s2: string = from_cstr(cs)    -- cstr   → string (copies)
```

Assigning a runtime `cstr` variable directly to a `string` (or vice-versa) without a conversion call is a type error.

**String concatenation** uses `+`. At least one operand must be a `string`; the other may be `string` or `cstr`. The result is always `string`.

```zed
greeting: string = "Hello, "
name:     string = "Zed"
full  := greeting + name        -- "Hello, Zed"
full2 := greeting + "World"     -- string + cstr → string
```

**String indexing** returns the byte at position `i` as `u8`.

```zed
s: string = "abc"
b := s[0]     -- u8 = 97 ('a')
```

**String for-each** iterates over bytes.

```zed
for byte in s { }           -- byte: u8
for i, byte in s { }        -- i: i64, byte: u8
```

---

## Built-in Operations

These are soft keywords — usable as variable names outside a call position.

| Call                | Description                                               | Return type |
| ------------------- | --------------------------------------------------------- | ----------- |
| `len(x)`            | Element count of array, slice, `[dynamic]T`, or `string`  | `u64`       |
| `cap(x)`            | Capacity of a `[dynamic]T`                                | `u64`       |
| `append(&arr, val)` | Append element to dynamic array                           | `void`      |
| `reserve(&arr, n)`  | Pre-allocate capacity; len stays 0; slots zeroed          | `void`      |
| `clear(&arr)`       | Set len to 0; retain allocation                           | `void`      |
| `copy(dst, src)`    | Copy `min(len(dst), len(src))` elements; returns count    | `i64`       |
| `free(ptr)`         | Release heap memory obtained via C `malloc` / `mem_alloc` | `void`      |
| `panic(msg)`        | Print message to stderr and abort — never returns         | `void`      |
| `to_cstr(s)`        | `string` → `cstr` (points into string buffer)             | `cstr`      |
| `from_cstr(cs)`     | `cstr` → `string` (copies)                                | `string`    |
| `enum_name(val)`    | Enum variant → its source name as `cstr`                  | `cstr`      |
| `sizeof(T\|x)`      | Size in bytes of a type or variable                       | `u64`       |
| `alignof(T)`        | Alignment in bytes                                        | `u64`       |
| `typeid(T)`         | Compile-time `u64` hash unique to `T`                     | `u64`       |

```zed
-- panic: runtime abort with message
if ptr == nil { panic("unexpected nil pointer") }

-- free: release raw allocation
buf := cast(*u8)(mem_alloc(1024))
mem_zero(buf, 1024)
free(buf)

-- copy: slice/dynamic array copy
src: [dynamic]i32
dst: [dynamic]i32
reserve(&dst, 5)
n := copy(dst, src)   -- copies min(cap(dst), len(src)) elements

-- enum_name: get variant name at runtime
Dir :: enum { North, South, East, West }
d := Dir.East
printf("%s\n", enum_name(d))   -- prints "East"
```

---

## C Interop

### cimport

Pulls a C header into scope. All types, functions, and macros from that header become usable directly.

```zed
cimport "raylib.h"
cimport "math.h"
cimport "stdio.h"
```

- C types (e.g. `Texture`, `Camera2D`) are used by name as foreign types.
- C macros (e.g. `WHITE`, `FLAG_VSYNC_HINT`) pass through to the generated C++.
- C functions are called directly with no wrapper needed.

```zed
tex := LoadTexture("sprite.png")
cosf(angle)
printf("%d\n", cast(i32)(score))
```

### Extern proc declarations

```zed
DrawLine :: proc(x1: i32, y1: i32, x2: i32, y2: i32, color: Color) ---
```

The `---` body means "extern — defined in C".

---

## Multi-file Projects

Use `import` to bring another `.z` file's top-level declarations into scope.

```zed
import "math_utils"     -- imports math_utils.z
import "engine/render"  -- path relative to project src/
```

- All top-level `proc`, `struct`, `union`, `enum`, `const`, and global `var` declarations from the imported file become visible.
- When using `zed build --project`, source files are discovered automatically via `zed.toml`; explicit `import` is only needed for symbol visibility.
- When using `zed build --file` or the low-level CLI, list all `.z` files on the command line in dependency order.

---

## sizeof / alignof

```zed
n  := sizeof(Vec3)       -- size in bytes → u64
n2 := sizeof(my_var)     -- size of variable's type
a  := alignof(i64)       -- alignment in bytes → u64
```

Emits C++ `sizeof(...)` / `alignof(...)` directly. Useful for `malloc`, `memcpy`, and layout calculations.

---

## Full Example

```zed
cimport "stdio.h"

Point :: struct { x: f32, y: f32 }

distance :: proc(a: Point, b: Point) -> f32 {
    dx := a.x - b.x
    dy := a.y - b.y
    return sqrtf(dx*dx + dy*dy)
}

div_rem :: proc(a: i32, b: i32) -> (i32, i32) {
    return a / b, a % b
}

main :: proc() -> i32 {
    p1 := Point{ x = 0.0, y = 0.0 }
    p2 := Point{ x = 3.0, y = 4.0 }
    printf("dist = %f\n", cast(f64)(distance(p1, p2)))

    q, r := div_rem(17, 5)
    printf("%d / 5 = %d rem %d\n", 17, q, r)

    return 0
}
```

## Zed Init (`zed init <n>`)

```
  ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓
  ┃           Zed Project Initialized           ┃
  ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛

  ◆ <n>/
  │
  ├── src/
  │ │
  │ └── main.z      ⟵ entry point
  │
  ├── .gitignore
  │
  ├── README.md
  │
  └── zed.toml      ⟵ build config

  ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯

  build:
      zed build debug   --project <n>/
      zed build release --project <n>/

  run:
      zed run   debug   --project <n>/
      zed run   release --project <n>/

  clean:
      zed clean         --project <n>/

  ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯

  ▶▶  cd <n> && zed run debug --project .

  ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯
```
