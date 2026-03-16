// =============================================================================
// build_cmd.cpp — zed subcommand implementations
// =============================================================================
// Build layout (same for both --project and --file):
//
//   <root>/
//     build/          ← generated .cpp files + runtime.hpp (intermediate)
//     <output>        ← final executable (just outside build/)
//
// For --file <path.z>:
//   <file_dir>/build/  ← intermediates
//   <file_dir>/<stem>  ← executable
//
// For --project <root>:
//   <root>/build/      ← intermediates
//   <root>/<name>      ← executable  (name from zed.toml [project].name)
// =============================================================================

#include "../driver/build_cmd.hpp"
#include "../driver/toml_reader.hpp"

#include "../support/error.hpp"
#include "../frontend/ast.hpp"
#include "../frontend/ast_printer.hpp"
#include "../frontend/lexer_extra.hpp"
#include "../sema/types.hpp"
#include "../sema/symtable.hpp"
#include "../sema/type_checker.hpp"
#include "../codegen/codegen.hpp"
#include "../frontend/token.hpp"

#include "../flex_bison/parser.tab.hpp"
#include "../flex_bison/lexer.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <unordered_map>
#include <vector>
#include <string>
#include <memory>
#include <stdexcept>
#include <cstdlib>
#include <cstring>
#include <cerrno>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>

int yyparse(yyscan_t scanner,
            ZedLang::ErrorReporter* err,
            const char* filename,
            ZedLang::Program** result);

