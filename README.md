# P4 LSP

We are working on creating a complete LSP for the P4 language.

Our objective is to at least have:
- syntax coloration (available)
- hover (partially available)
- code completions (not available yet)


Currently, the only LSP client we've made is for LazyVIM

> [!CAUTION]  
> This LSP is highly experimental for now, it's not stable at all.

## Installation

> [!IMPORTANT]  
> This is only for LazyVIM users, as it will create plugins files in `~/.config/nvim/`

First, install the last version of PowerMake:
```sh
pip install -U powermake
```

Then, clone this repo. It's important that you choose a cloning folder that you will not destroy after
```sh
mkdir ~/p4/
cd ~/p4/
git clone https://github.com/mactul/p4_lsp
```

Then go in the folder and using a single PowerMake command, compile and install the LazyVIM files
```sh
cd p4_lsp
python makefile.py -rvi
```

You should then restart NeoVIM, open a p4 file and everything should work.
