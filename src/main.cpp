// =============================================================================
// main.cpp — zed compiler driver
// =============================================================================
// Subcommands:
//   zed build --project <root>   build a project (reads zed.toml)
//   zed build --file    <path>   compile a single .z file
//   zed run   --project <root>   build + run project
//   zed run   --file    <path>   build + run single file
//   zed init  <name>             scaffold a new project in cwd
//   zed clean                    clean build/ and executable in cwd project
//   zed clean --project <root>   clean that project
//   zed clean --file    <path>   clean that file's artifacts
//
// Low-level (direct compile, no subcommand):
//   zed [options] <file>...      compile one or more source files directly
// =============================================================================

#include "support/error.hpp"
#include "frontend/ast.hpp"
#include "frontend/ast_printer.hpp"
#include "frontend/lexer_extra.hpp"
#include "sema/types.hpp"
#include "sema/symtable.hpp"
#include "sema/type_checker.hpp"
#include "codegen/codegen.hpp"
#include "driver/build_cmd.hpp"

#include "flex_bison/parser.tab.hpp"
#include "flex_bison/lexer.h"
#include "frontend/token.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <unordered_map>
#include <memory>
#include <unistd.h>
#include <sys/stat.h>

int yyparse(yyscan_t scanner,
            ZedLang::ErrorReporter* err,
            const char* filename,
            ZedLang::Program** result);

using namespace ZedLang;

// ---------------------------------------------------------------------------
// Usage
// ---------------------------------------------------------------------------
static void print_usage(const char* prog) {
    std::cerr
        << "usage:\n"
        << "  " << prog << " build  [debug|release] --project <root>   build a project (zed.toml required)\n"
        << "  " << prog << " build  [debug|release] --file    <path>   build a single .z file\n"
        << "  " << prog << " run    [debug|release] --project <root>   build and run a project\n"
        << "  " << prog << " run    [debug|release] --file    <path>   build and run a single .z file\n"
        << "  " << prog << " init   <name>             create a new project in the current directory\n"
        << "  " << prog << " clean                     clean cwd project (build/ + executable)\n"
        << "  " << prog << " clean  --project <root>   clean that project\n"
        << "  " << prog << " clean  --file    <path>   clean that file's artifacts\n"
        << "\nall commands accept --verbose for detailed output.\n"
        << "\nlow-level (direct compile):\n"
        << "  " << prog << " [options] <file>...\n"
        << "    --ast           print AST after parsing\n"
        << "    --no-typecheck  skip type checking\n"
        << "    --no-codegen    skip code generation\n"
        << "    --outdir <dir>  output directory for .cpp files\n"
        << "    --save-ir       dump tokens + AST to <outdir>/intermediates/\n"
        << "    --verbose       verbose output\n"
        << "\nhigh-level commands also accept --save-ir to dump tokens + AST to build/intermediates/.\n";
}

// ---------------------------------------------------------------------------
// Helpers shared with low-level path
// ---------------------------------------------------------------------------
static std::string stem(const std::string& path) {
    size_t slash = path.rfind('/');
    std::string base = (slash == std::string::npos) ? path : path.substr(slash + 1);
    size_t dot = base.rfind('.');
    return (dot == std::string::npos) ? base : base.substr(0, dot);
}

struct CompUnit {
    std::string  filepath;
    std::string  file_stem;
    Program*     prog   = nullptr;
    SymbolTable* sym    = nullptr;
    bool         ok     = true;
};

