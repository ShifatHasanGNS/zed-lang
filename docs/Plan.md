# Plan.md — v4 (Simplified for Mini Zed)

## Zed Project — 3rd Year CSE Lab

### ⚠ This document supersedes Plan.md v3. Use this version going forward.

---

## OVERVIEW

This is a **transpiling zed** for a new systems programming language, scaled down to a **mini zed** that can still produce demonstrable terminal tools and Raylib games. Complexity has been reduced by removing error‑prone features while preserving the language’s unique syntax identity.

| Property                     | Value                                                 |
| ---------------------------- | ----------------------------------------------------- |
| **Project type**             | University 3rd-year CSE lab zed project               |
| **Zed host language**        | C++ (required by Flex + Bison)                        |
| **Parser generator**         | Flex (lexer) + Bison (LALR(1) parser)                 |
| **Target / output language** | C99                                                   |
| **Compiled by**              | GCC or Clang (`gcc output.c -o program`)              |
| **Paradigm**                 | Procedural, systems-level, no GC, no exceptions       |
| **Syntax inspiration**       | Odin, Jai — deliberately unlike C/C++                 |
| **Primary use cases**        | Raylib games, terminal tools, math/graphics libraries |

---

## WHAT WAS REMOVED FROM V3 (AND WHY)

| Removed feature                       | Why it was cut                                                                                           |
| ------------------------------------- | -------------------------------------------------------------------------------------------------------- |
| **All loop forms except `loop { }`**  | Infinite loop only. Range, while, and C‑style loops were causing parser conflicts and complex codegen.   |
| **`defer`**                           | The trickiest codegen feature (must insert cleanup at every exit point). Removed to simplify.            |
| **String interpolation `{id}`**       | Requires a lexer start state and runtime string builder. Keep only plain string literals.                |
| **Multiline strings `""`**            | Also requires lexer state and concatenation logic. Remove.                                               |
| **Dynamic arrays `[..]T`**            | Heap‑owned growable arrays need runtime support and monomorphization. Keep only fixed arrays and slices. |
| **Slice iteration in loops**          | Removed with the other loop forms.                                                                       |
| **`size_of` / `align_of` intrinsics** | Not essential for demos; can be omitted.                                                                 |
| **Foreign attribute**                 | Raylib bindings can be written as regular C‑style `extern` declarations without special syntax.          |
| **Compound assignment (`+=`, etc.)**  | Can be simulated with `x = x + 1`. Removes extra AST nodes and parser rules.                             |

**Features that remain:**

| Feature                       | Why kept                                                                          |
| ----------------------------- | --------------------------------------------------------------------------------- |
| **Primitive types**           | `i8`…`i64`, `u8`…`u64`, `f32`, `f64`, `bool`, `cstr` – essential for any program. |
| **Declarations (`:=` / `:`)** | Core syntax identity.                                                             |
| **Constants (`::`)**          | Core syntax identity.                                                             |
| **Structs**                   | Needed for game entities and data structures.                                     |
| **Procedures**                | Fundamental.                                                                      |
| **If / else**                 | Simple and essential.                                                             |
| **Infinite loop `loop { }`**  | Minimal loop form; `break` and `continue` still work.                             |
| **Pointers (`*T`, `&`, `^`)** | Needed for raylib and manual memory.                                              |
| **Fixed arrays `[N]T`**       | Stack‑allocated arrays are simple to implement.                                   |
| **Slices `[]T`**              | Non‑owning views are useful and map cleanly to a struct.                          |
| **Simple assignment `=`**     | Keep.                                                                             |
| **Return**                    | Keep.                                                                             |
| **Break / continue**          | Keep for loop control.                                                            |
| **Block `{ }`**               | Keep.                                                                             |
| **Comments**                  | Keep.                                                                             |
| **C‑style string literals**   | Plain `"hello"` – no interpolation.                                               |
| **Cast expression**           | Useful for numeric conversions.                                                   |

---

## THE SIMPLIFIED LANGUAGE — SYNTAX OVERVIEW

```
-- Variables and constants
x     := 42
count : i32
score : i32 = 100
MAX   :: 1024
PI    :: 3.14159

-- Structs
Vec3 :: struct { x, y, z: f32, }

-- Procedures
add :: proc(a, b: i32) -> i32 {
    return a + b
}

-- If
if x > 0 {
    print("positive")
} else {
    print("non‑positive")
}

-- Infinite loop
loop {
    if done { break }
}

-- Pointers
p := &x
p^ = 99
ptr : *Entity = nil

-- Fixed array and slice
nums : [5]i32 = { 10, 20, 30, 40, 50 }
s   : []i32 = nums[1..<4]   -- slice (exclusive upper bound)
s2  : []i32 = nums[:]       -- full slice

-- Cast
f := (f32)(x)

-- Comments
-- single line
--[ multi line ]--
```

