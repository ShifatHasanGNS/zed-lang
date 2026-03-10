// =============================================================================
// ast.hpp – Simplified for mini zed (Plan v4)
// =============================================================================

#pragma once

#include "../support/source_loc.hpp"

#include <cstdint>
#include <string>
#include <vector>

namespace ZedLang {

// ---------------------------------------------------------------------------
// Forward declarations
// ---------------------------------------------------------------------------
class Decl;
class VarDecl;
class ConstDecl;
class StructDecl;
class ProcDecl;

class Stmt;
class BlockStmt;
class ReturnStmt;
class IfStmt;
class LoopStmt;
class BreakStmt;
class ContinueStmt;
class AssignStmt;
class ExprStmt;
class DeclStmt;

class Expr;
class BinaryExpr;
class UnaryExpr;
class CallExpr;
class IndexExpr;
class SliceExpr;
class FieldExpr;
class DerefExpr;
class AddrExpr;
class CastExpr;
class LitExpr;
class IdentExpr;
class StructLitExpr;

// New statement nodes
class ForRangeStmt;
class DeferStmt;
class MatchStmt;
class WhenStmt;
class CompoundAssignStmt;
class IncDecStmt;

// New declaration nodes
class EnumDecl;

class Type;
class NamedType;
class PtrType;
class ArrayType;
class SliceType;

// ---------------------------------------------------------------------------
// Field – for struct fields and field inits
// ---------------------------------------------------------------------------
struct Field {
    std::vector<std::string> names;
    Type* type = nullptr;
};

struct FieldInit {
    std::string name;
    Expr* value = nullptr;
    SourceLoc loc;
};

// ---------------------------------------------------------------------------
// ParamGroup – for procedure parameters
// ---------------------------------------------------------------------------
struct ParamGroup {
    std::vector<std::string> names;
    Type* type = nullptr;
};

// ---------------------------------------------------------------------------
// Node (base class)
// ---------------------------------------------------------------------------
class Node {
public:
    virtual ~Node() = default;
    SourceRange range;
};

// ---------------------------------------------------------------------------
// Type (abstract)
// ---------------------------------------------------------------------------
class Type : public Node {
public:
    enum Kind { NAMED, PTR, ARRAY, SLICE, PROC_TYPE, DYN_ARRAY_TYPE, STRING_TYPE };
    virtual Kind kind() const = 0;
};

class NamedType : public Type {
public:
    std::string name;
    NamedType(SourceRange r, std::string n) : name(std::move(n)) { range = r; }
    Kind kind() const override { return NAMED; }
};

class PtrType : public Type {
public:
    Type* pointee;
    PtrType(SourceRange r, Type* p) : pointee(p) { range = r; }
    Kind kind() const override { return PTR; }
};

class ArrayType : public Type {
public:
    uint64_t    size;        // compile-time constant (0 if size_name is set)
    std::string size_name;   // non-empty if size is a named constant
    Type*       elem;
    ArrayType(SourceRange r, uint64_t s, Type* e)
        : size(s), elem(e) { range = r; }
    ArrayType(SourceRange r, std::string n, Type* e)
        : size(0), size_name(std::move(n)), elem(e) { range = r; }
    Kind kind() const override { return ARRAY; }
};

class SliceType : public Type {
public:
    Type* elem;
    SliceType(SourceRange r, Type* e) : elem(e) { range = r; }
    Kind kind() const override { return SLICE; }
};

// proc(ParamType, ...) -> RetType   — used as a first-class type annotation
// e.g.:  callback : proc(i32, bool) -> f32
class ProcTypeAST : public Type {
public:
    std::vector<Type*> param_types;   // parameter types only (no names needed for type)
    Type*              return_type;   // nullptr = void
    ProcTypeAST(SourceRange r, std::vector<Type*> pts, Type* ret)
        : param_types(std::move(pts)), return_type(ret) { range = r; }
    Kind kind() const override { return PROC_TYPE; }
};

// ---------------------------------------------------------------------------
// Decl (abstract)
// ---------------------------------------------------------------------------
// [dynamic]T
class DynArrayTypeAST : public Type {
public:
    Type* elem;
    DynArrayTypeAST(SourceRange r, Type* e) : elem(e) { range = r; }
    Kind kind() const override { return DYN_ARRAY_TYPE; }
};

// string (keyword type)
class StringTypeAST : public Type {
public:
    StringTypeAST(SourceRange r) { range = r; }
    Kind kind() const override { return STRING_TYPE; }
};

class Decl : public Node {
public:
    enum Kind { VAR, CONST, STRUCT, PROC, ENUM_DECL, CIMPORT = 20, IMPORT = 21 };
    virtual Kind kind() const = 0;
    virtual const std::string& name() const = 0;
};

class VarDecl : public Decl {
public:
    std::string var_name;
    Type* type = nullptr;          // null if inferred
    Expr* init = nullptr;           // null if zero-initialized
    VarDecl(SourceRange r, std::string n, Type* t, Expr* e)
        : var_name(std::move(n)), type(t), init(e) { range = r; }
    Kind kind() const override { return VAR; }
    const std::string& name() const override { return var_name; }
};

class ConstDecl : public Decl {
public:
    std::string const_name;
    Expr* value;
    ConstDecl(SourceRange r, std::string n, Expr* v)
        : const_name(std::move(n)), value(v) { range = r; }
    Kind kind() const override { return CONST; }
    const std::string& name() const override { return const_name; }
};

class StructDecl : public Decl {
public:
    std::string struct_name;
    std::vector<Field> fields;
    StructDecl(SourceRange r, std::string n, std::vector<Field> f)
        : struct_name(std::move(n)), fields(std::move(f)) { range = r; }
    Kind kind() const override { return STRUCT; }
    const std::string& name() const override { return struct_name; }
};

// cimport "stdio.h"  →  extern "C" { #include <stdio.h> }  in generated output
class CImportDecl : public Decl {
public:
    std::string path;      // e.g. "stdio.h" or "mylib/util.h"
    bool        is_system; // true if no path separators (treat as <header>)