namespace zed {

// =============================================================================
// Internal helpers
// =============================================================================

// ---- Executable directory (set once by main) --------------------------------

static std::string g_exe_dir;

void set_exe_dir(const std::string& dir) { g_exe_dir = dir; }

// ---- Filesystem -------------------------------------------------------------

static bool path_exists(const std::string& p) {
    struct stat st;
    return stat(p.c_str(), &st) == 0;
}

static bool is_dir(const std::string& p) {
    struct stat st;
    return stat(p.c_str(), &st) == 0 && S_ISDIR(st.st_mode);
}

static void mkdir_p(const std::string& path) {
    std::string cur;
    for (size_t i = 0; i < path.size(); ++i) {
        cur += path[i];
        if (path[i] == '/' || i + 1 == path.size())
            mkdir(cur.c_str(), 0755);
    }
}

// Remove a directory tree (like rm -rf).
static void rm_rf(const std::string& path) {
    if (!path_exists(path)) return;
    if (!is_dir(path)) { remove(path.c_str()); return; }
    DIR* d = opendir(path.c_str());
    if (!d) return;
    struct dirent* ent;
    while ((ent = readdir(d)) != nullptr) {
        std::string name = ent->d_name;
        if (name == "." || name == "..") continue;
        rm_rf(path + "/" + name);
    }
    closedir(d);
    rmdir(path.c_str());
}

static void collect_src(const std::string& dir, std::vector<std::string>& out) {
    DIR* d = opendir(dir.c_str());
    if (!d) return;
    struct dirent* ent;
    while ((ent = readdir(d)) != nullptr) {
        std::string name = ent->d_name;
        if (name == "." || name == "..") continue;
        std::string full = dir + "/" + name;
        if (is_dir(full))
            collect_src(full, out);
        else if (name.size() > 2 && name.substr(name.size() - 2) == ".z")
            out.push_back(full);
    }
    closedir(d);
    std::sort(out.begin(), out.end());
}

// ---- Path manipulation ------------------------------------------------------

static std::string stem(const std::string& path) {
    size_t slash = path.rfind('/');
    std::string base = (slash == std::string::npos) ? path : path.substr(slash + 1);
    size_t dot = base.rfind('.');
    return (dot == std::string::npos) ? base : base.substr(0, dot);
}

static std::string dir_of(const std::string& path) {
    size_t slash = path.rfind('/');
    return (slash == std::string::npos) ? "." : path.substr(0, slash);
}

static std::string join(const std::string& a, const std::string& b) {
    if (a.empty() || a.back() == '/') return a + b;
    return a + "/" + b;
}

// ---- Import scanner ---------------------------------------------------------

static std::vector<std::string> scan_imports(const std::string& filepath) {
    std::vector<std::string> imports;
    std::ifstream f(filepath);
    if (!f) return imports;
    std::string line;
    while (std::getline(f, line)) {
        size_t i = 0;
        while (i < line.size() && (line[i]==' '||line[i]=='\t')) ++i;
        if (i+1 < line.size() && line[i]=='-' && line[i+1]=='-') continue;
        const std::string kw = "import";
        if (line.substr(i, kw.size()) != kw) continue;
        i += kw.size();
        while (i < line.size() && (line[i]==' '||line[i]=='\t')) ++i;
        if (i >= line.size() || line[i] != '"') continue;
        ++i;
        size_t start = i;
        while (i < line.size() && line[i] != '"') ++i;
        if (i > start) imports.push_back(stem(line.substr(start, i - start)));
    }
    return imports;
}

// ---- Topological sort -------------------------------------------------------

static std::vector<size_t> topo_sort(
    size_t n, const std::vector<std::vector<size_t>>& deps)
{
    std::vector<size_t> indeg(n, 0);
    std::vector<std::vector<size_t>> rev(n);
    for (size_t i = 0; i < n; ++i)
        for (size_t j : deps[i]) { rev[j].push_back(i); ++indeg[i]; }
    std::vector<size_t> q, order;
    for (size_t i = 0; i < n; ++i) if (!indeg[i]) q.push_back(i);
    while (!q.empty()) {
        size_t cur = q.back(); q.pop_back();
        order.push_back(cur);
        for (size_t dep : rev[cur]) if (!--indeg[dep]) q.push_back(dep);
    }
    if (order.size() != n)
        throw std::runtime_error("import cycle detected in project sources");
    return order;
}

// ---- Runtime.hpp finder -----------------------------------------------------

static void copy_runtime(const std::string& out_dir) {
    // Search relative to cwd first, then relative to the zed binary's own directory.
    std::vector<std::string> candidates = {
        "src/runtime/runtime.hpp",
        "src/runtime.hpp",    // legacy fallback
        "runtime.hpp",
    };
    if (!g_exe_dir.empty()) {
        candidates.push_back(g_exe_dir + "/src/runtime/runtime.hpp");
        candidates.push_back(g_exe_dir + "/src/runtime.hpp");
        candidates.push_back(g_exe_dir + "/runtime.hpp");
    }
    for (auto& c : candidates) {
        std::ifstream src(c, std::ios::binary);
        if (!src) continue;
        std::ofstream dst(join(out_dir, "runtime.hpp"), std::ios::binary);
        if (dst) { dst << src.rdbuf(); return; }
    }
    std::cerr << "warning: runtime.hpp not found; generated code may not compile.\n";
}

// =============================================================================
// Compiler pipeline
// Returns false on error; fills out_cpp_files with generated .cpp paths.
// =============================================================================

// ---------------------------------------------------------------------------
// save_tokens — lex a file a second time and write one token per line.
// Format:  LINE:COL  TOKEN_KIND_NAME  [value]
// ---------------------------------------------------------------------------
static void save_tokens(const std::string& filepath,
                        const std::string& ir_dir,
                        const std::string& file_stem)
{
    using namespace ZedLang;

    std::string out_path = join(ir_dir, file_stem + ".tokens.txt");
    std::ofstream out(out_path);
    if (!out) return;

    out << "# tokens: " << filepath << "\n";

    ErrorReporter dummy;
    FILE* fp = fopen(filepath.c_str(), "r");
    if (!fp) return;

    yyscan_t sc;
    yylex_init(&sc);
    yyset_in(fp, sc);
    LexerExtra extra(filepath.c_str(), &dummy);
    yyset_extra(&extra, sc);

    // Pull tokens from the lexer directly via yylex.
    // Each call returns the token kind (int); YYSTYPE holds the value.
    YYSTYPE yylval{};
    YYLTYPE yylloc{};
    int tok;
    while ((tok = yylex(&yylval, &yylloc, sc)) != 0) {
        out << yylloc.first_line << ":" << yylloc.first_column
            << "\t" << token_kind_name(tok);
        // Emit literal value where meaningful
        if      (tok == TOK_INT_LIT)    out << "\t" << yylval.int_val;
        else if (tok == TOK_FLOAT_LIT)  out << "\t" << yylval.float_val;
        else if (tok == TOK_STRING_LIT) out << "\t\"" << *yylval.str_val << "\"";
        else if (tok == TOK_IDENT)      out << "\t" << *yylval.str_val;
        out << "\n";
    }

    fclose(fp);
    yylex_destroy(sc);
}

// ---------------------------------------------------------------------------
// run_pipeline — parse, typecheck, codegen for a list of .z files.
// ---------------------------------------------------------------------------
static bool run_pipeline(const std::vector<std::string>& ordered_files,
                         const std::string& out_dir,
                         bool verbose,
                         bool save_ir,
                         std::vector<std::string>& out_cpp)
{
    using namespace ZedLang;

    TypeArena shared_arena;
    std::vector<std::unique_ptr<SymbolTable>> unit_syms;
    std::unordered_map<std::string, size_t> registry;

    struct Unit {
        std::string filepath, file_stem;
        Program*     prog = nullptr;
        SymbolTable* sym  = nullptr;
        bool         ok   = true;
    };

    std::vector<Unit> units(ordered_files.size());

    // Set up intermediates directory (created lazily only when save_ir=true)
    std::string ir_dir = join(out_dir, "intermediates");
    if (save_ir) {
        mkdir_p(ir_dir);
        if (verbose) std::cout << "  [ir]      saving intermediates to " << ir_dir << "\n";
    }

    // Phase 1: parse + collect globals
    for (size_t i = 0; i < ordered_files.size(); ++i) {
        Unit& u     = units[i];
        u.filepath  = ordered_files[i];
        u.file_stem = stem(ordered_files[i]);

        ErrorReporter parse_err;
        FILE* fp = fopen(u.filepath.c_str(), "r");
        if (!fp) {
            std::cerr << "error: cannot open '" << u.filepath << "'\n";
            u.ok = false; continue;
        }
        yyscan_t scanner;
        yylex_init(&scanner);
        yyset_in(fp, scanner);
        LexerExtra extra(u.filepath.c_str(), &parse_err);
        yyset_extra(&extra, scanner);
        int res = yyparse(scanner, &parse_err, u.filepath.c_str(), &u.prog);
        fclose(fp); yylex_destroy(scanner);

        if (res != 0 || parse_err.has_errors()) {
            std::cerr << u.filepath << ": parsing failed\n";
            parse_err.flush();
            u.ok = false; delete u.prog; u.prog = nullptr; continue;
        }
        if (verbose) std::cout << "  [parse]   " << u.filepath << "\n";

        // --save-ir: write token list and raw AST
        if (save_ir) {
            save_tokens(u.filepath, ir_dir, u.file_stem);

            std::string ast_path = join(ir_dir, u.file_stem + ".ast.txt");
            std::ofstream ast_out(ast_path);
            if (ast_out) {
                ast_out << "# AST (after parse): " << u.filepath << "\n";
                ZedLang::AstPrinter printer(ast_out);
                printer.print(u.prog);
            }
            if (verbose) std::cout << "  [ir]      " << u.file_stem << ".tokens.txt  " << u.file_stem << ".ast.txt\n";
        }

        ErrorReporter dummy;
        auto sp = std::make_unique<SymbolTable>(shared_arena, dummy);
        sp->collect_globals(u.prog);
        u.sym = sp.get();
        unit_syms.push_back(std::move(sp));
        registry[u.file_stem] = i;
    }

    // Phase 2: resolve imports, typecheck, emit .cpp
    bool any_failed = false;
    for (Unit& u : units) {
        if (!u.ok || !u.prog) { any_failed = true; continue; }

        ErrorReporter err;
        std::vector<Program*> imported_progs;
        for (Decl* d : u.prog->decls) {
            if (d->kind() != Decl::IMPORT) continue;
            auto* id = static_cast<ImportDecl*>(d);
            std::string key = stem(id->path);
            auto it = registry.find(key);
            if (it == registry.end() || !units[it->second].ok) {
                err.error(d->range.begin,
                    "import '" + id->path + "': module not found");
                continue;
            }
            Unit& dep = units[it->second];
            u.sym->import_from(*dep.sym);
            imported_progs.push_back(dep.prog);
        }

        TypeChecker tc(*u.sym, err);
        tc.check(u.prog);
        if (err.has_errors()) {
            std::cerr << u.filepath << ": type errors\n";
            err.flush(); any_failed = true; continue;
        }
        if (verbose) std::cout << "  [types]   " << u.filepath << "\n";

        // --save-ir: write post-typecheck AST (types are now annotated)
        if (save_ir) {
            std::string typed_path = join(ir_dir, u.file_stem + ".typed_ast.txt");
            std::ofstream typed_out(typed_path);
            if (typed_out) {
                typed_out << "# Typed AST (after typecheck): " << u.filepath << "\n";
                ZedLang::AstPrinter printer(typed_out);
                printer.print(u.prog);
            }
            if (verbose) std::cout << "  [ir]      " << u.file_stem << ".typed_ast.txt\n";
        }

        std::string out_path = join(out_dir, u.file_stem + ".cpp");
        std::ofstream out(out_path);
        if (!out) {
            std::cerr << "error: cannot write '" << out_path << "'\n";
            any_failed = true; continue;
        }
        CodeGen cg(tc, out);
        for (Program* imp : imported_progs) cg.add_import(imp);
        cg.generate(u.prog);
        if (verbose) std::cout << "  [codegen] " << u.filepath << " -> " << out_path << "\n";
        out_cpp.push_back(out_path);
        err.flush();
    }
    return !any_failed;
}

// =============================================================================
// BuildConfig — unified config for both project and single-file builds
// =============================================================================

struct BuildConfig {
    std::string project_root;
    std::string build_dir;     // <root>/build/
    std::string output;        // <root>/<name>  (final executable)