**C99 mapping** remains as in v3 for the kept features.

---

## WHAT THIS DEMONSTRATES TO AN EVALUATOR

| Zed concept          | Where it is visible                                                         |
| -------------------- | --------------------------------------------------------------------------- |
| Lexical analysis     | `lexer.l` — `::`, `:=`, `..<`, `..=`, `---`, comments, strings              |
| Context-free grammar | `parser.y` — LALR(1), all precedence declared, **no conflicts**             |
| Symbol table         | `symtable.hpp/.cpp` — scoped lookup, forward declarations                   |
| Type system          | `types.hpp/.cpp` + `type_checker` — inference, struct layout, pointer rules |
| Semantic analysis    | Use-before-init, auto-deref on pointer                                      |
| Code generation      | C99 output — slices, structs, pointer auto‑deref, loops, if/else            |
| Runtime support      | Slice structs, bounds checking (debug)                                      |
| Original syntax      | `:=`, `::`, `loop`, `^`, `..<`, `..=` — none of these are in C              |

Even with fewer features, the zed still showcases the core ideas: a clean, modern syntax, a full zed pipeline, and the ability to generate working C99 code for real‑world tasks.

---

## REVISED BUILD ORDER (Days 1–15)

| Days  | What to write                                                                                |
| ----- | -------------------------------------------------------------------------------------------- |
| 1–2   | `grammar.ebnf` + `spec.md` (updated)                                                         |
| 3     | `source_loc.hpp`, `error.hpp/.cpp`, `token.hpp`                                              |
| 4–5   | `lexer.l` (no string states, only basic tokens)                                              |
| 6–8   | `ast.hpp`, `ast.cpp`, `ast_printer.hpp`, `parser.y`                                          |
| 9     | **Test day** – feed 10+ hand‑written source files through lexer+parser. Print AST.           |
| 10–11 | `types.hpp/.cpp`, `scope.hpp/.cpp`, `symtable.hpp/.cpp`                                      |
| 12–13 | `type_checker.hpp/.cpp`                                                                      |
| 14–15 | `codegen/c_emitter.hpp/.cpp`, `codegen/codegen.hpp/.cpp` (no defer stack, no string builder) |
| 16    | `types.h`, `memory.h/.c` (only `mem_alloc`/`free`/`copy`/`zero` and panic)                   |
| 17–18 | `tests/integration/` — 2–3 small programs (fibonacci, linked list, raylib demo)              |

**Total: 18 days** – well within a semester timeframe.

---

## EXAMPLE SHOWCASE PROGRAM (Raylib + simplified features)

```
-- game.ZedLang – minimal Raylib game (simplified)

@[foreign("raylib")]
InitWindow :: proc(w, h: i32, title: cstr) ---
@[foreign("raylib")]
WindowShouldClose :: proc() -> bool ---
@[foreign("raylib")]
BeginDrawing :: proc() ---
@[foreign("raylib")]
EndDrawing :: proc() ---
@[foreign("raylib")]
ClearBackground :: proc(c: Color) ---
@[foreign("raylib")]
DrawText :: proc(t: cstr, x, y, sz: i32, c: Color) ---
@[foreign("c")]
printf :: proc(fmt: cstr) ---

Color :: struct { r, g, b, a: u8, }
Vec2  :: struct { x, y: f32, }

Entity :: struct {
    pos   : Vec2,
    alive : bool,
}

SCREEN_W :: 800
SCREEN_H :: 600
BLACK    :: Color{ r=0, g=0, b=0, a=255 }
WHITE    :: Color{ r=255, g=255, b=255, a=255 }

main :: proc() {
    InitWindow(SCREEN_W, SCREEN_H, "Mini Game")
    defer CloseWindow()   -- still supported (simple codegen: emit at end)

    entities : [10]Entity
    loop i in 0..<10 {
        entities[i] = Entity{ pos=Vec2{ x=f32(i*60), y=100.0 }, alive=true }
    }

    loop !WindowShouldClose() {
        BeginDrawing()
        ClearBackground(BLACK)
        DrawText("Hello from mini zed!", 10, 10, 20, WHITE)
        EndDrawing()
    }
}
```

This program still uses `loop` (infinite + while), slices (implicitly via array indexing), structs, procedures, FFI, and constants – enough to be impressive.

---

## CONCLUSION

By trimming the feature set to the absolute essentials, the zed becomes **easier to implement, debug, and demonstrate**, while retaining its unique character. The resulting tool can still compile real programs that interact with Raylib and the C standard library, fulfilling the project's goals.
