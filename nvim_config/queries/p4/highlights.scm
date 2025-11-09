;; Control-flow keywords (purple)
["if" "else" "return" "transition"] @keyword.conditional

;; Type / declaration keywords (blue)
[(builtin_type) (keyword) "apply"] @keyword

(number_literal) @number
(string_literal) @string

(identifier) @variable

(long_comment) @comment
(short_comment) @comment

(preprocessor_keyword) @keyword.import