    CImportDecl(SourceRange r, std::string p)
        : path(std::move(p)) {
        range = r;
        is_system = (path.find('/') == std::string::npos &&
                     path.find('\\') == std::string::npos &&
                     (path.size() < 2 || path[0] != '.'));
    }
    Kind kind() const override { return CIMPORT; }
    const std::string& name() const override { return path; }
};

// import "path/to/mylibrary"  — reserved for future multi-file support
class ImportDecl : public Decl {
public:
    std::string path;
    ImportDecl(SourceRange r, std::string p) : path(std::move(p)) { range = r; }
    Kind kind() const override { return IMPORT; }
    const std::string& name() const override { return path; }
};

class ProcDecl : public Decl {
public:
    std::string proc_name;
    std::vector<ParamGroup> params;
    // Single return: return_type non-null, return_types empty.
    // Multi-return:  return_type null,     return_types non-empty.
    Type*              return_type  = nullptr;
    std::vector<Type*> return_types;          // filled for -> (T1, T2, ...)
    BlockStmt* body = nullptr;                // null means "---" (extern)
    ProcDecl(SourceRange r, std::string n, std::vector<ParamGroup> p,
             Type* ret, std::vector<Type*> rets, BlockStmt* b)
        : proc_name(std::move(n)), params(std::move(p)),
          return_type(ret), return_types(std::move(rets)), body(b) { range = r; }
    Kind kind() const override { return PROC; }
    const std::string& name() const override { return proc_name; }
};

// ---------------------------------------------------------------------------
// Stmt (abstract)
// ---------------------------------------------------------------------------
class Stmt : public Node {
public:
    enum Kind { BLOCK, RETURN, IF, LOOP, BREAK, CONTINUE, ASSIGN, EXPR, DECL_STMT,
                 FOR_RANGE, DEFER, MATCH, WHEN, COMPOUND_ASSIGN, INC_DEC, HASH_ASSERT,
                 MULTI_ASSIGN, MULTI_DECL,
                 BREAK_LABEL, CONTINUE_LABEL };
    virtual Kind kind() const = 0;
};

class BlockStmt : public Stmt {
public:
    std::vector<Stmt*> stmts;
    BlockStmt(SourceRange r, std::vector<Stmt*> s) : stmts(std::move(s)) { range = r; }
    Kind kind() const override { return BLOCK; }
};

class ReturnStmt : public Stmt {
public:
    Expr* value = nullptr;   // null means void return
    ReturnStmt(SourceRange r, Expr* v) : value(v) { range = r; }
    Kind kind() const override { return RETURN; }
};

// a, b := foo()   — multi-value declaration from a single call/tuple
class MultiDeclStmt : public Stmt {
public:
    std::vector<std::string> names;   // variable names ("_" = discard)
    Expr*                    rhs;     // must evaluate to TupleExpr or multi-return call
    MultiDeclStmt(SourceRange r, std::vector<std::string> n, Expr* e)
        : names(std::move(n)), rhs(e) { range = r; }
    Kind kind() const override { return MULTI_DECL; }
};

// a, b = foo()   — multi-value assignment to existing variables
class MultiAssignStmt : public Stmt {
public:
    std::vector<Expr*> lvalues;
    Expr*              rhs;
    MultiAssignStmt(SourceRange r, std::vector<Expr*> lv, Expr* e)
        : lvalues(std::move(lv)), rhs(e) { range = r; }
    Kind kind() const override { return MULTI_ASSIGN; }
};

class IfStmt : public Stmt {
public:
    Expr* cond;
    BlockStmt* then_block;
    std::vector<std::pair<Expr*, BlockStmt*>> else_ifs;
    BlockStmt* else_block = nullptr;
    IfStmt(SourceRange r, Expr* c, BlockStmt* t) : cond(c), then_block(t) { range = r; }
    Kind kind() const override { return IF; }
};

class LoopStmt : public Stmt {
public:
    Expr*       cond  = nullptr;  // null = infinite loop; non-null = while(cond)
    BlockStmt*  body;
    std::string label;            // optional loop label, e.g. "outer"
    LoopStmt(SourceRange r, BlockStmt* b) : body(b) { range = r; }
    LoopStmt(SourceRange r, Expr* c, BlockStmt* b) : cond(c), body(b) { range = r; }
    Kind kind() const override { return LOOP; }
};

class BreakStmt : public Stmt {
public:
    BreakStmt(SourceRange r) { range = r; }
    Kind kind() const override { return BREAK; }
};

class ContinueStmt : public Stmt {
public:
    ContinueStmt(SourceRange r) { range = r; }
    Kind kind() const override { return CONTINUE; }
};

// break <label>  /  continue <label>
class LabeledBreakStmt : public Stmt {
public:
    std::string label;
    LabeledBreakStmt(SourceRange r, std::string l) : label(std::move(l)) { range = r; }
    Kind kind() const override { return BREAK_LABEL; }
};

class LabeledContinueStmt : public Stmt {
public:
    std::string label;
    LabeledContinueStmt(SourceRange r, std::string l) : label(std::move(l)) { range = r; }
    Kind kind() const override { return CONTINUE_LABEL; }
};

class AssignStmt : public Stmt {
public:
    Expr* lvalue;
    Expr* rhs;
    AssignStmt(SourceRange r, Expr* l, Expr* rhs) : lvalue(l), rhs(rhs) { range = r; }
    Kind kind() const override { return ASSIGN; }
};

class ExprStmt : public Stmt {
public:
    Expr* expr;
    ExprStmt(SourceRange r, Expr* e) : expr(e) { range = r; }
    Kind kind() const override { return EXPR; }
};

// Wraps a var/const declaration appearing as a statement inside a block.
// Needed because Decl and Stmt are sibling class hierarchies.
class DeclStmt : public Stmt {
public:
    Decl* decl;
    DeclStmt(SourceRange r, Decl* d) : decl(d) { range = r; }
    Kind kind() const override { return DECL_STMT; }
};

// ---------------------------------------------------------------------------
// Expr (abstract)
// ---------------------------------------------------------------------------
class Expr : public Node {
public:
    enum Kind { BINARY, UNARY, CALL, INDEX, SLICE, FIELD, DEREF, ADDR, CAST,
                LIT, IDENT, STRUCT_LIT, TUPLE, SIZEOF_EXPR, ARRAY_INIT,
                BUILTIN_CALL, OR_RETURN_EXPR };
    virtual Kind kind() const = 0;
};

class BinaryExpr : public Expr {
public:
    Expr* left;
    int op;   // infix operator
    Expr* right;
    BinaryExpr(SourceRange r, Expr* l, int o, Expr* rgt)
        : left(l), op(o), right(rgt) { range = r; }
    Kind kind() const override { return BINARY; }
};

class UnaryExpr : public Expr {
public:
    int op;   // prefix: TOK_MINUS, TOK_NOT, TOK_AMP
    Expr* expr;
    UnaryExpr(SourceRange r, int o, Expr* e)
        : op(o), expr(e) { range = r; }
    Kind kind() const override { return UNARY; }
};

class CallExpr : public Expr {
public:
    Expr* callee;
    std::vector<Expr*> args;
    CallExpr(SourceRange r, Expr* c, std::vector<Expr*> a)
        : callee(c), args(std::move(a)) { range = r; }
    Kind kind() const override { return CALL; }
};

class IndexExpr : public Expr {
public:
    Expr* base;
    Expr* index;
    IndexExpr(SourceRange r, Expr* b, Expr* i)
        : base(b), index(i) { range = r; }
    Kind kind() const override { return INDEX; }
};

class SliceExpr : public Expr {
public:
    Expr* base;
    Expr* low = nullptr;      // null for [:], which is full slice
    Expr* high = nullptr;
    bool inclusive = false;   // for ..= vs ..<
    bool full_slice = false;  // true for [:]
    SliceExpr(SourceRange r, Expr* b) : base(b), full_slice(true) { range = r; }
    SliceExpr(SourceRange r, Expr* b, Expr* lo, Expr* hi, bool inc)
        : base(b), low(lo), high(hi), inclusive(inc), full_slice(false) { range = r; }
    Kind kind() const override { return SLICE; }
};

class FieldExpr : public Expr {
public:
    Expr* base;
    std::string field;
    FieldExpr(SourceRange r, Expr* b, std::string f)
        : base(b), field(std::move(f)) { range = r; }
    Kind kind() const override { return FIELD; }
};

class DerefExpr : public Expr {
public:
    Expr* expr;   // ^ applied to expr (postfix)
    DerefExpr(SourceRange r, Expr* e) : expr(e) { range = r; }
    Kind kind() const override { return DEREF; }
};

class AddrExpr : public Expr {
public:
    Expr* expr;   // & applied to expr (prefix)
    AddrExpr(SourceRange r, Expr* e) : expr(e) { range = r; }
    Kind kind() const override { return ADDR; }
};

class CastExpr : public Expr {
public:
    Type* target_type;
    Expr* expr;
    CastExpr(SourceRange r, Type* t, Expr* e) : target_type(t), expr(e) { range = r; }
    Kind kind() const override { return CAST; }
};

class LitExpr : public Expr {
public:
    enum LitKind { INT, FLOAT, BOOL, NIL, STRING };
    LitKind lit_kind;
    union {
        uint64_t int_val;
        double float_val;
        bool bool_val;
    };
    std::string str_val;   // for STRING

