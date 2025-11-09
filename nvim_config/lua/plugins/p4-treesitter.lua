return {
  "nvim-treesitter/nvim-treesitter",
  opts = function(_, opts)
    -- Register the custom language for Neovim 0.10+
    vim.treesitter.language.add("p4", {
      -- Path to your local grammar repo or generated parser
      path = "$P4_LSP_FOLDER/tree-sitter/p4.so",
      -- The filetype this grammar applies to
      filetype = "p4",
    })

    opts.highlight = opts.highlight or {}
    opts.highlight.enable = true

    vim.api.nvim_create_autocmd("FileType", {
  pattern = "p4",
  callback = function() vim.treesitter.start() end,
})

  end,
}