    std::string cxx     = "g++";
    std::string cxx_std = "c++17";
    BuildMode   mode    = BuildMode::Debug;

    std::vector<std::string> src_files;     // in topo order
    std::vector<std::string> extra_flags;
    std::vector<std::string> include_dirs;
    std::vector<std::string> defines;
    std::vector<std::string> libs;
    std::vector<std::string> lib_dirs;
    std::vector<std::string> frameworks;
    std::vector<std::string> raw_link_flags;
    bool save_ir = false;   // --save-ir: dump tokens + AST to build/intermediates/
};

// ---- Build a resolved config ------------------------------------------------

static int execute_build(const BuildConfig& cfg, bool verbose) {
    mkdir_p(cfg.build_dir);

    std::cout << "\n  Compiling...\n";
    std::vector<std::string> cpp_files;
    if (!run_pipeline(cfg.src_files, cfg.build_dir, verbose, cfg.save_ir, cpp_files)) {
        std::cerr << "\n  Build Failed.\n";
        return 1;
    }
    copy_runtime(cfg.build_dir);

    // Build g++ command
    std::ostringstream cmd;
    cmd << cfg.cxx << " -std=" << cfg.cxx_std << " -Wno-parentheses-equality";
    if (cfg.mode == BuildMode::Release)
        cmd << " -O3 -DNDEBUG";
    else
        cmd << " -g -O0";
    // In release mode, strip debug flags from zed.toml compile.flags so that
    // e.g. flags = ["-g"] in the toml cannot re-enable dSYM generation.
    for (auto& f : cfg.extra_flags) {
        if (cfg.mode == BuildMode::Release &&
            (f == "-g" || f == "-ggdb" || f == "-ggdb3" ||
             f == "-g1" || f == "-g2"  || f == "-g3"))
            continue;
        cmd << " " << f;
    }
    for (auto& d : cfg.defines)      cmd << " -D" << d;
    for (auto& i : cfg.include_dirs) cmd << " -I" << i;
    cmd << " -I" << cfg.build_dir;      // for runtime.hpp
    for (auto& f : cpp_files)        cmd << " " << f;
    for (auto& d : cfg.lib_dirs)     cmd << " -L" << d;
    for (auto& l : cfg.libs)         cmd << " -l" << l;
    for (auto& fw : cfg.frameworks)  cmd << " -framework " << fw;
    for (auto& f : cfg.raw_link_flags) cmd << " " << f;
    cmd << " -o " << cfg.output;

    std::string cmd_str = cmd.str();
    if (verbose) std::cout << "\n  Linking:  " << cmd_str << "\n";
    else         std::cout << "\n  Linking ⟶ " << cfg.output << "\n";

    int ret = std::system(cmd_str.c_str());
    if (ret != 0) { std::cerr << "\n  Link Failed (exit " << ret << ").\n"; return 1; }

    std::cout << "\n  Done ⟶ " << cfg.output << "\n";
    return 0;
}

// ---- Sort source files by import dependency order ---------------------------

static std::vector<std::string> sort_sources(const std::vector<std::string>& files) {
    std::unordered_map<std::string, size_t> idx;
    for (size_t i = 0; i < files.size(); ++i) idx[stem(files[i])] = i;

    std::vector<std::vector<size_t>> deps(files.size());
    for (size_t i = 0; i < files.size(); ++i)
        for (auto& imp : scan_imports(files[i])) {
            auto it = idx.find(imp);
            if (it != idx.end()) deps[i].push_back(it->second);
        }

    auto order = topo_sort(files.size(), deps);
    std::vector<std::string> sorted;
    for (size_t i : order) sorted.push_back(files[i]);
    return sorted;
}

// =============================================================================
// Public command implementations
// =============================================================================

// ---------------------------------------------------------------------------
// zed build --project <root>
// ---------------------------------------------------------------------------
int cmd_build_project(const std::string& root, bool verbose, BuildMode mode, bool save_ir) {
    std::string toml_path = join(root, "zed.toml");
    if (!path_exists(toml_path)) {
        std::cerr << "\n  Error: No 'zed.toml' Found in '" << root << "'\n";
        return 1;
    }

    TomlDoc cfg;
    try { cfg = parse_toml(toml_path); }
    catch (const std::exception& e) {
        std::cerr << "\n  Error: 'zed.toml': " << e.what() << "\n"; return 1;
    }

    BuildConfig bc;
    bc.project_root = root;

    std::string proj_name = toml_str(cfg, "project.name", stem(root));
    std::string out_name  = toml_str(cfg, "build.output", proj_name);
    std::string out_dir   = toml_str(cfg, "build.out_dir", "build");
    bc.build_dir = join(root, out_dir);
    bc.output    = join(root, out_name);  // executable sits in project root

    bc.cxx     = toml_str(cfg, "build.compiler", "g++");
    bc.cxx_std = toml_str(cfg, "build.std",      "c++17");

    bc.extra_flags    = toml_array(cfg, "compile.flags");
    bc.include_dirs   = toml_array(cfg, "compile.include_dirs");
    bc.defines        = toml_array(cfg, "compile.defines");
    bc.libs           = toml_array(cfg, "link.libs");
    bc.lib_dirs       = toml_array(cfg, "link.lib_dirs");
    bc.frameworks     = toml_array(cfg, "link.frameworks");
    bc.raw_link_flags = toml_array(cfg, "link.flags");

    // Discover sources
    std::vector<std::string> src_entries = toml_array(cfg, "build.sources");
    if (src_entries.empty()) src_entries.push_back(root);

    std::vector<std::string> raw_files;
    for (auto& entry : src_entries) {
        std::string full = (entry[0] == '/') ? entry : join(root, entry);
        if (is_dir(full))       collect_src(full, raw_files);
        else if (path_exists(full)) raw_files.push_back(full);
        else std::cerr << "\n  Warning: Source Entry '" << full << "' not found.\n";
    }

    if (raw_files.empty()) {
        std::cerr << "\n  Error: No .z files found.\n"; return 1;
    }

    try { bc.src_files = sort_sources(raw_files); }
    catch (const std::exception& e) {
        std::cerr << "error: " << e.what() << "\n"; return 1;
    }

    bc.mode    = mode;
    bc.save_ir = save_ir;
    if (verbose) {
        std::cout << "project: " << proj_name << "\n";
        std::cout << "sources: " << bc.src_files.size() << " file(s)\n";
    }
    return execute_build(bc, verbose);
}

// ---------------------------------------------------------------------------
// zed build --file <path>
// ---------------------------------------------------------------------------
int cmd_build_file(const std::string& filepath, bool verbose, BuildMode mode, bool save_ir) {
    if (!path_exists(filepath)) {
        std::cerr << "error: file not found: '" << filepath << "'\n"; return 1;
    }

    BuildConfig bc;
    bc.project_root = dir_of(filepath);
    bc.build_dir    = join(bc.project_root, "build");
    bc.output       = join(bc.project_root, stem(filepath));
    bc.src_files    = { filepath };

    bc.mode    = mode;
    bc.save_ir = save_ir;
    if (verbose) std::cout << "file: " << filepath << "\n";
    return execute_build(bc, verbose);
}

// ---------------------------------------------------------------------------
// zed run --project / --file  (build then execute)
// ---------------------------------------------------------------------------
int cmd_run_project(const std::string& root, bool verbose, BuildMode mode, bool save_ir) {
    // Re-derive output path from toml so we can run it.
    std::string toml_path = join(root, "zed.toml");
    std::string output;
    if (path_exists(toml_path)) {
        try {
            auto cfg  = parse_toml(toml_path);
            std::string pname = toml_str(cfg, "project.name", stem(root));
            output = join(root, toml_str(cfg, "build.output", pname));
        } catch (...) {}
    }
    if (output.empty()) output = join(root, stem(root));

    int ret = cmd_build_project(root, verbose, mode, save_ir);
    if (ret != 0) return ret;

    std::cout << "\nrunning " << output << " ...\n\n";
    return std::system(output.c_str());
}

int cmd_run_file(const std::string& filepath, bool verbose, BuildMode mode, bool save_ir) {
    std::string output = join(dir_of(filepath), stem(filepath));

    int ret = cmd_build_file(filepath, verbose, mode, save_ir);
    if (ret != 0) return ret;

    std::cout << "\nrunning " << output << " ...\n\n";
    return std::system(output.c_str());
}

// ---------------------------------------------------------------------------
// zed clean
// ---------------------------------------------------------------------------
int cmd_clean_project(const std::string &root) {
    std::cout << "\n  Cleaning project '" << root << "'...\n\n";
    std::string build_dir = join(root, "build");

    // Also find and remove the executable (name from zed.toml if present).
    std::string output;
    std::string toml_path = join(root, "zed.toml");
    if (path_exists(toml_path)) {
        try {
            auto cfg  = parse_toml(toml_path);
            std::string pname = toml_str(cfg, "project.name", stem(root));
            output = join(root, toml_str(cfg, "build.output", pname));
        } catch (...) {}
    }
    std::string dSYM_dir = output + ".dSYM";

    bool removed_anything = false;

    if (path_exists(dSYM_dir)) {
        std::cout << "  removing " << dSYM_dir << "\n";
        rm_rf(dSYM_dir);
        removed_anything = true;
    }
    if (path_exists(build_dir)) {
        std::cout << "  removing " << build_dir << "\n";
        rm_rf(build_dir);
        removed_anything = true;
    }
    if (!output.empty() && path_exists(output)) {
        std::cout << "  removing " << output << "\n";
        remove(output.c_str());
        removed_anything = true;
    }

    if (!removed_anything) std::cout << "  nothing to clean.\n";
    return 0;
}

int cmd_clean_file(const std::string& filepath) {
    std::string base       = dir_of(filepath);
    std::string build_dir  = join(base, "build");
    std::string output     = join(base, stem(filepath));

    bool removed_anything = false;
    if (path_exists(build_dir)) {
        std::cout << "removing " << build_dir << "\n";
        rm_rf(build_dir);
        removed_anything = true;
    }
    if (path_exists(output)) {
        std::cout << "removing " << output << "\n";
        remove(output.c_str());
        removed_anything = true;
    }
    if (!removed_anything) std::cout << "nothing to clean.\n";
    return 0;
}

// ---------------------------------------------------------------------------
// zed init <name>
// ---------------------------------------------------------------------------
int cmd_init(const std::string& name) {
    if (name.empty() || name == "." || name == "..") {
        std::cerr << "error: invalid project name '" << name << "'\n"; return 1;
    }
    if (path_exists(name)) {
        std::cerr << "error: '" << name << "' already exists.\n"; return 1;
    }

    // Create directory structure
    mkdir_p(name);
    mkdir_p(join(name, "src"));

    // zed.toml
    {
        std::ofstream f(join(name, "zed.toml"));
        f << "# =============================================================================\n"
          << "# zed.toml — project build configuration\n"
          << "# =============================================================================\n"
          << "# Build modes:\n"
          << "#   zed build debug   --project .   debug build  (-g -O0)\n"
          << "#   zed build release --project .   release build (-O3 -DNDEBUG)\n"
          << "#   zed run   debug   --project .   build + run\n"
          << "# =============================================================================\n"
          << "\n"
          << "[project]\n"
          << "\n"
          << "# Project name — also the default output binary name.\n"
          << "name    = \"" << name << "\"\n"
          << "\n"
          << "# Informational only; not used by the build system.\n"
          << "version = \"0.1.0\"\n"
          << "\n"
          << "\n"
          << "# =============================================================================\n"
          << "[build]\n"
          << "# =============================================================================\n"
          << "\n"
          << "# Source files or directories to compile (searched recursively for *.z).\n"
          << "# Entries are relative to this file. Import order is resolved automatically.\n"
          << "# Examples:\n"
          << "#   sources = [\"src\"]            -- entire src/ directory\n"
          << "#   sources = [\"src/main.z\"]     -- single file\n"
          << "#   sources = [\"src\", \"lib\"]     -- multiple directories\n"
          << "sources = [\"src\"]\n"
          << "\n"
          << "# Directory for generated .cpp files and runtime.hpp (default: build/).\n"
          << "# Path is relative to this file.\n"
          << "out_dir = \"build\"\n"
          << "\n"
          << "# Output binary name (default: project name).\n"
          << "output = \"" << name << "\"\n"
          << "\n"
          << "# C++ compiler to use for generated code (default: g++).\n"
          << "# Use \"clang++\" on macOS or wherever preferred.\n"
          << "compiler = \"g++\"\n"
          << "\n"
          << "# C++ standard passed as -std=<value> (default: c++17).\n"
          << "std = \"c++17\"\n"
          << "\n"
          << "\n"
          << "# =============================================================================\n"
          << "[compile]\n"
          << "# =============================================================================\n"
          << "\n"
          << "# Extra compiler flags appended verbatim to the compile command.\n"
          << "# Note: -g is stripped automatically in \"release\" builds.\n"
          << "# Examples: \"-Wall\", \"-Wextra\", \"-march=native\", \"-ffast-math\"\n"
          << "flags = [\"-g\"]\n"
          << "\n"
          << "# Additional -I include directories (relative or absolute).\n"
          << "# Useful when cimport-ing headers that live outside standard system paths.\n"
          << "# Example: include_dirs = [\"/usr/local/include\", \"vendor/include\"]\n"
          << "include_dirs = []\n"
          << "\n"
          << "# Preprocessor defines passed as -D<name> or -D<name>=<value>.\n"
          << "# Example: defines = [\"NDEBUG\", \"PLATFORM_DESKTOP\", \"VERSION=2\"]\n"
          << "defines = []\n"
          << "\n"
          << "\n"
          << "# =============================================================================\n"
          << "[link]\n"
          << "# =============================================================================\n"
          << "\n"
          << "# Libraries to link against, passed as -l<name>.\n"
          << "# Example: libs = [\"m\", \"pthread\", \"raylib\"]\n"
          << "libs = []\n"
          << "\n"
          << "# -L library search directories (relative or absolute).\n"
          << "# Example: lib_dirs = [\"/usr/local/lib\", \"vendor/lib\"]\n"
          << "lib_dirs = []\n"
          << "\n"
          << "# macOS frameworks, passed as -framework <name>. Ignored on other platforms.\n"
          << "# Example: frameworks = [\"OpenGL\", \"Cocoa\", \"IOKit\"]\n"
          << "frameworks = []\n"
          << "\n"
          << "# Raw linker flags appended verbatim at the end of the link command.\n"
          << "# Example: flags = [\"-static\", \"-Wl,-rpath,/usr/local/lib\"]\n"
          << "flags = []\n";
    }

    // src/main.z — Your Codebase belongs to 'Zed' !! 🤪
    {
        std::ofstream f(join(name, "src/main.z"));
        f << "cimport \"stdio.h\"\n"
          << "\n"
          << "main :: proc() -> i32 {\n"
          << "    printf(\"\\n  Your Codebase belongs to 'Zed' !! 🤪\\n\")\n"
          << "    return 0\n"
          << "}\n";
    }

    // .gitignore
    {
        std::ofstream f(join(name, ".gitignore"));
        f << "**/.DS_Store\n"
          << name << ".dSYM/\n"
          << "build/\n"
          << name << "\n"
        ;
    }

    // README.md
    {
        std::ofstream f(join(name, "README.md"));
        f << "# " << name << "\n"
          << "\n"
          << "> Your Codebase belongs to 'Zed' !! 🤪\n";
    }

    const std::string bar(45, '-');
    std::cout << "\n"
              << "  ┏━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┓\n"
              << "  ┃           Zed Project Initialized           ┃\n"
              << "  ┗━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┛\n"
              << "\n"
              << "  ◆ " << name << "/\n"
              << "  │\n"
              << "  ├── src/\n"
              << "  │  │\n"
              << "  │  └── main.z     ⟵ entry point\n"
              << "  │\n"
              << "  ├── .gitignore\n"
              << "  │\n"
              << "  ├── README.md\n"
              << "  │\n"
              << "  └── zed.toml      ⟵ build config\n"
              << "\n"
              << "  ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯\n"
              << "\n"
              << "  build:\n"
              << "      zed build debug   --project " << name << "/\n"
              << "      zed build release --project " << name << "/\n"
              << "\n"
              << "  run:\n"
              << "      zed run   debug   --project " << name << "/\n"
              << "      zed run   release --project " << name << "/\n"
              << "\n"
              << "  clean:\n"
              << "      zed clean         --project " << name << "/\n"
              << "\n"
              << "  ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯\n"
              << "\n"
              << "  ▶▶  cd " << name << " && zed run debug --project .\n"
              << "\n"
              << "  ⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯⎯\n"
              << "\n"
        ;

    return 0;
}

} // namespace zed
