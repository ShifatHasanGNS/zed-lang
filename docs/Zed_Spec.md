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
10. [Structs](#structs)
11. [Enums](#enums)
12. [Procedures](#procedures)
13. [Control Flow](#control-flow)
14. [Defer](#defer)
15. [Match](#match)
16. [When](#when)
17. [Compile-time Assert](#compile-time-assert)
18. [C Interop](#c-interop)
19. [sizeof / alignof](#sizeof--alignof)

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
| `void`   | `void`        |

---

## Literals

```zed
42          -- decimal integer
0xFF        -- hex
0b1010      -- binary
0o17        -- octal
3.14        -- float (f64 default)
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
name := "zed"

-- Explicit type, no init (zero-initialised)
count: i32

-- Explicit type with init
speed: f32 = 0.5

-- Multiple declaration from multi-return call
ok, val := parse_int(s)

-- Discard (_)
_ := expensive_call()
```

Global variables are declared at the top level (outside any proc).
Foreign C types declared globally are zero-initialised with `= {}`:

```zed
window: Window          -- foreign C type, zero-init
score  := 0             -- global, type inferred
```

---

## Operators

**Arithmetic:** `+  -  *  /  %`
**Bitwise:** `&  |  ^  <<  >>`
**Comparison:** `==  !=  <  <=  >  >=`
**Logical:** `&&  ||  !` — aliases: `and  or  not`
**Compound assign:** `+=  -=  *=  /=  %=  &=  |=  ^=`
**Increment / decrement:** `x++  x--`
**Pointer arithmetic:** `ptr + n`, `ptr - n`, `ptr - ptr` (→ `i64`)

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

**Fixed arrays** — size must be a compile-time constant or const expression.

```zed
nums: [4]i32
nums[0] = 1

-- Aggregate initializer
verts: [3]Vec3 = { Vec3{x=0.0,y=0.0,z=0.0}, Vec3{x=1.0,y=0.0,z=0.0}, Vec3{x=0.0,y=1.0,z=0.0} }

-- Const-expr size
GRID :: 20
cells: [GRID * GRID]i32    -- 400 elements, resolved at compile time
```

**Slices** — fat pointer (data + length).

```zed
s: []i32
sub := arr[1 ..< 4]    -- exclusive upper bound
sub2 := arr[1 ..= 4]   -- inclusive
full := arr[:]          -- full slice
```

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

-- Struct update (spread) — copy base, override fields
v2 := Vec2{ ..v, x = 10.0 }

-- Pointer to struct
p := &v
p.*.x = 5.0
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
    return a, b     -- if a < b else return b, a
}

lo, hi := min_max(3, 7)

-- Proc type annotation (function pointer)
callback: proc(i32) -> bool

-- Extern / no body
puts :: proc(s: cstr) -> i32 ---
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

### for — four forms

```zed
-- Infinite loop
for { break }

-- While-style
for x > 0 { x-- }

-- Range (exclusive)
for i in 0 ..< 10 { }

-- Range (inclusive) with step
for i in 0 ..= 100 step 5 { }
```

### break / continue (with labels)

```zed
outer: for {
    for {
        break outer
        continue outer
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
    defer EndDrawing()      -- guaranteed even on early break
    BeginMode2D(camera)
    defer EndMode2D()
    -- ...
}
```

---

## Match

Pattern-match on any integer or enum value. `else` is the default case (alias for `case`).

```zed
match direction {
    case Direction.North { go_north() }
    case Direction.South { go_south() }
    else                 { stop() }
}
```

---

## When

Compile-time conditional (like `#if`). Condition must be a compile-time constant.

```zed
DEBUG :: true

when DEBUG {
    printf("debug mode\n")
} else {
    printf("release mode\n")
}
```

---

## Compile-time Assert

```zed
#assert GRID_SIZE > 0
#assert sizeof(i32) == 4
```

Emits a C `static_assert` with a `file:line` message on failure.

---

## C Interop

### cimport

Pulls a C header into scope. All types, functions, and macros from that header become usable directly.

```zed
cimport "raylib.h"
cimport "math.h"
cimport "stdio.h"
```

- C types (e.g. `Texture`, `Camera2D`, `Sound`) are used by name as foreign types.
- C macros (e.g. `WHITE`, `FLAG_VSYNC_HINT`) pass through to the generated C++.
- C functions are called directly with no wrapper needed.

```zed
tex := LoadTexture("sprite.png")     -- returns Texture (foreign named type)
cosf(angle)                          -- from math.h
printf("%d\n", cast(i32)(score))     -- from stdio.h
```

### Extern proc declarations

```zed
DrawLine :: proc(x1: i32, y1: i32, x2: i32, y2: i32, color: Color) ---
```

The `---` body means "extern — defined in C".

---

## sizeof / alignof

```zed
n  := sizeof(Vec3)       -- size in bytes → u64
n2 := sizeof(my_var)     -- size of variable's type
a  := alignof(i64)       -- alignment in bytes → u64
```

Emits C `sizeof(...)` / `alignof(...)` directly. Useful for `malloc`, `memcpy`, and layout calculations.

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
