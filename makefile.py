import os
import powermake

def on_build(config: powermake.Config):
    config.add_c_flags("-Wsecurity")
    config.add_includedirs("./")
    config.add_shared_libs("fl")

    files = powermake.filter_files(powermake.get_files("src/*.c", "lib/*.c"), "**/*.lex.c", "**/*.tab.c")

    config.nb_total_operations = len(files) + 7

    powermake.run_command_if_needed(
        config=config,
        outputfile="src/parser.tab.c",
        dependencies={"src/parser.y"},
        command=["bison", "--header=src/parser.tab.h", "--output=src/parser.tab.c", "src/parser.y"],
    )

    powermake.run_command_if_needed(
        config=config,
        outputfile="src/lexer.lex.c",
        dependencies={"src/lexer.lex"},
        command="flex -o src/lexer.lex.c src/lexer.lex",
        shell=True
    )
    
    powermake.run_command_if_needed(
        config=config,
        outputfile="tree-sitter/src/parser.c",
        dependencies={"tree-sitter/grammar.js"},
        command="tree-sitter generate tree-sitter/grammar.js -o tree-sitter/src",
        shell=True
    )

    powermake.run_command_if_needed(
        config=config,
        outputfile="tree-sitter/p4.so",
        dependencies={"tree-sitter/src/parser.c"},
        command="gcc -shared -fPIC -I/usr/include/tree-sitter -o tree-sitter/p4.so tree-sitter/src/parser.c -I tree-sitter/",
        shell=True
    )

    objects = powermake.compile_files(config, files)

    config.remove_c_flags("-fanalyzer")  # This raises too many errors for the generated lexer.lex.c and parser.tab.c
    objects.update(powermake.compile_files(config, powermake.get_files("**/*.lex.c", "**/*.tab.c")))


    powermake.link_files(config, objects)


def on_clean(config: powermake.Config):
    powermake.delete_files_from_disk("src/lexer.lex.c", "src/parser.tab.*")

    powermake.default_on_clean(config)


def copy_file(old_path: str, new_path: str):
    with open(old_path, "r") as file:
        content = file.read().replace("$P4_LSP_FOLDER", os.path.dirname(os.path.realpath(__file__)))

    with open(new_path, "w") as file:
        file.write(content)


def on_install(config: powermake.Config, location: str | None):
    powermake.makedirs(os.path.expanduser("~/.config/nvim/queries/p4/"))
    powermake.makedirs(os.path.expanduser("~/.config/nvim/lua/plugins/"))
    powermake.print_info("Copying ~/.config/nvim/queries/p4/highlights.scm", config.verbosity)
    copy_file("./nvim_config/queries/p4/highlights.scm", os.path.expanduser("~/.config/nvim/queries/p4/highlights.scm"))
    powermake.print_info("Copying ~/.config/nvim/lua/plugins/p4-lsp.lua", config.verbosity)
    copy_file("./nvim_config/lua/plugins/p4-lsp.lua", os.path.expanduser("~/.config/nvim/lua/plugins/p4-lsp.lua"))
    powermake.print_info("Copying ~/.config/nvim/lua/plugins/p4-treesitter.lua", config.verbosity)
    copy_file("./nvim_config/lua/plugins/p4-treesitter.lua", os.path.expanduser("~/.config/nvim/lua/plugins/p4-treesitter.lua"))

powermake.run("p4_lsp", build_callback=on_build, clean_callback=on_clean, install_callback=on_install)