// ---------------------------------------------------------------------------
// Low-level compile (original behaviour: zed [opts] <files>)
// ---------------------------------------------------------------------------
static int compile_direct(int argc, char** argv) {
    bool        opt_ast       = false;
    bool        opt_typecheck = true;
    bool        opt_codegen   = true;
    bool        opt_verbose   = false;
    bool        opt_save_ir   = false;
    std::string opt_outdir    = "./build";
    std::vector<std::string> files;

    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if      (arg == "--ast")          opt_ast = true;
        else if (arg == "--no-typecheck") { opt_typecheck = false; opt_codegen = false; }
        else if (arg == "--no-codegen")   opt_codegen = false;
        else if (arg == "--verbose")      opt_verbose = true;
        else if (arg == "--save-ir")       opt_save_ir = true;
        else if (arg == "--outdir" && i + 1 < argc) opt_outdir = argv[++i];
        else if (arg.rfind("--", 0) == 0) {
            std::cerr << "unknown option: " << arg << "\n";
            print_usage(argv[0]); return 1;
        } else {
            files.push_back(arg);
        }
    }

    if (files.empty()) { print_usage(argv[0]); return 1; }

    TypeArena shared_arena;
    std::vector<std::unique_ptr<SymbolTable>> unit_syms;
    std::unordered_map<std::string, CompUnit*> registry;
    std::vector<CompUnit> units(files.size());

    // Phase 1
    for (size_t i = 0; i < files.size(); ++i) {
        CompUnit& u = units[i];
        u.filepath  = files[i];
        u.file_stem = stem(files[i]);

        ErrorReporter parse_err;
        FILE* fp = fopen(files[i].c_str(), "r");
        if (!fp) {
            std::cerr << "error: cannot open '" << files[i] << "'\n";
            u.ok = false; continue;
        }
        yyscan_t scanner;
        yylex_init(&scanner);
        yyset_in(fp, scanner);
        LexerExtra extra(files[i].c_str(), &parse_err);
        yyset_extra(&extra, scanner);
        int res = yyparse(scanner, &parse_err, files[i].c_str(), &u.prog);
        fclose(fp); yylex_destroy(scanner);

        if (res != 0 || parse_err.has_errors()) {
            std::cerr << files[i] << ": parsing failed\n";
            parse_err.flush();
            u.ok = false; delete u.prog; u.prog = nullptr; continue;
        }
        if (opt_verbose) std::cout << files[i] << ": [parse] OK\n";
        if (opt_ast) { AstPrinter printer(std::cout); printer.print(u.prog); }

        // --save-ir: write token list and AST
        if (opt_save_ir) {
            std::string ir_dir = opt_outdir + "/intermediates";
            // mkdir the intermediates dir
            ::mkdir(ir_dir.c_str(), 0755);
            // Token list
            {
                std::string tok_path = ir_dir + "/" + u.file_stem + ".tokens.txt";
                std::ofstream tok_out(tok_path);
                if (tok_out) {
                    tok_out << "# tokens: " << files[i] << "\n";
                    ErrorReporter dummy2;
                    FILE* fp2 = fopen(files[i].c_str(), "r");
                    if (fp2) {
                        yyscan_t sc2; yylex_init(&sc2); yyset_in(fp2, sc2);
                        LexerExtra ex2(files[i].c_str(), &dummy2);
                        yyset_extra(&ex2, sc2);
                        YYSTYPE lv{}; YYLTYPE ll{}; int tk;
                        while ((tk = yylex(&lv, &ll, sc2)) != 0) {
                            tok_out << ll.first_line << ":" << ll.first_column
                                    << "\t" << ZedLang::token_kind_name(tk) << "\n";
                        }
                        fclose(fp2); yylex_destroy(sc2);
                    }
                }
            }
            // Raw AST
            {
                std::string ast_path = ir_dir + "/" + u.file_stem + ".ast.txt";
                std::ofstream ast_out(ast_path);
                if (ast_out) {
                    ast_out << "# AST: " << files[i] << "\n";
                    AstPrinter pr(ast_out); pr.print(u.prog);
                }
            }
        }

        ErrorReporter dummy;
        auto sp = std::make_unique<SymbolTable>(shared_arena, dummy);
        sp->collect_globals(u.prog);
        u.sym = sp.get();
        unit_syms.push_back(std::move(sp));
        registry[u.file_stem] = &u;
    }

    // Phase 2
    bool any_failed = false;
    for (CompUnit& u : units) {
        if (!u.ok || !u.prog) { any_failed = true; continue; }

        ErrorReporter err;
        std::vector<Program*> imported_progs;
        for (Decl* d : u.prog->decls) {
            if (d->kind() != Decl::IMPORT) continue;
            auto* id = static_cast<ImportDecl*>(d);
            std::string key = stem(id->path);
            auto it = registry.find(key);
            if (it == registry.end() || !it->second->ok) {
                err.error(d->range.begin,
                    "import '" + id->path + "': module not found "
                    "(pass its .z file on the command line before this file)");
                continue;
            }
            CompUnit* dep = it->second;
            u.sym->import_from(*dep->sym);
            imported_progs.push_back(dep->prog);
            if (opt_verbose) std::cout << u.filepath << ": [import] " << key << "\n";
        }

        if (!opt_typecheck) continue;

        TypeChecker tc(*u.sym, err);
        tc.check(u.prog);
        if (err.has_errors()) {
            std::cerr << u.filepath << ": type errors\n";
            err.flush(); any_failed = true; continue;
        }
        if (opt_verbose) std::cout << u.filepath << ": [types] OK\n";
        if (!opt_codegen) continue;

        std::string out_path = opt_outdir + "/" + u.file_stem + ".cpp";
        std::ofstream out(out_path);
        if (!out) {
            std::cerr << "error: cannot write '" << out_path << "'\n";
            any_failed = true; continue;
        }
        CodeGen cg(tc, out);
        for (Program* imp : imported_progs) cg.add_import(imp);
        cg.generate(u.prog);
        std::cout << u.filepath << " -> " << out_path << "\n";

        std::string rt_dst = opt_outdir + "/runtime.hpp";
        std::ifstream rt_src("src/runtime/runtime.hpp", std::ios::binary);
        if (!rt_src) rt_src.open("src/runtime.hpp", std::ios::binary);  // legacy fallback
        if (!rt_src) rt_src.open("runtime.hpp", std::ios::binary);
        std::ofstream rt_out(rt_dst, std::ios::binary);
        if (rt_src && rt_out) rt_out << rt_src.rdbuf();

        err.flush();
    }
    return any_failed ? 1 : 0;
}

