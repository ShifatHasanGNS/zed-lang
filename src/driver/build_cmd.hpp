// =============================================================================
// build_cmd.hpp — CLI subcommand implementations for zed
// =============================================================================

#pragma once

#include <string>

namespace zed {

// Must be called once at startup with the resolved directory of the zed binary.
// Used by copy_runtime() to locate runtime.hpp regardless of cwd.
void set_exe_dir(const std::string& dir);

enum class BuildMode {
    Debug,    // -g -O0   (default)
    Release,  // -O3 -DNDEBUG
};

// zed build --project <root>
int cmd_build_project(const std::string& root, bool verbose, BuildMode mode = BuildMode::Debug, bool save_ir = false);

// zed build --file <path>
int cmd_build_file(const std::string& filepath, bool verbose, BuildMode mode = BuildMode::Debug, bool save_ir = false);

// zed run --project <root>   (build + execute)
int cmd_run_project(const std::string& root, bool verbose, BuildMode mode = BuildMode::Debug, bool save_ir = false);

// zed run --file <path>      (build + execute)
int cmd_run_file(const std::string& filepath, bool verbose, BuildMode mode = BuildMode::Debug, bool save_ir = false);

// zed init <project_name>    (scaffold new project in cwd)
int cmd_init(const std::string& name);

// zed clean [--project <root> | --file <path>]
// If neither flag given, uses cwd as project root.
int cmd_clean_project(const std::string& root);
int cmd_clean_file(const std::string& filepath);

} // namespace zed
