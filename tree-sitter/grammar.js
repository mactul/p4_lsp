// Extremely simplified grammar for syntax highlighting only
module.exports = grammar({
  name: 'p4',

  // Tree-sitter’s lexer runs these regexes directly.
  rules: {
    source_file: $ => repeat(choice($.statement, $.long_comment, $.short_comment, $.preprocessor_keyword)),

    statement: $ => choice($.if_statement, $.return_statement, $.transition_statement, $.expression_statement, $.declaration),

    if_statement: $ => seq(
      'if',
      '(',
      $.expression,
      ')',
      $.block,
      optional(seq('else', $.block))
    ),

    return_statement: $ => seq('return', optional($.expression), ';'),

    transition_statement: $ => seq('transition', $.expression, ';'),

    block: $ => seq('{', repeat($.statement), '}'),

    expression_statement: $ => seq($.expression, ';'),

    // Very generic expression rule
    expression: $ => choice($.identifier, $.number_literal, $.string_literal, $.builtin_type),

    declaration: $ => choice(
                                seq($.keyword, $.identifier, optional(seq('(', seq($.expression, ','), optional($.expression), ')')), '{', repeat($.statement), '}'),
                                seq('apply', '{', repeat($.statement), '}'),
                            ),

    keyword: $ => choice('struct', 'header', 'control', 'action', 'typedef', 'table', 'parser', 'state'),

    builtin_type: $ => choice('bit', 'const', 'bool', 'void', 'int', 'in', 'out', 'inout'),

    identifier: $ => /[A-Za-z_]\w*/,
    number_literal: $ => /\d+/,
    string_literal: $ => /"[^"]*"/,
    long_comment: $ => /\/\*([^\*]*[\*]*[^\*/])*[^*]*[\*]+\//,
    short_comment: _ => token(/\/\/.*/),
    preprocessor_keyword: $ => /#(include|define|if|elif|else|endif)/,
  }
});

