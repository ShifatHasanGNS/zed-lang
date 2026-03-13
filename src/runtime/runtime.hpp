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

// Bounds-checked dynamic array index (debug builds only)
#ifdef NDEBUG
    #define DYN_IDX(T, v, i)  ((v)[(i)])
#else
    #define DYN_IDX(T, v, i)                                                    \
        ( (static_cast<size_t>(i) < (v).capacity())                             \
            ? (v).data()[(i)]                                                    \
            : (mem_panic("dynamic array index out of bounds"),                   \
               __builtin_unreachable(), (v).data()[0]) )
#endif
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

// _zed_dyn_reserve — sets capacity, keeps len=0, zero-initializes reserved slots.
// std::vector::reserve() allocates but doesn't construct elements; we zero the raw
// backing memory so reads into reserved-but-not-appended slots return 0.
template<typename T>
inline void _zed_dyn_reserve(std::vector<T>& v, size_t n) {
    v.reserve(n);
    if (n > 0)
        ::memset(v.data(), 0, v.capacity() * sizeof(T));
}
