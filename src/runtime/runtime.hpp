// Runtime type definitions for generated C++ code
#pragma once

#include <stdbool.h>
#include <stdint.h>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <cstddef>
#include <cstddef>
#include <cstring>
#include <string>
#include <vector>

// Slice — non-owning view over a contiguous array of elements.
struct Slice {
    void*  ptr = nullptr;
    size_t len = 0;
};

// Typed element access helpers (generated code casts through these)
template<typename T> inline T& slice_get(Slice s, size_t i) {
    return reinterpret_cast<T*>(s.ptr)[i];
}

// Bounds-checked index (debug builds only)
#ifdef NDEBUG
    #define SLICE_IDX(T, s, i)  (reinterpret_cast<T*>((s).ptr)[(i)])
#else
    #define SLICE_IDX(T, s, i)                                                  \
        ( (static_cast<size_t>(i) < (s).len)                                    \
            ? reinterpret_cast<T*>((s).ptr)[(i)]                                \
            : (mem_panic("slice index out of bounds"), __builtin_unreachable(), \
            reinterpret_cast<T*>((s).ptr)[0]) )
#endif

// Memory helpers
inline void* mem_alloc(size_t n) {
    void* p = std::malloc(n);
    if (!p) { std::fprintf(stderr, "panic: out of memory\n"); std::abort(); }
    return p;
}

inline void  mem_free(void* p)                          { std::free(p); }
inline void* mem_copy(void* d, const void* s, size_t n) { return std::memcpy(d, s, n); }
inline void* mem_zero(void* p, size_t n)                { return std::memset(p, 0, n); }

[[noreturn]] inline void mem_panic(const char* msg) {
    std::fprintf(stderr, "panic: %s\n", msg);
    std::abort();
}