// ---------------------------------------------------------------------------
// main
// ---------------------------------------------------------------------------
int main(int argc, char** argv) {
    // Resolve the directory that contains the zed binary so copy_runtime()
    // can find runtime.hpp regardless of the caller's working directory.
    {
        std::string exe = argv[0];
        std::string exe_dir;
        char resolved[PATH_MAX];
        if (realpath(exe.c_str(), resolved)) {
            std::string rp = resolved;
            size_t slash = rp.rfind('/');
            exe_dir = (slash == std::string::npos) ? "." : rp.substr(0, slash);
        } else {
            size_t slash = exe.rfind('/');
            exe_dir = (slash == std::string::npos) ? "." : exe.substr(0, slash);
        }
        zed::set_exe_dir(exe_dir);
    }

    if (argc < 2) { print_usage(argv[0]); return 1; }

    std::string sub = argv[1];

    // -- zed build --project / --file ----------------------------------------
    if (sub == "build" || sub == "run") {
        if (argc < 4) {
            std::cerr << "usage: zed " << sub << " [debug|release] --project <root>\n"
                      << "       zed " << sub << " [debug|release] --file    <path>\n";
            return 1;
        }

        // Optional mode argument: zed build [debug|release] --project/--file ...
        int next = 2;
        zed::BuildMode mode = zed::BuildMode::Debug;
        std::string maybe_mode = argv[next];
        if (maybe_mode == "release") { mode = zed::BuildMode::Release; ++next; }
        else if (maybe_mode == "debug") { ++next; }

        if (argc < next + 2) {
            std::cerr << "usage: zed " << sub << " [debug|release] --project <root>\n"
                      << "       zed " << sub << " [debug|release] --file    <path>\n";
            return 1;
        }

        std::string flag   = argv[next];
        std::string target = argv[next + 1];
        bool verbose  = false;
        bool save_ir  = false;
        for (int i = next + 2; i < argc; ++i) {
            if (std::string(argv[i]) == "--verbose") verbose = true;
            if (std::string(argv[i]) == "--save-ir") save_ir = true;
        }

        if (sub == "build") {
            if (flag == "--project") return zed::cmd_build_project(target, verbose, mode, save_ir);
            if (flag == "--file")    return zed::cmd_build_file(target, verbose, mode, save_ir);
        } else { // run
            if (flag == "--project") return zed::cmd_run_project(target, verbose, mode, save_ir);
            if (flag == "--file")    return zed::cmd_run_file(target, verbose, mode, save_ir);
        }
        std::cerr << "error: unknown flag '" << flag
                  << "'. expected --project or --file\n";
        return 1;
    }

    // -- zed init <name> ------------------------------------------------------
    if (sub == "init") {
        if (argc < 3) { std::cerr << "usage: zed init <project-name>\n"; return 1; }
        return zed::cmd_init(argv[2]);
    }

    // -- zed clean [--project <root> | --file <path>] -------------------------
    if (sub == "clean") {
        if (argc == 2) {
            // No args: clean cwd
            return zed::cmd_clean_project(".");
        }
        if (argc >= 4) {
            std::string flag   = argv[2];
            std::string target = argv[3];
            if (flag == "--project") return zed::cmd_clean_project(target);
            if (flag == "--file")    return zed::cmd_clean_file(target);
            std::cerr << "error: unknown flag '" << flag << "'\n"; return 1;
        }
        std::cerr << "usage: zed clean [--project <root> | --file <path>]\n";
        return 1;
    }

    // -- Low-level direct compile (legacy / internal / test) ------------------
    return compile_direct(argc, argv);
}
