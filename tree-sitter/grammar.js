// Extremely simplified grammar for syntax highlighting only
module.exports = grammar({
  name: 'p4',

  // Tree-sitter’s lexer runs these regexes directly.
  rules: {
    source_file: $ => repeat(choice(
            $.long_comment,
            $.short_comment,
            $.preprocessor_keyword,
            'if',
            'else',
            'return',
            'transition',
            $.keyword,
            $.number_literal,
            $.string_literal,
            $.builtin_type,
            $.identifier,
        )),

    keyword: $ => choice('struct', 'header', 'control', 'action', 'typedef', 'table', 'parser', 'state', 'apply'),

    builtin_type: $ => choice('bit', 'const', 'bool', 'void', 'int', 'in', 'out', 'inout'),

    identifier: $ => /[A-Za-z_]\w*/,
    number_literal: $ => /0?(x|b)?\d+/,
    string_literal: $ => /"[^"]*"/,
    long_comment: $ => /\/\*([^\*]*[\*]*[^\*/])*[^*]*[\*]+\//,
    short_comment: _ => token(/\/\/.*/),
    preprocessor_keyword: $ => /#(include|define|if|elif|else|endif)/,
  }
});

