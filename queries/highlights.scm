; comments

(block_comment) @comment
(line_comment) @comment

; keywords

(primitive_type) @type.builtin
"brie" @keyword
"btree" @keyword
"btree_delete" @keyword
"eqrel" @keyword
; "inline" @keyword
"magic" @keyword
"no_inline" @keyword
"no_magic" @keyword
"override" @keyword
"overridable" @keyword
; Deprecated:
"input" @keyword
"output" @keyword
"printsize" @keyword
".functor" @keyword
".comp" @keyword
".init" @keyword
".pragma" @keyword
".plan" @keyword
".type" @keyword
".decl" @keyword
;(relation_decl choice: (choice_domain (ident)) @keyword)

"+" @keyword
"-" @keyword
"*" @keyword
"/" @keyword
"%" @keyword
"^" @keyword
"land" @keyword
"lor" @keyword
"lxor" @keyword
"band" @keyword
"bor" @keyword
"bxor" @keyword
"bshl" @keyword
"bshr" @keyword
"bshru" @keyword
; Undocumented, but appear in Soufflé parser:
"&" @keyword
"|" @keyword
"&&" @keyword
"||" @keyword
"**" @keyword
"^^" @keyword
"<<" @keyword
">>" @keyword
">>>" @keyword

"=" @keyword
"!=" @keyword
"<=" @keyword
">=" @keyword
"<" @keyword
">" @keyword


;(intrinsic_functor) @keyword

(unary_op operator: "bnot" @keyword)
(unary_op operator: "lnot" @keyword)
(unary_op operator: "~" @keyword)
(unary_op operator: "!" @keyword)

"max" @keyword
"min" @keyword
"mean" @keyword
"sum" @keyword
"count" @keyword

; preprocessor

"#include" @keyword
"#define" @keyword
"#if" @keyword
"#ifdef" @keyword
"#ifndef" @keyword
"#else" @keyword
"#endif" @keyword

(string) @string
(preproc_include (string)) @string.special
(include_string) @string

(preprocessor) @keyword

(directive directive: [".input" ".limitsize" ".output" ".printsize"] @keyword)
(directive key: (ident) @tag)

(aggregator ":" @keyword)

(relation_decl (ident) @function)
(relation_decl
  attribute: (attribute var: (ident) @variable.parameter))
(relation_decl
  attribute: (attribute type: (qualified_name) @type))
(relation_decl
  qualifier:
  ["brie" "btree" "btree_delete" "eqrel" "inline" "magic" "no_inline" "no_magic" "override" "overridable" "input" "output" "printsize"] @keyword)
; (relation_decl attribute: (attribute var: (ident) @variable.parameter))
(relation_decl choice: (choice_domain (ident) @variable.parameter) @keyword)

;(atom relation: (qualified_name)) @constant
(primitive_type) @type
(type_synonym left: (ident) @type)
(subtype left: (ident) @type)
(type_union left: (ident) @type)
(type_record left: (ident) @type)
(adt left: (ident) @type)

(component_decl type: (component_type name: (ident) @function))
(component_decl type: (component_type param: (ident) @type))

; rules

(fact (atom relation: (qualified_name) @constructor))

(subsumptive_rule subsumes: (atom relation: (qualified_name) @underlined))
(subsumptive_rule ":-" @keyword)

; (subsumptive_rule
;   subsumes: (atom relation: (qualified_name) @Identifier))
(monotonic_rule (atom relation: (qualified_name) @constructor))
(monotonic_rule ":-" @keyword)

(disjunction (";") @keyword)
(conjunction (",") @keyword)

(match "match" @keyword)
(contains "contains" @keyword)
(comparison operator: ["=" "!=" "<=" ">=" "<" ">"] @keyword)
