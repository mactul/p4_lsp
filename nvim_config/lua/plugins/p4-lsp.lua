return {
    {
        "neovim/nvim-lspconfig",
        opts = function(_, opts)
            local configs = require("lspconfig.configs")

            vim.filetype.add({
                extension = {
                    p4 = "p4",
                },
            })

            if not configs.minimal_lsp then
                configs.minimal_lsp = {
                    default_config = {
                        cmd = { "python3", "$P4_LSP_FOLDER/lsp_server.py" },
                        filetypes = { "p4" },
                        root_dir = function(fname)
                            return vim.fn.getcwd()
                        end,
                        single_file_support = true,
                    },
                }
            end

            opts.servers = opts.servers or {}
            opts.servers.minimal_lsp = {
                enabled = true,
                cmd = { "python3", "$P4_LSP_FOLDER/lsp_server.py" },
            }
        end,
    },
}