    LitExpr(SourceRange r, uint64_t v) : lit_kind(INT), int_val(v) { range = r; }
    LitExpr(SourceRange r, double v) : lit_kind(FLOAT), float_val(v) { range = r; }
    LitExpr(SourceRange r, bool v) : lit_kind(BOOL), bool_val(v) { range = r; }
    LitExpr(SourceRange r, std::nullptr_t) : lit_kind(NIL) { range = r; }
    LitExpr(SourceRange r, std::string s) : lit_kind(STRING), str_val(std::move(s)) { range = r; }
    Kind kind() const override { return LIT; }
};

class IdentExpr : public Expr {
public:
    std::string name;
    IdentExpr(SourceRange r, std::string n) : name(std::move(n)) { range = r; }
    Kind kind() const override { return IDENT; }
};

class StructLitExpr : public Expr {
public:
    std::string type_name;
    std::vector<FieldInit> fields;
    Expr* base = nullptr;   // optional spread: Rect{ ..old_rect, width = 50 }
    StructLitExpr(SourceRange r, std::string tn, std::vector<FieldInit> f, Expr* b = nullptr)
        : type_name(std::move(tn)), fields(std::move(f)), base(b) { range = r; }
    Kind kind() const override { return STRUCT_LIT; }
};

// Tuple expression: (a, b, c) — used for multi-return and multi-assign RHS
class TupleExpr : public Expr {
public:
    std::vector<Expr*> elems;
    TupleExpr(SourceRange r, std::vector<Expr*> e) : elems(std::move(e)) { range = r; }
    Kind kind() const override { return TUPLE; }
};

// sizeof(T) / sizeof(expr) and alignof(T)
class SizeofExpr : public Expr {
public:
    bool is_align;       // true = alignof, false = sizeof
    Type* type_arg;      // non-null when argument is a type
    Expr* expr_arg;      // non-null when argument is an expression
    SizeofExpr(SourceRange r, bool align, Type* t, Expr* e)
        : is_align(align), type_arg(t), expr_arg(e) { range = r; }
    Kind kind() const override { return SIZEOF_EXPR; }
};

// ---------------------------------------------------------------------------
// ArrayInitExpr: { expr, expr, ... } — used in global/local var initializers
// e.g.  verts: [5]Vec3 = { Vec3{...}, Vec3{...} }
class ArrayInitExpr : public Expr {
public:
    std::vector<Expr*> elems;
    ArrayInitExpr(SourceRange r, std::vector<Expr*> e) : elems(std::move(e)) { range = r; }
    Kind kind() const override { return ARRAY_INIT; }
};

// BuiltinCallExpr — append, len, cap, reserve, delete_dyn, to_cstr, from_cstr
class BuiltinCallExpr : public Expr {
public:
    int builtin_tok;            // TOK_KW_APPEND, TOK_KW_LEN, ...
    std::vector<Expr*> args;
    BuiltinCallExpr(SourceRange r, int tok, std::vector<Expr*> a)
        : builtin_tok(tok), args(std::move(a)) { range = r; }
    Kind kind() const override { return BUILTIN_CALL; }
};

// expr or_return  — short-circuits on (T, bool) false result
class OrReturnExpr : public Expr {
public:
    Expr* inner;
    OrReturnExpr(SourceRange r, Expr* e) : inner(e) { range = r; }
    Kind kind() const override { return OR_RETURN_EXPR; }
};

// ForRangeStmt:  for i in lo..<hi { }  /  for i in lo..=hi step s { }
// ---------------------------------------------------------------------------
class ForRangeStmt : public Stmt {
public:
    std::string var;        // loop variable name
    Expr*       lo;         // lower bound (inclusive)
    Expr*       hi;         // upper bound
    bool        inclusive;  // true = ..=, false = ..<
    Expr*       step_expr = nullptr;  // null = step 1
    BlockStmt*  body;
    ForRangeStmt(SourceRange r, std::string v, Expr* l, Expr* h, bool inc, BlockStmt* b)
        : var(std::move(v)), lo(l), hi(h), inclusive(inc), body(b) { range = r; }
    Kind kind() const override { return FOR_RANGE; }
};

// ---------------------------------------------------------------------------
// DeferStmt:  defer expr
// ---------------------------------------------------------------------------
class DeferStmt : public Stmt {
public:
    Stmt* inner;   // the statement to defer (usually ExprStmt wrapping a call)
    DeferStmt(SourceRange r, Stmt* s) : inner(s) { range = r; }
    Kind kind() const override { return DEFER; }
};

// ---------------------------------------------------------------------------
// MatchStmt:  match val { case X { } case { } }
// ---------------------------------------------------------------------------
struct MatchCase {
    Expr*       value = nullptr;  // null = default case
    BlockStmt*  body;
    SourceLoc   loc;
};

class MatchStmt : public Stmt {
public:
    Expr*                  value;
    std::vector<MatchCase> cases;
    MatchStmt(SourceRange r, Expr* v, std::vector<MatchCase> c)
        : value(v), cases(std::move(c)) { range = r; }
    Kind kind() const override { return MATCH; }
};

// ---------------------------------------------------------------------------
// WhenStmt:  when CONST { } else when CONST { } else { }
// ---------------------------------------------------------------------------
class WhenStmt : public Stmt {
public:
    Expr*       cond;
    BlockStmt*  then_block;
    std::vector<std::pair<Expr*, BlockStmt*>> else_whens;
    BlockStmt*  else_block = nullptr;
    WhenStmt(SourceRange r, Expr* c, BlockStmt* t) : cond(c), then_block(t) { range = r; }
    Kind kind() const override { return WHEN; }
};

// ---------------------------------------------------------------------------
// CompoundAssignStmt:  lvalue += rhs  etc.
// ---------------------------------------------------------------------------
class CompoundAssignStmt : public Stmt {
public:
    Expr* lvalue;
    int   op;    // TOK_PLUS, TOK_MINUS, TOK_STAR, TOK_SLASH, TOK_PERCENT, TOK_AMP, TOK_PIPE, TOK_XOR
    Expr* rhs;
    CompoundAssignStmt(SourceRange r, Expr* l, int o, Expr* rhs)
        : lvalue(l), op(o), rhs(rhs) { range = r; }
    Kind kind() const override { return COMPOUND_ASSIGN; }
};

// ---------------------------------------------------------------------------
// IncDecStmt:  expr++  /  expr--  (statement-level only)
// ---------------------------------------------------------------------------
class IncDecStmt : public Stmt {
public:
    Expr* expr;
    bool  inc;  // true = ++,  false = --
    IncDecStmt(SourceRange r, Expr* e, bool i) : expr(e), inc(i) { range = r; }
    Kind kind() const override { return INC_DEC; }
};

// ---------------------------------------------------------------------------
// HashAssertStmt:  #assert <const-expr>
// Emits static_assert(expr, "<source location>") in C++.
// ---------------------------------------------------------------------------
class HashAssertStmt : public Stmt {
public:
    Expr* cond;
    HashAssertStmt(SourceRange r, Expr* c) : cond(c) { range = r; }
    Kind kind() const override { return HASH_ASSERT; }
};

// ---------------------------------------------------------------------------
// EnumDecl:  Name :: enum { A, B = 2, C }
// ---------------------------------------------------------------------------
struct EnumVariantAST {
    std::string name;
    Expr*       value = nullptr;  // null = auto-assign
    SourceLoc   loc;
};

class EnumDecl : public Decl {
public:
    std::string                  enum_name;
    std::vector<EnumVariantAST>  variants;
    EnumDecl(SourceRange r, std::string n, std::vector<EnumVariantAST> v)
        : enum_name(std::move(n)), variants(std::move(v)) { range = r; }
    Kind kind() const override { return ENUM_DECL; }
    const std::string& name() const override { return enum_name; }
};

// ---------------------------------------------------------------------------
// Program
// ---------------------------------------------------------------------------
struct Program : public Node {
    std::vector<Decl*> decls;
};

} // namespace ZedLang
