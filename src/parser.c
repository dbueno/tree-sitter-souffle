#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 531
#define LARGE_STATE_COUNT 44
#define SYMBOL_COUNT 230
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 40
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 148

enum {
  anon_sym_POUNDline = 1,
  aux_sym_preproc_line_token1 = 2,
  anon_sym_POUNDinclude = 3,
  anon_sym_POUNDdefine = 4,
  aux_sym_preproc_def_token1 = 5,
  sym_preproc_arg = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_POUNDifdef = 10,
  anon_sym_POUNDifndef = 11,
  anon_sym_POUNDif = 12,
  sym_preproc_endif = 13,
  anon_sym_SLASH_STAR = 14,
  aux_sym_block_comment_token1 = 15,
  anon_sym_SLASH = 16,
  anon_sym_SLASH_SLASH = 17,
  aux_sym_line_comment_token1 = 18,
  anon_sym_LF = 19,
  anon_sym_DOTpragma = 20,
  anon_sym_DOTfunctor = 21,
  anon_sym_LPAREN2 = 22,
  anon_sym_COLON = 23,
  anon_sym_stateful = 24,
  anon_sym_DOTcomp = 25,
  anon_sym_LBRACE = 26,
  anon_sym_DOToverride = 27,
  anon_sym_RBRACE = 28,
  anon_sym_LT = 29,
  anon_sym_GT = 30,
  anon_sym_DOTinit = 31,
  anon_sym_EQ = 32,
  anon_sym_DOTinput = 33,
  anon_sym_DOTlimitsize = 34,
  anon_sym_DOToutput = 35,
  anon_sym_DOTprintsize = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  anon_sym_COLON_DASH = 39,
  anon_sym_DOT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_DOTplan = 42,
  anon_sym_SEMI = 43,
  anon_sym_BANG = 44,
  anon_sym_match = 45,
  anon_sym_contains = 46,
  anon_sym_BANG_EQ = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_DOLLAR = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  sym_ipv4 = 52,
  sym_string = 53,
  sym_include_string = 54,
  aux_sym_decimal_token1 = 55,
  sym_unsigned = 56,
  sym_hex = 57,
  sym_binary = 58,
  aux_sym_float_token1 = 59,
  sym_nil = 60,
  sym_anonymous = 61,
  anon_sym_as = 62,
  anon_sym_AT = 63,
  anon_sym_acos = 64,
  anon_sym_acosh = 65,
  anon_sym_asin = 66,
  anon_sym_asinh = 67,
  anon_sym_atan = 68,
  anon_sym_atanh = 69,
  anon_sym_cos = 70,
  anon_sym_cosh = 71,
  anon_sym_exp = 72,
  anon_sym_log = 73,
  anon_sym_sin = 74,
  anon_sym_sinh = 75,
  anon_sym_tan = 76,
  anon_sym_tanh = 77,
  anon_sym_autoinc = 78,
  anon_sym_cat = 79,
  anon_sym_max = 80,
  anon_sym_min = 81,
  anon_sym_ord = 82,
  anon_sym_strlen = 83,
  anon_sym_substr = 84,
  anon_sym_to_float = 85,
  anon_sym_to_number = 86,
  anon_sym_to_string = 87,
  anon_sym_to_unsigned = 88,
  anon_sym_mean = 89,
  anon_sym_sum = 90,
  anon_sym_count = 91,
  anon_sym_range = 92,
  anon_sym_bnot = 93,
  anon_sym_lnot = 94,
  anon_sym_DASH = 95,
  anon_sym_TILDE = 96,
  anon_sym_PLUS = 97,
  anon_sym_STAR = 98,
  anon_sym_PERCENT = 99,
  anon_sym_CARET = 100,
  anon_sym_land = 101,
  anon_sym_lor = 102,
  anon_sym_lxor = 103,
  anon_sym_band = 104,
  anon_sym_bor = 105,
  anon_sym_bxor = 106,
  anon_sym_bshl = 107,
  anon_sym_bshr = 108,
  anon_sym_bshru = 109,
  anon_sym_AMP = 110,
  anon_sym_PIPE = 111,
  anon_sym_AMP_AMP = 112,
  anon_sym_PIPE_PIPE = 113,
  anon_sym_STAR_STAR = 114,
  anon_sym_CARET_CARET = 115,
  anon_sym_LT_LT = 116,
  anon_sym_GT_GT = 117,
  anon_sym_GT_GT_GT = 118,
  anon_sym_DOTdecl = 119,
  anon_sym_brie = 120,
  anon_sym_btree = 121,
  anon_sym_btree_delete = 122,
  anon_sym_eqrel = 123,
  anon_sym_inline = 124,
  anon_sym_magic = 125,
  anon_sym_no_inline = 126,
  anon_sym_no_magic = 127,
  anon_sym_override = 128,
  anon_sym_overridable = 129,
  anon_sym_input = 130,
  anon_sym_output = 131,
  anon_sym_printsize = 132,
  anon_sym_choice_DASHdomain = 133,
  anon_sym_DOTnumber_type = 134,
  anon_sym_DOTsymbol_type = 135,
  anon_sym_DOTtype = 136,
  anon_sym_LT_COLON = 137,
  anon_sym_number = 138,
  anon_sym_symbol = 139,
  anon_sym_unsigned = 140,
  anon_sym_float = 141,
  sym_ident = 142,
  sym_program = 143,
  sym_preproc = 144,
  sym_preproc_line = 145,
  sym_preproc_include = 146,
  sym_preproc_def = 147,
  sym_preproc_ifdef = 148,
  sym_block_comment = 149,
  sym_line_comment = 150,
  sym_pragma = 151,
  sym_functor_decl = 152,
  sym_component_decl = 153,
  sym_component_type = 154,
  sym_component_init = 155,
  sym_directive = 156,
  sym__directive_qualifier = 157,
  sym__directive_value = 158,
  sym_bool = 159,
  sym__rule = 160,
  sym_monotonic_rule = 161,
  sym_subsumptive_rule = 162,
  sym_query_plan = 163,
  sym_disjunction = 164,
  sym_negation = 165,
  sym_conjunction = 166,
  sym__constraint = 167,
  sym_match = 168,
  sym_contains = 169,
  sym_comparison = 170,
  sym_fact = 171,
  sym_atom = 172,
  sym__argument = 173,
  sym_adt_constructor = 174,
  sym_record_constructor = 175,
  sym_constant = 176,
  sym_number = 177,
  sym_integer = 178,
  sym_decimal = 179,
  sym_float = 180,
  sym_variable = 181,
  sym_as = 182,
  sym_functor_call = 183,
  sym_user_defined_functor = 184,
  sym_intrinsic_functor = 185,
  sym_aggregator = 186,
  sym_range = 187,
  sym__unary_operator = 188,
  sym_unary_op = 189,
  sym_binary_op = 190,
  sym_relation_decl = 191,
  sym__relation_qualifier = 192,
  sym_choice_domain = 193,
  sym_legacy_type_decl = 194,
  sym_type_decl = 195,
  sym_legacy_bare_type_decl = 196,
  sym_subtype = 197,
  sym_type_synonym = 198,
  sym_type_union = 199,
  sym_type_record = 200,
  sym_adt = 201,
  sym__adt_branch = 202,
  sym__type_name = 203,
  sym_primitive_type = 204,
  sym_attribute = 205,
  sym_qualified_name = 206,
  aux_sym_program_repeat1 = 207,
  aux_sym_functor_decl_repeat1 = 208,
  aux_sym_component_decl_repeat1 = 209,
  aux_sym_component_decl_repeat2 = 210,
  aux_sym_component_type_repeat1 = 211,
  aux_sym_directive_repeat1 = 212,
  aux_sym_directive_repeat2 = 213,
  aux_sym_monotonic_rule_repeat1 = 214,
  aux_sym_query_plan_repeat1 = 215,
  aux_sym_query_plan_repeat2 = 216,
  aux_sym_disjunction_repeat1 = 217,
  aux_sym_conjunction_repeat1 = 218,
  aux_sym_conjunction_repeat2 = 219,
  aux_sym_match_repeat1 = 220,
  aux_sym_record_constructor_repeat1 = 221,
  aux_sym_relation_decl_repeat1 = 222,
  aux_sym_relation_decl_repeat2 = 223,
  aux_sym_relation_decl_repeat3 = 224,
  aux_sym_choice_domain_repeat1 = 225,
  aux_sym_type_union_repeat1 = 226,
  aux_sym_type_record_repeat1 = 227,
  aux_sym_adt_repeat1 = 228,
  aux_sym_qualified_name_repeat1 = 229,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_POUNDline] = "#line",
  [aux_sym_preproc_line_token1] = "preproc_line_token1",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_POUNDdefine] = "#define",
  [aux_sym_preproc_def_token1] = "preproc_def_token1",
  [sym_preproc_arg] = "preproc_arg",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_POUNDifdef] = "#ifdef",
  [anon_sym_POUNDifndef] = "#ifndef",
  [anon_sym_POUNDif] = "#if",
  [sym_preproc_endif] = "preproc_endif",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_SLASH] = "/",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [anon_sym_LF] = "\n",
  [anon_sym_DOTpragma] = ".pragma",
  [anon_sym_DOTfunctor] = ".functor",
  [anon_sym_LPAREN2] = "(",
  [anon_sym_COLON] = ":",
  [anon_sym_stateful] = "stateful",
  [anon_sym_DOTcomp] = ".comp",
  [anon_sym_LBRACE] = "{",
  [anon_sym_DOToverride] = ".override",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_DOTinit] = ".init",
  [anon_sym_EQ] = "=",
  [anon_sym_DOTinput] = ".input",
  [anon_sym_DOTlimitsize] = ".limitsize",
  [anon_sym_DOToutput] = ".output",
  [anon_sym_DOTprintsize] = ".printsize",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_COLON_DASH] = ":-",
  [anon_sym_DOT] = ".",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_DOTplan] = ".plan",
  [anon_sym_SEMI] = ";",
  [anon_sym_BANG] = "!",
  [anon_sym_match] = "match",
  [anon_sym_contains] = "contains",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_ipv4] = "ipv4",
  [sym_string] = "string",
  [sym_include_string] = "include_string",
  [aux_sym_decimal_token1] = "decimal_token1",
  [sym_unsigned] = "unsigned",
  [sym_hex] = "hex",
  [sym_binary] = "binary",
  [aux_sym_float_token1] = "float_token1",
  [sym_nil] = "nil",
  [sym_anonymous] = "anonymous",
  [anon_sym_as] = "as",
  [anon_sym_AT] = "@",
  [anon_sym_acos] = "acos",
  [anon_sym_acosh] = "acosh",
  [anon_sym_asin] = "asin",
  [anon_sym_asinh] = "asinh",
  [anon_sym_atan] = "atan",
  [anon_sym_atanh] = "atanh",
  [anon_sym_cos] = "cos",
  [anon_sym_cosh] = "cosh",
  [anon_sym_exp] = "exp",
  [anon_sym_log] = "log",
  [anon_sym_sin] = "sin",
  [anon_sym_sinh] = "sinh",
  [anon_sym_tan] = "tan",
  [anon_sym_tanh] = "tanh",
  [anon_sym_autoinc] = "autoinc",
  [anon_sym_cat] = "cat",
  [anon_sym_max] = "max",
  [anon_sym_min] = "min",
  [anon_sym_ord] = "ord",
  [anon_sym_strlen] = "strlen",
  [anon_sym_substr] = "substr",
  [anon_sym_to_float] = "to_float",
  [anon_sym_to_number] = "to_number",
  [anon_sym_to_string] = "to_string",
  [anon_sym_to_unsigned] = "to_unsigned",
  [anon_sym_mean] = "mean",
  [anon_sym_sum] = "sum",
  [anon_sym_count] = "count",
  [anon_sym_range] = "range",
  [anon_sym_bnot] = "bnot",
  [anon_sym_lnot] = "lnot",
  [anon_sym_DASH] = "-",
  [anon_sym_TILDE] = "~",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_PERCENT] = "%",
  [anon_sym_CARET] = "^",
  [anon_sym_land] = "land",
  [anon_sym_lor] = "lor",
  [anon_sym_lxor] = "lxor",
  [anon_sym_band] = "band",
  [anon_sym_bor] = "bor",
  [anon_sym_bxor] = "bxor",
  [anon_sym_bshl] = "bshl",
  [anon_sym_bshr] = "bshr",
  [anon_sym_bshru] = "bshru",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_CARET_CARET] = "^^",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_GT_GT_GT] = ">>>",
  [anon_sym_DOTdecl] = ".decl",
  [anon_sym_brie] = "brie",
  [anon_sym_btree] = "btree",
  [anon_sym_btree_delete] = "btree_delete",
  [anon_sym_eqrel] = "eqrel",
  [anon_sym_inline] = "inline",
  [anon_sym_magic] = "magic",
  [anon_sym_no_inline] = "no_inline",
  [anon_sym_no_magic] = "no_magic",
  [anon_sym_override] = "override",
  [anon_sym_overridable] = "overridable",
  [anon_sym_input] = "input",
  [anon_sym_output] = "output",
  [anon_sym_printsize] = "printsize",
  [anon_sym_choice_DASHdomain] = "choice-domain",
  [anon_sym_DOTnumber_type] = ".number_type",
  [anon_sym_DOTsymbol_type] = ".symbol_type",
  [anon_sym_DOTtype] = ".type",
  [anon_sym_LT_COLON] = "<:",
  [anon_sym_number] = "number",
  [anon_sym_symbol] = "symbol",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_float] = "float",
  [sym_ident] = "ident",
  [sym_program] = "program",
  [sym_preproc] = "preproc",
  [sym_preproc_line] = "preproc_line",
  [sym_preproc_include] = "preproc_include",
  [sym_preproc_def] = "preproc_def",
  [sym_preproc_ifdef] = "preproc_ifdef",
  [sym_block_comment] = "block_comment",
  [sym_line_comment] = "line_comment",
  [sym_pragma] = "pragma",
  [sym_functor_decl] = "functor_decl",
  [sym_component_decl] = "component_decl",
  [sym_component_type] = "component_type",
  [sym_component_init] = "component_init",
  [sym_directive] = "directive",
  [sym__directive_qualifier] = "_directive_qualifier",
  [sym__directive_value] = "_directive_value",
  [sym_bool] = "bool",
  [sym__rule] = "_rule",
  [sym_monotonic_rule] = "monotonic_rule",
  [sym_subsumptive_rule] = "subsumptive_rule",
  [sym_query_plan] = "query_plan",
  [sym_disjunction] = "disjunction",
  [sym_negation] = "negation",
  [sym_conjunction] = "conjunction",
  [sym__constraint] = "_constraint",
  [sym_match] = "match",
  [sym_contains] = "contains",
  [sym_comparison] = "comparison",
  [sym_fact] = "fact",
  [sym_atom] = "atom",
  [sym__argument] = "_argument",
  [sym_adt_constructor] = "adt_constructor",
  [sym_record_constructor] = "record_constructor",
  [sym_constant] = "constant",
  [sym_number] = "number",
  [sym_integer] = "integer",
  [sym_decimal] = "decimal",
  [sym_float] = "float",
  [sym_variable] = "variable",
  [sym_as] = "as",
  [sym_functor_call] = "functor_call",
  [sym_user_defined_functor] = "user_defined_functor",
  [sym_intrinsic_functor] = "intrinsic_functor",
  [sym_aggregator] = "aggregator",
  [sym_range] = "range",
  [sym__unary_operator] = "_unary_operator",
  [sym_unary_op] = "unary_op",
  [sym_binary_op] = "binary_op",
  [sym_relation_decl] = "relation_decl",
  [sym__relation_qualifier] = "_relation_qualifier",
  [sym_choice_domain] = "choice_domain",
  [sym_legacy_type_decl] = "legacy_type_decl",
  [sym_type_decl] = "type_decl",
  [sym_legacy_bare_type_decl] = "legacy_bare_type_decl",
  [sym_subtype] = "subtype",
  [sym_type_synonym] = "type_synonym",
  [sym_type_union] = "type_union",
  [sym_type_record] = "type_record",
  [sym_adt] = "adt",
  [sym__adt_branch] = "_adt_branch",
  [sym__type_name] = "_type_name",
  [sym_primitive_type] = "primitive_type",
  [sym_attribute] = "attribute",
  [sym_qualified_name] = "qualified_name",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_functor_decl_repeat1] = "functor_decl_repeat1",
  [aux_sym_component_decl_repeat1] = "component_decl_repeat1",
  [aux_sym_component_decl_repeat2] = "component_decl_repeat2",
  [aux_sym_component_type_repeat1] = "component_type_repeat1",
  [aux_sym_directive_repeat1] = "directive_repeat1",
  [aux_sym_directive_repeat2] = "directive_repeat2",
  [aux_sym_monotonic_rule_repeat1] = "monotonic_rule_repeat1",
  [aux_sym_query_plan_repeat1] = "query_plan_repeat1",
  [aux_sym_query_plan_repeat2] = "query_plan_repeat2",
  [aux_sym_disjunction_repeat1] = "disjunction_repeat1",
  [aux_sym_conjunction_repeat1] = "conjunction_repeat1",
  [aux_sym_conjunction_repeat2] = "conjunction_repeat2",
  [aux_sym_match_repeat1] = "match_repeat1",
  [aux_sym_record_constructor_repeat1] = "record_constructor_repeat1",
  [aux_sym_relation_decl_repeat1] = "relation_decl_repeat1",
  [aux_sym_relation_decl_repeat2] = "relation_decl_repeat2",
  [aux_sym_relation_decl_repeat3] = "relation_decl_repeat3",
  [aux_sym_choice_domain_repeat1] = "choice_domain_repeat1",
  [aux_sym_type_union_repeat1] = "type_union_repeat1",
  [aux_sym_type_record_repeat1] = "type_record_repeat1",
  [aux_sym_adt_repeat1] = "adt_repeat1",
  [aux_sym_qualified_name_repeat1] = "qualified_name_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_POUNDline] = anon_sym_POUNDline,
  [aux_sym_preproc_line_token1] = aux_sym_preproc_line_token1,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_POUNDdefine] = anon_sym_POUNDdefine,
  [aux_sym_preproc_def_token1] = aux_sym_preproc_def_token1,
  [sym_preproc_arg] = sym_preproc_arg,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_POUNDifdef] = anon_sym_POUNDifdef,
  [anon_sym_POUNDifndef] = anon_sym_POUNDifndef,
  [anon_sym_POUNDif] = anon_sym_POUNDif,
  [sym_preproc_endif] = sym_preproc_endif,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_DOTpragma] = anon_sym_DOTpragma,
  [anon_sym_DOTfunctor] = anon_sym_DOTfunctor,
  [anon_sym_LPAREN2] = anon_sym_LPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_stateful] = anon_sym_stateful,
  [anon_sym_DOTcomp] = anon_sym_DOTcomp,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_DOToverride] = anon_sym_DOToverride,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_DOTinit] = anon_sym_DOTinit,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DOTinput] = anon_sym_DOTinput,
  [anon_sym_DOTlimitsize] = anon_sym_DOTlimitsize,
  [anon_sym_DOToutput] = anon_sym_DOToutput,
  [anon_sym_DOTprintsize] = anon_sym_DOTprintsize,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_COLON_DASH] = anon_sym_COLON_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_DOTplan] = anon_sym_DOTplan,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_match] = anon_sym_match,
  [anon_sym_contains] = anon_sym_contains,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_ipv4] = sym_ipv4,
  [sym_string] = sym_string,
  [sym_include_string] = sym_include_string,
  [aux_sym_decimal_token1] = aux_sym_decimal_token1,
  [sym_unsigned] = sym_unsigned,
  [sym_hex] = sym_hex,
  [sym_binary] = sym_binary,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [sym_nil] = sym_nil,
  [sym_anonymous] = sym_anonymous,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_acos] = anon_sym_acos,
  [anon_sym_acosh] = anon_sym_acosh,
  [anon_sym_asin] = anon_sym_asin,
  [anon_sym_asinh] = anon_sym_asinh,
  [anon_sym_atan] = anon_sym_atan,
  [anon_sym_atanh] = anon_sym_atanh,
  [anon_sym_cos] = anon_sym_cos,
  [anon_sym_cosh] = anon_sym_cosh,
  [anon_sym_exp] = anon_sym_exp,
  [anon_sym_log] = anon_sym_log,
  [anon_sym_sin] = anon_sym_sin,
  [anon_sym_sinh] = anon_sym_sinh,
  [anon_sym_tan] = anon_sym_tan,
  [anon_sym_tanh] = anon_sym_tanh,
  [anon_sym_autoinc] = anon_sym_autoinc,
  [anon_sym_cat] = anon_sym_cat,
  [anon_sym_max] = anon_sym_max,
  [anon_sym_min] = anon_sym_min,
  [anon_sym_ord] = anon_sym_ord,
  [anon_sym_strlen] = anon_sym_strlen,
  [anon_sym_substr] = anon_sym_substr,
  [anon_sym_to_float] = anon_sym_to_float,
  [anon_sym_to_number] = anon_sym_to_number,
  [anon_sym_to_string] = anon_sym_to_string,
  [anon_sym_to_unsigned] = anon_sym_to_unsigned,
  [anon_sym_mean] = anon_sym_mean,
  [anon_sym_sum] = anon_sym_sum,
  [anon_sym_count] = anon_sym_count,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_bnot] = anon_sym_bnot,
  [anon_sym_lnot] = anon_sym_lnot,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_land] = anon_sym_land,
  [anon_sym_lor] = anon_sym_lor,
  [anon_sym_lxor] = anon_sym_lxor,
  [anon_sym_band] = anon_sym_band,
  [anon_sym_bor] = anon_sym_bor,
  [anon_sym_bxor] = anon_sym_bxor,
  [anon_sym_bshl] = anon_sym_bshl,
  [anon_sym_bshr] = anon_sym_bshr,
  [anon_sym_bshru] = anon_sym_bshru,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_CARET_CARET] = anon_sym_CARET_CARET,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_GT_GT_GT] = anon_sym_GT_GT_GT,
  [anon_sym_DOTdecl] = anon_sym_DOTdecl,
  [anon_sym_brie] = anon_sym_brie,
  [anon_sym_btree] = anon_sym_btree,
  [anon_sym_btree_delete] = anon_sym_btree_delete,
  [anon_sym_eqrel] = anon_sym_eqrel,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_magic] = anon_sym_magic,
  [anon_sym_no_inline] = anon_sym_no_inline,
  [anon_sym_no_magic] = anon_sym_no_magic,
  [anon_sym_override] = anon_sym_override,
  [anon_sym_overridable] = anon_sym_overridable,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_output] = anon_sym_output,
  [anon_sym_printsize] = anon_sym_printsize,
  [anon_sym_choice_DASHdomain] = anon_sym_choice_DASHdomain,
  [anon_sym_DOTnumber_type] = anon_sym_DOTnumber_type,
  [anon_sym_DOTsymbol_type] = anon_sym_DOTsymbol_type,
  [anon_sym_DOTtype] = anon_sym_DOTtype,
  [anon_sym_LT_COLON] = anon_sym_LT_COLON,
  [anon_sym_number] = anon_sym_number,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_float] = anon_sym_float,
  [sym_ident] = sym_ident,
  [sym_program] = sym_program,
  [sym_preproc] = sym_preproc,
  [sym_preproc_line] = sym_preproc_line,
  [sym_preproc_include] = sym_preproc_include,
  [sym_preproc_def] = sym_preproc_def,
  [sym_preproc_ifdef] = sym_preproc_ifdef,
  [sym_block_comment] = sym_block_comment,
  [sym_line_comment] = sym_line_comment,
  [sym_pragma] = sym_pragma,
  [sym_functor_decl] = sym_functor_decl,
  [sym_component_decl] = sym_component_decl,
  [sym_component_type] = sym_component_type,
  [sym_component_init] = sym_component_init,
  [sym_directive] = sym_directive,
  [sym__directive_qualifier] = sym__directive_qualifier,
  [sym__directive_value] = sym__directive_value,
  [sym_bool] = sym_bool,
  [sym__rule] = sym__rule,
  [sym_monotonic_rule] = sym_monotonic_rule,
  [sym_subsumptive_rule] = sym_subsumptive_rule,
  [sym_query_plan] = sym_query_plan,
  [sym_disjunction] = sym_disjunction,
  [sym_negation] = sym_negation,
  [sym_conjunction] = sym_conjunction,
  [sym__constraint] = sym__constraint,
  [sym_match] = sym_match,
  [sym_contains] = sym_contains,
  [sym_comparison] = sym_comparison,
  [sym_fact] = sym_fact,
  [sym_atom] = sym_atom,
  [sym__argument] = sym__argument,
  [sym_adt_constructor] = sym_adt_constructor,
  [sym_record_constructor] = sym_record_constructor,
  [sym_constant] = sym_constant,
  [sym_number] = sym_number,
  [sym_integer] = sym_integer,
  [sym_decimal] = sym_decimal,
  [sym_float] = sym_float,
  [sym_variable] = sym_variable,
  [sym_as] = sym_as,
  [sym_functor_call] = sym_functor_call,
  [sym_user_defined_functor] = sym_user_defined_functor,
  [sym_intrinsic_functor] = sym_intrinsic_functor,
  [sym_aggregator] = sym_aggregator,
  [sym_range] = sym_range,
  [sym__unary_operator] = sym__unary_operator,
  [sym_unary_op] = sym_unary_op,
  [sym_binary_op] = sym_binary_op,
  [sym_relation_decl] = sym_relation_decl,
  [sym__relation_qualifier] = sym__relation_qualifier,
  [sym_choice_domain] = sym_choice_domain,
  [sym_legacy_type_decl] = sym_legacy_type_decl,
  [sym_type_decl] = sym_type_decl,
  [sym_legacy_bare_type_decl] = sym_legacy_bare_type_decl,
  [sym_subtype] = sym_subtype,
  [sym_type_synonym] = sym_type_synonym,
  [sym_type_union] = sym_type_union,
  [sym_type_record] = sym_type_record,
  [sym_adt] = sym_adt,
  [sym__adt_branch] = sym__adt_branch,
  [sym__type_name] = sym__type_name,
  [sym_primitive_type] = sym_primitive_type,
  [sym_attribute] = sym_attribute,
  [sym_qualified_name] = sym_qualified_name,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_functor_decl_repeat1] = aux_sym_functor_decl_repeat1,
  [aux_sym_component_decl_repeat1] = aux_sym_component_decl_repeat1,
  [aux_sym_component_decl_repeat2] = aux_sym_component_decl_repeat2,
  [aux_sym_component_type_repeat1] = aux_sym_component_type_repeat1,
  [aux_sym_directive_repeat1] = aux_sym_directive_repeat1,
  [aux_sym_directive_repeat2] = aux_sym_directive_repeat2,
  [aux_sym_monotonic_rule_repeat1] = aux_sym_monotonic_rule_repeat1,
  [aux_sym_query_plan_repeat1] = aux_sym_query_plan_repeat1,
  [aux_sym_query_plan_repeat2] = aux_sym_query_plan_repeat2,
  [aux_sym_disjunction_repeat1] = aux_sym_disjunction_repeat1,
  [aux_sym_conjunction_repeat1] = aux_sym_conjunction_repeat1,
  [aux_sym_conjunction_repeat2] = aux_sym_conjunction_repeat2,
  [aux_sym_match_repeat1] = aux_sym_match_repeat1,
  [aux_sym_record_constructor_repeat1] = aux_sym_record_constructor_repeat1,
  [aux_sym_relation_decl_repeat1] = aux_sym_relation_decl_repeat1,
  [aux_sym_relation_decl_repeat2] = aux_sym_relation_decl_repeat2,
  [aux_sym_relation_decl_repeat3] = aux_sym_relation_decl_repeat3,
  [aux_sym_choice_domain_repeat1] = aux_sym_choice_domain_repeat1,
  [aux_sym_type_union_repeat1] = aux_sym_type_union_repeat1,
  [aux_sym_type_record_repeat1] = aux_sym_type_record_repeat1,
  [aux_sym_adt_repeat1] = aux_sym_adt_repeat1,
  [aux_sym_qualified_name_repeat1] = aux_sym_qualified_name_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUNDline] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDdefine] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_preproc_def_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_preproc_arg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDifdef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDifndef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDif] = {
    .visible = true,
    .named = false,
  },
  [sym_preproc_endif] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTpragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTfunctor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_stateful] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTcomp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOToverride] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTlimitsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOToutput] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTprintsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTplan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_match] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_contains] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_ipv4] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_include_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_decimal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unsigned] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_acosh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asinh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_atanh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cos] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cosh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_exp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_log] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sinh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tan] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_tanh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_autoinc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_max] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_min] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ord] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strlen] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_substr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_count] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lnot] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_land] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_band] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bxor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bshru] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTdecl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_brie] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btree] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_btree_delete] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eqrel] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_no_magic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_override] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_overridable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_printsize] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_choice_DASHdomain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTnumber_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTsymbol_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTtype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_number] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_line] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_include] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_def] = {
    .visible = true,
    .named = true,
  },
  [sym_preproc_ifdef] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_component_type] = {
    .visible = true,
    .named = true,
  },
  [sym_component_init] = {
    .visible = true,
    .named = true,
  },
  [sym_directive] = {
    .visible = true,
    .named = true,
  },
  [sym__directive_qualifier] = {
    .visible = false,
    .named = true,
  },
  [sym__directive_value] = {
    .visible = false,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym__rule] = {
    .visible = false,
    .named = true,
  },
  [sym_monotonic_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_subsumptive_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_query_plan] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym__constraint] = {
    .visible = false,
    .named = true,
  },
  [sym_match] = {
    .visible = true,
    .named = true,
  },
  [sym_contains] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym_fact] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
    .visible = true,
    .named = true,
  },
  [sym__argument] = {
    .visible = false,
    .named = true,
  },
  [sym_adt_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_record_constructor] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_as] = {
    .visible = true,
    .named = true,
  },
  [sym_functor_call] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined_functor] = {
    .visible = true,
    .named = true,
  },
  [sym_intrinsic_functor] = {
    .visible = true,
    .named = true,
  },
  [sym_aggregator] = {
    .visible = true,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym__unary_operator] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_op] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_decl] = {
    .visible = true,
    .named = true,
  },
  [sym__relation_qualifier] = {
    .visible = false,
    .named = true,
  },
  [sym_choice_domain] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_legacy_bare_type_decl] = {
    .visible = true,
    .named = true,
  },
  [sym_subtype] = {
    .visible = true,
    .named = true,
  },
  [sym_type_synonym] = {
    .visible = true,
    .named = true,
  },
  [sym_type_union] = {
    .visible = true,
    .named = true,
  },
  [sym_type_record] = {
    .visible = true,
    .named = true,
  },
  [sym_adt] = {
    .visible = true,
    .named = true,
  },
  [sym__adt_branch] = {
    .visible = false,
    .named = true,
  },
  [sym__type_name] = {
    .visible = false,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functor_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_component_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_directive_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_monotonic_rule_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_plan_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_query_plan_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_disjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_conjunction_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_match_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_record_constructor_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_relation_decl_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_choice_domain_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_union_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_record_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_adt_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_qualified_name_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_aggregator = 1,
  field_argument = 2,
  field_atom = 3,
  field_attribute = 4,
  field_body = 5,
  field_branch = 6,
  field_choice = 7,
  field_component = 8,
  field_constructor = 9,
  field_directive = 10,
  field_expr = 11,
  field_field = 12,
  field_file = 13,
  field_functor = 14,
  field_head = 15,
  field_high = 16,
  field_key = 17,
  field_left = 18,
  field_line = 19,
  field_low = 20,
  field_name = 21,
  field_number = 22,
  field_operand = 23,
  field_operator = 24,
  field_order = 25,
  field_param = 26,
  field_plan = 27,
  field_qualifier = 28,
  field_relation = 29,
  field_return = 30,
  field_right = 31,
  field_step = 32,
  field_subsumed = 33,
  field_subsumes = 34,
  field_subtype = 35,
  field_super = 36,
  field_supertype = 37,
  field_type = 38,
  field_value = 39,
  field_var = 40,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_aggregator] = "aggregator",
  [field_argument] = "argument",
  [field_atom] = "atom",
  [field_attribute] = "attribute",
  [field_body] = "body",
  [field_branch] = "branch",
  [field_choice] = "choice",
  [field_component] = "component",
  [field_constructor] = "constructor",
  [field_directive] = "directive",
  [field_expr] = "expr",
  [field_field] = "field",
  [field_file] = "file",
  [field_functor] = "functor",
  [field_head] = "head",
  [field_high] = "high",
  [field_key] = "key",
  [field_left] = "left",
  [field_line] = "line",
  [field_low] = "low",
  [field_name] = "name",
  [field_number] = "number",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_order] = "order",
  [field_param] = "param",
  [field_plan] = "plan",
  [field_qualifier] = "qualifier",
  [field_relation] = "relation",
  [field_return] = "return",
  [field_right] = "right",
  [field_step] = "step",
  [field_subsumed] = "subsumed",
  [field_subsumes] = "subsumes",
  [field_subtype] = "subtype",
  [field_super] = "super",
  [field_supertype] = "supertype",
  [field_type] = "type",
  [field_value] = "value",
  [field_var] = "var",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 3},
  [11] = {.index = 16, .length = 2},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 2},
  [14] = {.index = 21, .length = 1},
  [15] = {.index = 22, .length = 2},
  [16] = {.index = 24, .length = 1},
  [17] = {.index = 25, .length = 1},
  [18] = {.index = 26, .length = 1},
  [19] = {.index = 27, .length = 1},
  [20] = {.index = 28, .length = 1},
  [21] = {.index = 29, .length = 2},
  [22] = {.index = 31, .length = 1},
  [23] = {.index = 32, .length = 4},
  [24] = {.index = 36, .length = 2},
  [25] = {.index = 38, .length = 1},
  [26] = {.index = 39, .length = 2},
  [27] = {.index = 41, .length = 1},
  [28] = {.index = 42, .length = 2},
  [29] = {.index = 44, .length = 2},
  [30] = {.index = 46, .length = 1},
  [31] = {.index = 47, .length = 2},
  [32] = {.index = 49, .length = 2},
  [33] = {.index = 51, .length = 2},
  [34] = {.index = 53, .length = 4},
  [35] = {.index = 57, .length = 2},
  [36] = {.index = 59, .length = 2},
  [37] = {.index = 61, .length = 2},
  [38] = {.index = 63, .length = 2},
  [39] = {.index = 65, .length = 2},
  [40] = {.index = 67, .length = 2},
  [41] = {.index = 69, .length = 2},
  [42] = {.index = 71, .length = 2},
  [43] = {.index = 73, .length = 2},
  [44] = {.index = 75, .length = 2},
  [45] = {.index = 77, .length = 2},
  [46] = {.index = 79, .length = 2},
  [47] = {.index = 81, .length = 2},
  [48] = {.index = 83, .length = 2},
  [49] = {.index = 85, .length = 1},
  [50] = {.index = 86, .length = 7},
  [51] = {.index = 93, .length = 3},
  [52] = {.index = 96, .length = 3},
  [53] = {.index = 99, .length = 4},
  [54] = {.index = 103, .length = 4},
  [55] = {.index = 107, .length = 1},
  [56] = {.index = 108, .length = 3},
  [57] = {.index = 111, .length = 3},
  [58] = {.index = 114, .length = 1},
  [59] = {.index = 115, .length = 3},
  [60] = {.index = 118, .length = 3},
  [61] = {.index = 121, .length = 2},
  [62] = {.index = 123, .length = 1},
  [63] = {.index = 124, .length = 3},
  [64] = {.index = 127, .length = 2},
  [65] = {.index = 129, .length = 1},
  [66] = {.index = 130, .length = 2},
  [67] = {.index = 132, .length = 2},
  [68] = {.index = 134, .length = 3},
  [69] = {.index = 137, .length = 3},
  [70] = {.index = 140, .length = 3},
  [71] = {.index = 143, .length = 3},
  [72] = {.index = 146, .length = 3},
  [73] = {.index = 149, .length = 3},
  [74] = {.index = 152, .length = 3},
  [75] = {.index = 155, .length = 3},
  [76] = {.index = 158, .length = 3},
  [77] = {.index = 161, .length = 3},
  [78] = {.index = 164, .length = 3},
  [79] = {.index = 167, .length = 3},
  [80] = {.index = 170, .length = 3},
  [81] = {.index = 173, .length = 3},
  [82] = {.index = 176, .length = 1},
  [83] = {.index = 177, .length = 2},
  [84] = {.index = 179, .length = 2},
  [85] = {.index = 181, .length = 2},
  [86] = {.index = 183, .length = 1},
  [87] = {.index = 184, .length = 2},
  [88] = {.index = 186, .length = 4},
  [89] = {.index = 190, .length = 5},
  [90] = {.index = 195, .length = 4},
  [91] = {.index = 199, .length = 5},
  [92] = {.index = 204, .length = 1},
  [93] = {.index = 205, .length = 1},
  [94] = {.index = 206, .length = 3},
  [95] = {.index = 209, .length = 2},
  [96] = {.index = 211, .length = 2},
  [97] = {.index = 213, .length = 3},
  [98] = {.index = 216, .length = 4},
  [99] = {.index = 220, .length = 3},
  [100] = {.index = 223, .length = 3},
  [101] = {.index = 226, .length = 4},
  [102] = {.index = 230, .length = 3},
  [103] = {.index = 233, .length = 3},
  [104] = {.index = 236, .length = 4},
  [105] = {.index = 240, .length = 4},
  [106] = {.index = 244, .length = 4},
  [107] = {.index = 248, .length = 4},
  [108] = {.index = 252, .length = 4},
  [109] = {.index = 256, .length = 4},
  [110] = {.index = 260, .length = 4},
  [111] = {.index = 264, .length = 4},
  [112] = {.index = 268, .length = 4},
  [113] = {.index = 272, .length = 4},
  [114] = {.index = 276, .length = 4},
  [115] = {.index = 280, .length = 3},
  [116] = {.index = 283, .length = 2},
  [117] = {.index = 285, .length = 2},
  [118] = {.index = 287, .length = 2},
  [119] = {.index = 289, .length = 4},
  [120] = {.index = 293, .length = 6},
  [121] = {.index = 299, .length = 2},
  [122] = {.index = 301, .length = 2},
  [123] = {.index = 303, .length = 2},
  [124] = {.index = 305, .length = 3},
  [125] = {.index = 308, .length = 3},
  [126] = {.index = 311, .length = 1},
  [127] = {.index = 312, .length = 4},
  [128] = {.index = 316, .length = 5},
  [129] = {.index = 321, .length = 5},
  [130] = {.index = 326, .length = 4},
  [131] = {.index = 330, .length = 5},
  [132] = {.index = 335, .length = 5},
  [133] = {.index = 340, .length = 5},
  [134] = {.index = 345, .length = 5},
  [135] = {.index = 350, .length = 5},
  [136] = {.index = 355, .length = 3},
  [137] = {.index = 358, .length = 6},
  [138] = {.index = 364, .length = 5},
  [139] = {.index = 369, .length = 3},
  [140] = {.index = 372, .length = 2},
  [141] = {.index = 374, .length = 5},
  [142] = {.index = 379, .length = 2},
  [143] = {.index = 381, .length = 2},
  [144] = {.index = 383, .length = 1},
  [145] = {.index = 384, .length = 6},
  [146] = {.index = 390, .length = 7},
  [147] = {.index = 397, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_file, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_key, 1},
  [3] =
    {field_name, 0},
  [4] =
    {field_subtype, 1},
    {field_supertype, 0},
  [6] =
    {field_directive, 0},
    {field_relation, 1},
  [8] =
    {field_atom, 0},
  [9] =
    {field_file, 2},
    {field_line, 1},
  [11] =
    {field_key, 1},
    {field_value, 2},
  [13] =
    {field_directive, 0},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
  [16] =
    {field_atom, 0},
    {field_plan, 2},
  [18] =
    {field_relation, 0},
  [19] =
    {field_name, 1},
    {field_value, 2},
  [21] =
    {field_type, 1},
  [22] =
    {field_component, 3},
    {field_name, 1},
  [24] =
    {field_attribute, 1},
  [25] =
    {field_choice, 3},
  [26] =
    {field_qualifier, 3},
  [27] =
    {field_attribute, 2},
  [28] =
    {field_attribute, 2, .inherited = true},
  [29] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
  [31] =
    {field_head, 1},
  [32] =
    {field_branch, 2},
    {field_constructor, 2, .inherited = true},
    {field_field, 2, .inherited = true},
    {field_left, 0},
  [36] =
    {field_left, 0},
    {field_right, 2},
  [38] =
    {field_relation, 1},
  [39] =
    {field_relation, 0, .inherited = true},
    {field_relation, 1, .inherited = true},
  [41] =
    {field_constructor, 1},
  [42] =
    {field_body, 2},
    {field_head, 0},
  [44] =
    {field_operand, 1},
    {field_operator, 0},
  [46] =
    {field_argument, 1},
  [47] =
    {field_argument, 2},
    {field_relation, 0},
  [49] =
    {field_argument, 2, .inherited = true},
    {field_relation, 0},
  [51] =
    {field_argument, 0, .inherited = true},
    {field_argument, 1, .inherited = true},
  [53] =
    {field_attribute, 0, .inherited = true},
    {field_attribute, 1, .inherited = true},
    {field_type, 0, .inherited = true},
    {field_type, 1, .inherited = true},
  [57] =
    {field_name, 0},
    {field_param, 2},
  [59] =
    {field_body, 3},
    {field_type, 1},
  [61] =
    {field_choice, 4},
    {field_qualifier, 3},
  [63] =
    {field_type, 2},
    {field_var, 0},
  [65] =
    {field_attribute, 2},
    {field_choice, 4},
  [67] =
    {field_attribute, 2},
    {field_qualifier, 4},
  [69] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
  [71] =
    {field_attribute, 2, .inherited = true},
    {field_choice, 4},
  [73] =
    {field_attribute, 2, .inherited = true},
    {field_qualifier, 4},
  [75] =
    {field_choice, 4},
    {field_head, 1},
  [77] =
    {field_head, 1},
    {field_qualifier, 4},
  [79] =
    {field_attribute, 3},
    {field_head, 1},
  [81] =
    {field_attribute, 3, .inherited = true},
    {field_head, 1},
  [83] =
    {field_head, 1},
    {field_head, 2},
  [85] =
    {field_left, 0},
  [86] =
    {field_branch, 2},
    {field_branch, 3},
    {field_constructor, 2, .inherited = true},
    {field_constructor, 3, .inherited = true},
    {field_field, 2, .inherited = true},
    {field_field, 3, .inherited = true},
    {field_left, 0},
  [93] =
    {field_branch, 2},
    {field_branch, 3},
    {field_left, 0},
  [96] =
    {field_directive, 0},
    {field_key, 3},
    {field_relation, 1},
  [99] =
    {field_directive, 0},
    {field_key, 3, .inherited = true},
    {field_relation, 1},
    {field_value, 3, .inherited = true},
  [103] =
    {field_key, 0, .inherited = true},
    {field_key, 1, .inherited = true},
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [107] =
    {field_body, 2},
  [108] =
    {field_body, 2},
    {field_head, 0},
    {field_plan, 4},
  [111] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [114] =
    {field_functor, 0},
  [115] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
  [118] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_relation, 0},
  [121] =
    {field_name, 1},
    {field_return, 5},
  [123] =
    {field_param, 1},
  [124] =
    {field_name, 0},
    {field_param, 2},
    {field_param, 3, .inherited = true},
  [127] =
    {field_param, 0, .inherited = true},
    {field_param, 1, .inherited = true},
  [129] =
    {field_super, 1},
  [130] =
    {field_super, 3},
    {field_type, 1},
  [132] =
    {field_super, 0, .inherited = true},
    {field_super, 1, .inherited = true},
  [134] =
    {field_attribute, 2},
    {field_choice, 5},
    {field_qualifier, 4},
  [137] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
    {field_choice, 5},
  [140] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
    {field_qualifier, 5},
  [143] =
    {field_attribute, 2, .inherited = true},
    {field_choice, 5},
    {field_qualifier, 4},
  [146] =
    {field_choice, 5},
    {field_head, 1},
    {field_qualifier, 4},
  [149] =
    {field_attribute, 3},
    {field_choice, 5},
    {field_head, 1},
  [152] =
    {field_attribute, 3},
    {field_head, 1},
    {field_qualifier, 5},
  [155] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
  [158] =
    {field_attribute, 3, .inherited = true},
    {field_choice, 5},
    {field_head, 1},
  [161] =
    {field_attribute, 3, .inherited = true},
    {field_head, 1},
    {field_qualifier, 5},
  [164] =
    {field_choice, 5},
    {field_head, 1},
    {field_head, 2},
  [167] =
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 5},
  [170] =
    {field_attribute, 4},
    {field_head, 1},
    {field_head, 2},
  [173] =
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
    {field_head, 2},
  [176] =
    {field_field, 1},
  [177] =
    {field_field, 3},
    {field_left, 0},
  [179] =
    {field_field, 3, .inherited = true},
    {field_left, 0},
  [181] =
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [183] =
    {field_constructor, 0},
  [184] =
    {field_constructor, 1, .inherited = true},
    {field_field, 1, .inherited = true},
  [186] =
    {field_constructor, 0, .inherited = true},
    {field_constructor, 1, .inherited = true},
    {field_field, 0, .inherited = true},
    {field_field, 1, .inherited = true},
  [190] =
    {field_directive, 0},
    {field_key, 3},
    {field_key, 4, .inherited = true},
    {field_relation, 1},
    {field_value, 4, .inherited = true},
  [195] =
    {field_directive, 0},
    {field_key, 4},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
  [199] =
    {field_directive, 0},
    {field_key, 4, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 4, .inherited = true},
  [204] =
    {field_argument, 2},
  [205] =
    {field_argument, 2, .inherited = true},
  [206] =
    {field_aggregator, 0},
    {field_body, 3},
    {field_head, 1},
  [209] =
    {field_argument, 2},
    {field_functor, 0},
  [211] =
    {field_argument, 2, .inherited = true},
    {field_functor, 0},
  [213] =
    {field_body, 4},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [216] =
    {field_body, 3},
    {field_head, 0},
    {field_head, 1},
    {field_plan, 5},
  [220] =
    {field_name, 1},
    {field_return, 6},
    {field_type, 3},
  [223] =
    {field_attribute, 3},
    {field_name, 1},
    {field_return, 6},
  [226] =
    {field_attribute, 3, .inherited = true},
    {field_name, 1},
    {field_return, 6},
    {field_type, 3, .inherited = true},
  [230] =
    {field_body, 5},
    {field_super, 3},
    {field_type, 1},
  [233] =
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [236] =
    {field_attribute, 2},
    {field_attribute, 3, .inherited = true},
    {field_choice, 6},
    {field_qualifier, 5},
  [240] =
    {field_attribute, 3},
    {field_choice, 6},
    {field_head, 1},
    {field_qualifier, 5},
  [244] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_choice, 6},
    {field_head, 1},
  [248] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
    {field_qualifier, 6},
  [252] =
    {field_attribute, 3, .inherited = true},
    {field_choice, 6},
    {field_head, 1},
    {field_qualifier, 5},
  [256] =
    {field_choice, 6},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 5},
  [260] =
    {field_attribute, 4},
    {field_choice, 6},
    {field_head, 1},
    {field_head, 2},
  [264] =
    {field_attribute, 4},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [268] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_head, 1},
    {field_head, 2},
  [272] =
    {field_attribute, 4, .inherited = true},
    {field_choice, 6},
    {field_head, 1},
    {field_head, 2},
  [276] =
    {field_attribute, 4, .inherited = true},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [280] =
    {field_field, 3},
    {field_field, 4, .inherited = true},
    {field_left, 0},
  [283] =
    {field_constructor, 0},
    {field_field, 2},
  [285] =
    {field_constructor, 0},
    {field_field, 2, .inherited = true},
  [287] =
    {field_key, 1},
    {field_value, 3},
  [289] =
    {field_directive, 0},
    {field_key, 3},
    {field_relation, 1},
    {field_value, 5},
  [293] =
    {field_directive, 0},
    {field_key, 4},
    {field_key, 5, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 5, .inherited = true},
  [299] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
  [301] =
    {field_argument, 3},
    {field_constructor, 1},
  [303] =
    {field_argument, 3, .inherited = true},
    {field_constructor, 1},
  [305] =
    {field_body, 2},
    {field_body, 3},
    {field_body, 4},
  [308] =
    {field_argument, 2},
    {field_argument, 3, .inherited = true},
    {field_functor, 0},
  [311] =
    {field_number, 1},
  [312] =
    {field_body, 4},
    {field_plan, 6},
    {field_subsumed, 0},
    {field_subsumes, 2},
  [316] =
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 3},
    {field_type, 4, .inherited = true},
  [321] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_name, 1},
    {field_return, 7},
    {field_type, 4, .inherited = true},
  [326] =
    {field_body, 6},
    {field_super, 3},
    {field_super, 4, .inherited = true},
    {field_type, 1},
  [330] =
    {field_attribute, 3},
    {field_attribute, 4, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_qualifier, 6},
  [335] =
    {field_attribute, 4},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [340] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
  [345] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [350] =
    {field_attribute, 4, .inherited = true},
    {field_choice, 7},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 6},
  [355] =
    {field_constructor, 0},
    {field_field, 2},
    {field_field, 3, .inherited = true},
  [358] =
    {field_directive, 0},
    {field_key, 3},
    {field_key, 6, .inherited = true},
    {field_relation, 1},
    {field_value, 5},
    {field_value, 6, .inherited = true},
  [364] =
    {field_directive, 0},
    {field_key, 4},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
  [369] =
    {field_argument, 3},
    {field_argument, 4, .inherited = true},
    {field_constructor, 1},
  [372] =
    {field_expr, 2},
    {field_type, 4},
  [374] =
    {field_aggregator, 0},
    {field_body, 3},
    {field_body, 4},
    {field_body, 5},
    {field_head, 1},
  [379] =
    {field_high, 4},
    {field_low, 2},
  [381] =
    {field_number, 1},
    {field_order, 4},
  [383] =
    {field_order, 1},
  [384] =
    {field_attribute, 4},
    {field_attribute, 5, .inherited = true},
    {field_choice, 8},
    {field_head, 1},
    {field_head, 2},
    {field_qualifier, 7},
  [390] =
    {field_directive, 0},
    {field_key, 4},
    {field_key, 7, .inherited = true},
    {field_relation, 1},
    {field_relation, 2, .inherited = true},
    {field_value, 6},
    {field_value, 7, .inherited = true},
  [397] =
    {field_high, 4},
    {field_low, 2},
    {field_step, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 2,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 16,
  [17] = 15,
  [18] = 16,
  [19] = 19,
  [20] = 19,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 30,
  [40] = 40,
  [41] = 41,
  [42] = 36,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 121,
  [123] = 81,
  [124] = 83,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 82,
  [129] = 129,
  [130] = 130,
  [131] = 83,
  [132] = 81,
  [133] = 133,
  [134] = 118,
  [135] = 135,
  [136] = 136,
  [137] = 88,
  [138] = 138,
  [139] = 139,
  [140] = 117,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 127,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 82,
  [174] = 81,
  [175] = 83,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 88,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 82,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 83,
  [259] = 259,
  [260] = 260,
  [261] = 81,
  [262] = 262,
  [263] = 263,
  [264] = 145,
  [265] = 126,
  [266] = 88,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 176,
  [283] = 189,
  [284] = 168,
  [285] = 192,
  [286] = 249,
  [287] = 202,
  [288] = 236,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 294,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 300,
  [308] = 297,
  [309] = 309,
  [310] = 310,
  [311] = 310,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 334,
  [335] = 335,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 314,
  [342] = 318,
  [343] = 322,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 326,
  [350] = 350,
  [351] = 327,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 319,
  [356] = 356,
  [357] = 357,
  [358] = 317,
  [359] = 359,
  [360] = 360,
  [361] = 324,
  [362] = 362,
  [363] = 363,
  [364] = 316,
  [365] = 365,
  [366] = 366,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 370,
  [371] = 371,
  [372] = 372,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 382,
  [383] = 383,
  [384] = 384,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 396,
  [397] = 397,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 360,
  [409] = 409,
  [410] = 410,
  [411] = 350,
  [412] = 412,
  [413] = 413,
  [414] = 414,
  [415] = 415,
  [416] = 416,
  [417] = 417,
  [418] = 418,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 424,
  [425] = 425,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 429,
  [430] = 430,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 354,
  [437] = 437,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 444,
  [451] = 451,
  [452] = 452,
  [453] = 453,
  [454] = 454,
  [455] = 445,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 460,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 451,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 469,
  [470] = 470,
  [471] = 471,
  [472] = 472,
  [473] = 473,
  [474] = 474,
  [475] = 475,
  [476] = 476,
  [477] = 477,
  [478] = 478,
  [479] = 479,
  [480] = 480,
  [481] = 481,
  [482] = 482,
  [483] = 483,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 486,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 486,
  [520] = 486,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 498,
  [527] = 518,
  [528] = 528,
  [529] = 529,
  [530] = 530,
};

static inline bool sym_ident_character_set_1(int32_t c) {
  return (c < 'a'
    ? (c < 'A'
      ? (c < '?'
        ? (c >= '0' && c <= '9')
        : c <= '?')
      : (c <= 'Z' || c == '_'))
    : (c <= 'e' || (c < 't'
      ? (c < 'o'
        ? (c >= 'g' && c <= 'm')
        : c <= 'r')
      : (c <= 't' || (c >= 'v' && c <= 'z')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(507);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(514);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == '&') ADVANCE(625);
      if (lookahead == '(') ADVANCE(456);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '*') ADVANCE(613);
      if (lookahead == '+') ADVANCE(612);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(505);
      if (lookahead == '<') ADVANCE(484);
      if (lookahead == '=') ADVANCE(489);
      if (lookahead == '>') ADVANCE(487);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '[') ADVANCE(515);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '^') ADVANCE(615);
      if (lookahead == '_') ADVANCE(541);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '~') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\r') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(152)
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(169);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(471);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(506);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(514);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(610);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'd' ||
          ('f' <= lookahead && lookahead <= 'k') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '[') ADVANCE(515);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '_') ADVANCE(542);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(689);
      if (lookahead == 'e') ADVANCE(845);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(679);
      if (lookahead == 'n') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead == 's') ADVANCE(680);
      if (lookahead == 't') ADVANCE(690);
      if (lookahead == '~') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(506);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '$') ADVANCE(514);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(610);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '0') ADVANCE(528);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == 'd' ||
          ('g' <= lookahead && lookahead <= 'k') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '[') ADVANCE(515);
      if (lookahead == '_') ADVANCE(542);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'b') ADVANCE(778);
      if (lookahead == 'c') ADVANCE(688);
      if (lookahead == 'e') ADVANCE(845);
      if (lookahead == 'f') ADVANCE(849);
      if (lookahead == 'l') ADVANCE(687);
      if (lookahead == 'm') ADVANCE(678);
      if (lookahead == 'n') ADVANCE(742);
      if (lookahead == 'o') ADVANCE(804);
      if (lookahead == 'r') ADVANCE(850);
      if (lookahead == 's') ADVANCE(680);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead == '~') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(531);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == '&') ADVANCE(625);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '*') ADVANCE(613);
      if (lookahead == '+') ADVANCE(612);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(608);
      if (lookahead == '.') ADVANCE(499);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == ':') ADVANCE(475);
      if (lookahead == ';') ADVANCE(505);
      if (lookahead == '<') ADVANCE(485);
      if (lookahead == '=') ADVANCE(489);
      if (lookahead == '>') ADVANCE(487);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '^') ADVANCE(615);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(26);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == '&') ADVANCE(625);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '*') ADVANCE(613);
      if (lookahead == '+') ADVANCE(612);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(608);
      if (lookahead == '.') ADVANCE(499);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(505);
      if (lookahead == '<') ADVANCE(485);
      if (lookahead == '=') ADVANCE(489);
      if (lookahead == '>') ADVANCE(487);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '^') ADVANCE(615);
      if (lookahead == 'b') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(36);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(521);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(522);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '.') ADVANCE(502);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(489);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '|') ADVANCE(626);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '.') ADVANCE(499);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'r') ||
          lookahead == 't' ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '[') ADVANCE(515);
      if (lookahead == 'f') ADVANCE(765);
      if (lookahead == 'n') ADVANCE(844);
      if (lookahead == 's') ADVANCE(847);
      if (lookahead == 'u') ADVANCE(791);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(464);
      if (lookahead == '/') ADVANCE(468);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(465);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(465);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(498);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(520);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(520);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      END_STATE();
    case 22:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(666);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(512);
      END_STATE();
    case 27:
      if (lookahead == '=') ADVANCE(503);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == '_') ADVANCE(135);
      END_STATE();
    case 30:
      if (lookahead == '_') ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 34:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'o') ADVANCE(117);
      if (lookahead == 's') ADVANCE(73);
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 36:
      if (lookahead == 'a') ADVANCE(103);
      if (lookahead == 'o') ADVANCE(118);
      if (lookahead == 'x') ADVANCE(111);
      END_STATE();
    case 37:
      if (lookahead == 'b') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'b') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(87);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 40:
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 41:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 42:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 44:
      if (lookahead == 'd') ADVANCE(619);
      END_STATE();
    case 45:
      if (lookahead == 'd') ADVANCE(616);
      END_STATE();
    case 46:
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(70);
      if (lookahead == 'l') ADVANCE(78);
      END_STATE();
    case 47:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 48:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 51:
      if (lookahead == 'd') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 53:
      if (lookahead == 'e') ADVANCE(665);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 55:
      if (lookahead == 'e') ADVANCE(167);
      END_STATE();
    case 56:
      if (lookahead == 'e') ADVANCE(481);
      END_STATE();
    case 57:
      if (lookahead == 'e') ADVANCE(491);
      END_STATE();
    case 58:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(663);
      END_STATE();
    case 60:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 61:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(124);
      END_STATE();
    case 63:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 65:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 66:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 67:
      if (lookahead == 'f') ADVANCE(463);
      END_STATE();
    case 68:
      if (lookahead == 'f') ADVANCE(459);
      END_STATE();
    case 69:
      if (lookahead == 'f') ADVANCE(460);
      END_STATE();
    case 70:
      if (lookahead == 'f') ADVANCE(462);
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 71:
      if (lookahead == 'f') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 73:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'i') ADVANCE(149);
      END_STATE();
    case 75:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 76:
      if (lookahead == 'i') ADVANCE(95);
      END_STATE();
    case 77:
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 78:
      if (lookahead == 'i') ADVANCE(101);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(105);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 82:
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 83:
      if (lookahead == 'i') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == 'r') ADVANCE(623);
      END_STATE();
    case 86:
      if (lookahead == 'l') ADVANCE(635);
      END_STATE();
    case 87:
      if (lookahead == 'l') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 88:
      if (lookahead == 'l') ADVANCE(140);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 90:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 91:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 92:
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 93:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 'm') ADVANCE(35);
      END_STATE();
    case 95:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 96:
      if (lookahead == 'n') ADVANCE(662);
      END_STATE();
    case 97:
      if (lookahead == 'n') ADVANCE(47);
      END_STATE();
    case 98:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 99:
      if (lookahead == 'n') ADVANCE(504);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 101:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 102:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 103:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 104:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 105:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 106:
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 107:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 108:
      if (lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 109:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 110:
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 111:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 112:
      if (lookahead == 'p') ADVANCE(479);
      END_STATE();
    case 113:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 114:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 115:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 116:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 117:
      if (lookahead == 'r') ADVANCE(620);
      END_STATE();
    case 118:
      if (lookahead == 'r') ADVANCE(617);
      END_STATE();
    case 119:
      if (lookahead == 'r') ADVANCE(621);
      END_STATE();
    case 120:
      if (lookahead == 'r') ADVANCE(618);
      END_STATE();
    case 121:
      if (lookahead == 'r') ADVANCE(473);
      END_STATE();
    case 122:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 123:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 124:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 125:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 127:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 128:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 129:
      if (lookahead == 't') ADVANCE(488);
      END_STATE();
    case 130:
      if (lookahead == 't') ADVANCE(490);
      END_STATE();
    case 131:
      if (lookahead == 't') ADVANCE(492);
      END_STATE();
    case 132:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 133:
      if (lookahead == 't') ADVANCE(108);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(116);
      END_STATE();
    case 135:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 136:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 137:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(134);
      END_STATE();
    case 139:
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'v') ADVANCE(62);
      END_STATE();
    case 140:
      if (lookahead == 'u') ADVANCE(48);
      END_STATE();
    case 141:
      if (lookahead == 'u') ADVANCE(90);
      END_STATE();
    case 142:
      if (lookahead == 'u') ADVANCE(100);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(130);
      END_STATE();
    case 144:
      if (lookahead == 'u') ADVANCE(131);
      END_STATE();
    case 145:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 146:
      if (lookahead == 'y') ADVANCE(93);
      END_STATE();
    case 147:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 148:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 149:
      if (lookahead == 'z') ADVANCE(57);
      END_STATE();
    case 150:
      if (lookahead == 'z') ADVANCE(58);
      END_STATE();
    case 151:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(534);
      END_STATE();
    case 152:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      END_STATE();
    case 156:
      if (lookahead != 0 &&
          lookahead != '*') ADVANCE(453);
      END_STATE();
    case 157:
      if (eof) ADVANCE(162);
      if (lookahead == '!') ADVANCE(507);
      if (lookahead == '#') ADVANCE(209);
      if (lookahead == '$') ADVANCE(514);
      if (lookahead == '%') ADVANCE(614);
      if (lookahead == '&') ADVANCE(625);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == '*') ADVANCE(613);
      if (lookahead == '+') ADVANCE(612);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(609);
      if (lookahead == '.') ADVANCE(500);
      if (lookahead == '/') ADVANCE(467);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == ':') ADVANCE(476);
      if (lookahead == ';') ADVANCE(505);
      if (lookahead == '<') ADVANCE(484);
      if (lookahead == '=') ADVANCE(489);
      if (lookahead == '>') ADVANCE(487);
      if (lookahead == '@') ADVANCE(545);
      if (lookahead == '[') ADVANCE(515);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '^') ADVANCE(615);
      if (lookahead == '_') ADVANCE(541);
      if (lookahead == 'a') ADVANCE(203);
      if (lookahead == 'b') ADVANCE(182);
      if (lookahead == 'c') ADVANCE(178);
      if (lookahead == 'e') ADVANCE(379);
      if (lookahead == 'f') ADVANCE(175);
      if (lookahead == 'i') ADVANCE(327);
      if (lookahead == 'l') ADVANCE(183);
      if (lookahead == 'm') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(277);
      if (lookahead == 'o') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead == 's') ADVANCE(287);
      if (lookahead == 't') ADVANCE(186);
      if (lookahead == 'u') ADVANCE(328);
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '|') ADVANCE(627);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '~') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(157)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      if (lookahead != 0) ADVANCE(453);
      END_STATE();
    case 158:
      if (eof) ADVANCE(162);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '-') ADVANCE(154);
      if (lookahead == '.') ADVANCE(39);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(525);
      if (lookahead == ':') ADVANCE(475);
      if (lookahead == ';') ADVANCE(505);
      if (lookahead == '<') ADVANCE(483);
      if (lookahead == '=') ADVANCE(489);
      if (lookahead == '>') ADVANCE(486);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == ']') ADVANCE(516);
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '|') ADVANCE(626);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(158)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 159:
      if (eof) ADVANCE(162);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '(') ADVANCE(474);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(489);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '{') ADVANCE(480);
      if (lookahead == '|') ADVANCE(626);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(159)
      END_STATE();
    case 160:
      if (eof) ADVANCE(162);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == ')') ADVANCE(458);
      if (lookahead == ',') ADVANCE(457);
      if (lookahead == '.') ADVANCE(40);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'd' ||
          ('f' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'b') ADVANCE(691);
      if (lookahead == 'c') ADVANCE(740);
      if (lookahead == 'e') ADVANCE(803);
      if (lookahead == 'i') ADVANCE(777);
      if (lookahead == 'm') ADVANCE(851);
      if (lookahead == 'n') ADVANCE(794);
      if (lookahead == 'o') ADVANCE(694);
      if (lookahead == 'p') ADVANCE(814);
      if (lookahead == '}') ADVANCE(482);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(160)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 161:
      if (eof) ADVANCE(162);
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '.') ADVANCE(501);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(838);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      END_STATE();
    case 162:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_POUNDline);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_preproc_line_token1);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == 'b') ADVANCE(450);
      if (lookahead == 'u') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(452);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_preproc_line_token1);
      if (lookahead == '.') ADVANCE(451);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_preproc_line_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_POUNDdefine);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_preproc_def_token1);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '-') ADVANCE(220);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '_') ADVANCE(291);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '_') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '_') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '_') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(309);
      if (lookahead == 'l') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(272);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'h') ADVANCE(361);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(268);
      if (lookahead == 'i') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(198);
      if (lookahead == 'e') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(273);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(340);
      if (lookahead == 'n') ADVANCE(362);
      if (lookahead == 'o') ADVANCE(382);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead == 's') ADVANCE(274);
      if (lookahead == 't') ADVANCE(390);
      if (lookahead == 'x') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(342);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead == 'o') ADVANCE(266);
      if (lookahead == 'x') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead == 'o') ADVANCE(172);
      if (lookahead == 'r') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'a') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(403);
      if (lookahead == 'm') ADVANCE(598);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(250);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'b') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(646);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(360);
      if (lookahead == 's') ADVANCE(543);
      if (lookahead == 't') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(275);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'c') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(222);
      if (lookahead == 'e') ADVANCE(339);
      if (lookahead == 'i') ADVANCE(259);
      if (lookahead == 'l') ADVANCE(288);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(594);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'd') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(602);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(461);
      if (lookahead == 'n') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(314);
      if (lookahead == 'n') ADVANCE(442);
      if (lookahead == 's') ADVANCE(428);
      if (lookahead == 'u') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'f') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(564);
      if (lookahead == 'r') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(229);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(283);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == 'x') ADVANCE(578);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'g') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'h') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(303);
      if (lookahead == 'o') ADVANCE(171);
      if (lookahead == 'u') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(332);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == 'u') ADVANCE(193);
      if (lookahead == 'y') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(348);
      if (lookahead == 'm') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(271);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'i') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(622);
      if (lookahead == 'r') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(255);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(290);
      if (lookahead == 'p') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'm') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(580);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead == 's') ADVANCE(558);
      if (lookahead == 'u') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(225);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'n') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'o') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(240);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'q') ADVANCE(391);
      if (lookahead == 'x') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(210);
      if (lookahead == 'u') ADVANCE(419);
      if (lookahead == 'v') ADVANCE(247);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(590);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(251);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(301);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(289);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'r') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(280);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 's') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(673);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 't') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead == 'v') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'u') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'y') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'y') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'y') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'y') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'z') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'z') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == 'z') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(453);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '\r' &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(453);
      if (lookahead == '\r') ADVANCE(455);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_preproc_arg);
      if (lookahead != 0 &&
          lookahead != '/' &&
          lookahead != '\\') ADVANCE(453);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(454);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_POUNDifdef);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_POUNDifndef);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      if (lookahead == 'd') ADVANCE(243);
      if (lookahead == 'n') ADVANCE(221);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_POUNDif);
      if (lookahead == 'd') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_preproc_endif);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(14);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(464);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(470);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(470);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(471);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_DOTpragma);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_DOTfunctor);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_LPAREN2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '-') ADVANCE(498);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_stateful);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_stateful);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_DOTcomp);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_DOToverride);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == ':') ADVANCE(666);
      if (lookahead == '<') ADVANCE(632);
      if (lookahead == '=') ADVANCE(503);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(632);
      if (lookahead == '=') ADVANCE(503);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(513);
      if (lookahead == '>') ADVANCE(633);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_DOTinit);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_DOTinput);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_DOTlimitsize);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_DOToutput);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_DOTprintsize);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_COLON_DASH);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'c') ADVANCE(359);
      if (lookahead == 'd') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead == 'i') ADVANCE(329);
      if (lookahead == 'l') ADVANCE(279);
      if (lookahead == 'n') ADVANCE(440);
      if (lookahead == 'o') ADVANCE(441);
      if (lookahead == 'p') ADVANCE(381);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead == 't') ADVANCE(443);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'f') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(138);
      if (lookahead == 'p') ADVANCE(122);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'c') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(66);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == 'l') ADVANCE(76);
      if (lookahead == 'o') ADVANCE(139);
      if (lookahead == 'p') ADVANCE(126);
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_DOTplan);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(512);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_match);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_match);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_contains);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_contains);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_ipv4);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_ipv4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(521);
      if (lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_include_string);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(451);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(153);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'b') ADVANCE(151);
      if (lookahead == 'u') ADVANCE(532);
      if (lookahead == 'x') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_decimal_token1);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(532);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_unsigned);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(533);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(534);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '.') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_nil);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_anonymous);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_anonymous);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_as);
      if (lookahead == 'i') ADVANCE(334);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_as);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(773);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_acos);
      if (lookahead == 'h') ADVANCE(548);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_acos);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(549);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_acosh);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_acosh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(anon_sym_asin);
      if (lookahead == 'h') ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(anon_sym_asin);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(553);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_asinh);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_asinh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_atan);
      if (lookahead == 'h') ADVANCE(556);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_atan);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(557);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_atanh);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_atanh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_cos);
      if (lookahead == 'h') ADVANCE(560);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_cos);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(561);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_cosh);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_cosh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_exp);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(anon_sym_exp);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_log);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_log);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_sin);
      if (lookahead == 'h') ADVANCE(568);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_sin);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(569);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_sinh);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_sinh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_tan);
      if (lookahead == 'h') ADVANCE(572);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_tan);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(573);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_tanh);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_tanh);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_autoinc);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_autoinc);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_cat);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(anon_sym_cat);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(anon_sym_max);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(anon_sym_max);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_min);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_min);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_ord);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_ord);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_strlen);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_strlen);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_substr);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(anon_sym_substr);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_to_float);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(anon_sym_to_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(anon_sym_to_number);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(anon_sym_to_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(anon_sym_to_string);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(anon_sym_to_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_to_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_mean);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_mean);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_sum);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_sum);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_count);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_count);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(anon_sym_range);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_bnot);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_bnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_lnot);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_lnot);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(630);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(anon_sym_CARET);
      if (lookahead == '^') ADVANCE(631);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(anon_sym_land);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(anon_sym_lor);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(anon_sym_lxor);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(anon_sym_band);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(anon_sym_bor);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(anon_sym_bxor);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(anon_sym_bshl);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(anon_sym_bshr);
      if (lookahead == 'u') ADVANCE(624);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(anon_sym_bshru);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(628);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(629);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(anon_sym_CARET_CARET);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      if (lookahead == '>') ADVANCE(634);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(anon_sym_DOTdecl);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(anon_sym_brie);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(anon_sym_brie);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(anon_sym_btree);
      if (lookahead == '_') ADVANCE(218);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(anon_sym_btree);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '_') ADVANCE(708);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(anon_sym_btree_delete);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(anon_sym_btree_delete);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(anon_sym_eqrel);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(anon_sym_eqrel);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(anon_sym_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(anon_sym_magic);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(anon_sym_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(anon_sym_no_inline);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(anon_sym_no_inline);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(anon_sym_no_magic);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(anon_sym_no_magic);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_override);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_override);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(anon_sym_overridable);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_overridable);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_input);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_output);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(anon_sym_printsize);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(anon_sym_printsize);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(anon_sym_choice_DASHdomain);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(anon_sym_DOTnumber_type);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(anon_sym_DOTsymbol_type);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(anon_sym_DOTtype);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(anon_sym_LT_COLON);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(anon_sym_number);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(anon_sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(anon_sym_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'r') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'c') ADVANCE(792);
      if (lookahead == 's') ADVANCE(544);
      if (lookahead == 't') ADVANCE(852);
      if (lookahead == 'u') ADVANCE(833);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_ident);
      if (sym_ident_character_set_1(lookahead)) ADVANCE(861);
      if (lookahead == 'f') ADVANCE(761);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead == 's') ADVANCE(834);
      if (lookahead == 'u') ADVANCE(782);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(693);
      if (lookahead == 'e') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(846);
      if (lookahead == 'e') ADVANCE(853);
      if (lookahead == 'i') ADVANCE(770);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 's') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(771);
      if (lookahead == 't') ADVANCE(808);
      if (lookahead == 'u') ADVANCE(683);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'r') ||
          lookahead == 't' ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(784);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          lookahead == 'p' ||
          lookahead == 'q' ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == 'o') ADVANCE(859);
      if (lookahead == 'r') ADVANCE(839);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'b') ADVANCE(819);
      if (lookahead == 'm') ADVANCE(599);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(698);
      if (lookahead == 'e') ADVANCE(653);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(785);
      if (lookahead == 'm') ADVANCE(857);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(753);
      if (lookahead == 'p') ADVANCE(842);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(798);
      if (lookahead == 'o') ADVANCE(732);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == 'o') ADVANCE(681);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(822);
      if (lookahead == 'o') ADVANCE(692);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(772);
      if (lookahead == 'o') ADVANCE(859);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          lookahead == 's' ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(748);
      if (lookahead == 't') ADVANCE(811);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          lookahead == 't' ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(559);
      if (lookahead == 'u') ADVANCE(784);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(861);
      if (lookahead == 't') ADVANCE(699);
      if (lookahead == 'x') ADVANCE(579);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('w' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'u') ADVANCE(830);
      if (lookahead == 'v') ADVANCE(725);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'b') ADVANCE(722);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'b') ADVANCE(799);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'b') ADVANCE(726);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          ('c' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'b') ADVANCE(764);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'c') ADVANCE(739);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'c') ADVANCE(575);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'c') ADVANCE(647);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'c') ADVANCE(651);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == 'a' ||
          lookahead == 'b' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'c') ADVANCE(714);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'd') ADVANCE(583);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'd') ADVANCE(595);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'd') ADVANCE(684);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'd') ADVANCE(672);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'c') ||
          ('e' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'd') ADVANCE(730);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(495);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(497);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(603);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(637);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(675);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(645);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(649);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(661);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(655);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(641);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(731);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(705);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(806);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(757);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(707);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(810);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(807);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(713);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(776);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(836);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'd') ||
          ('f' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'e') ADVANCE(763);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'f') ADVANCE(841);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'g') ADVANCE(565);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'g') ADVANCE(593);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'g') ADVANCE(711);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'g') ADVANCE(746);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'g') ADVANCE(747);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'g') ADVANCE(786);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f') ||
          ('h' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'g') ADVANCE(790);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(509);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'g') ||
          ('i' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'h') ADVANCE(797);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(848);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(756);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(737);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(703);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(701);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(702);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(712);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(783);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(787);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(788);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(789);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'h') ||
          ('j' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'i') ADVANCE(738);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(540);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(643);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(478);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(670);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(817);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(796);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(728);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(729);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(718);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(800);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'k') ||
          ('m' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'l') ADVANCE(754);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'm') ADVANCE(695);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'm') ADVANCE(696);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'l') ||
          ('n' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'm') ADVANCE(697);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(581);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(567);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(571);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(551);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(555);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(597);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(585);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(686);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(795);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(734);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(700);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(733);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(818);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(816);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(825);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(766);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(835);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(716);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(724);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'm') ||
          ('o' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'n') ADVANCE(821);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(815);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(749);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(860);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(823);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(854);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(744);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(824);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(759);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'n') ||
          ('p' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'o') ADVANCE(855);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'p') ADVANCE(563);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'o') ||
          ('q' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'p') ADVANCE(843);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'p') ||
          ('r' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'q') ADVANCE(812);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(704);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(668);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(762);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(745);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(809);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(727);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(723);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(751);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'q') ||
          ('s' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'r') ADVANCE(752);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(547);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(511);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(710);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(743);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(832);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(741);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'r') ||
          ('t' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 's') ADVANCE(755);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(577);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(601);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(589);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(657);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(674);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(856);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(805);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(793);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(813);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(820);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(719);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(720);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 's') ||
          ('u' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 't') ADVANCE(858);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'u') ADVANCE(709);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'u') ADVANCE(767);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'u') ADVANCE(758);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'u') ADVANCE(827);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'u') ADVANCE(828);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 't') ||
          ('v' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'u') ADVANCE(769);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(861);
      if (lookahead == 'x') ADVANCE(801);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'w') ||
          lookahead == 'y' ||
          lookahead == 'z') ADVANCE(861);
      if (lookahead == 'x') ADVANCE(579);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'x') ||
          lookahead == 'z') ADVANCE(861);
      if (lookahead == 'y') ADVANCE(768);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(861);
      if (lookahead == 'z') ADVANCE(717);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(760);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(779);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(735);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(774);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(775);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(826);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(829);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(750);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(736);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == 'a') ADVANCE(837);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '_') ADVANCE(677);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      if (lookahead == '_') ADVANCE(685);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_ident);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '?' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(861);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 158},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 158},
  [48] = {.lex_state = 158},
  [49] = {.lex_state = 160},
  [50] = {.lex_state = 160},
  [51] = {.lex_state = 160},
  [52] = {.lex_state = 160},
  [53] = {.lex_state = 160},
  [54] = {.lex_state = 160},
  [55] = {.lex_state = 160},
  [56] = {.lex_state = 160},
  [57] = {.lex_state = 160},
  [58] = {.lex_state = 160},
  [59] = {.lex_state = 160},
  [60] = {.lex_state = 160},
  [61] = {.lex_state = 160},
  [62] = {.lex_state = 160},
  [63] = {.lex_state = 160},
  [64] = {.lex_state = 160},
  [65] = {.lex_state = 160},
  [66] = {.lex_state = 160},
  [67] = {.lex_state = 160},
  [68] = {.lex_state = 160},
  [69] = {.lex_state = 160},
  [70] = {.lex_state = 160},
  [71] = {.lex_state = 160},
  [72] = {.lex_state = 160},
  [73] = {.lex_state = 160},
  [74] = {.lex_state = 158},
  [75] = {.lex_state = 158},
  [76] = {.lex_state = 158},
  [77] = {.lex_state = 158},
  [78] = {.lex_state = 158},
  [79] = {.lex_state = 158},
  [80] = {.lex_state = 158},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 7},
  [85] = {.lex_state = 7},
  [86] = {.lex_state = 7},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 6},
  [102] = {.lex_state = 6},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 6},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 6},
  [114] = {.lex_state = 6},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 6},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 6},
  [123] = {.lex_state = 6},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 158},
  [126] = {.lex_state = 158},
  [127] = {.lex_state = 6},
  [128] = {.lex_state = 159},
  [129] = {.lex_state = 158},
  [130] = {.lex_state = 158},
  [131] = {.lex_state = 159},
  [132] = {.lex_state = 159},
  [133] = {.lex_state = 158},
  [134] = {.lex_state = 6},
  [135] = {.lex_state = 158},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 159},
  [138] = {.lex_state = 6},
  [139] = {.lex_state = 158},
  [140] = {.lex_state = 6},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 158},
  [143] = {.lex_state = 158},
  [144] = {.lex_state = 158},
  [145] = {.lex_state = 159},
  [146] = {.lex_state = 158},
  [147] = {.lex_state = 158},
  [148] = {.lex_state = 158},
  [149] = {.lex_state = 158},
  [150] = {.lex_state = 158},
  [151] = {.lex_state = 158},
  [152] = {.lex_state = 6},
  [153] = {.lex_state = 158},
  [154] = {.lex_state = 158},
  [155] = {.lex_state = 158},
  [156] = {.lex_state = 158},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 158},
  [159] = {.lex_state = 158},
  [160] = {.lex_state = 158},
  [161] = {.lex_state = 158},
  [162] = {.lex_state = 158},
  [163] = {.lex_state = 6},
  [164] = {.lex_state = 158},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 158},
  [167] = {.lex_state = 158},
  [168] = {.lex_state = 158},
  [169] = {.lex_state = 158},
  [170] = {.lex_state = 158},
  [171] = {.lex_state = 158},
  [172] = {.lex_state = 158},
  [173] = {.lex_state = 161},
  [174] = {.lex_state = 161},
  [175] = {.lex_state = 161},
  [176] = {.lex_state = 158},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 158},
  [180] = {.lex_state = 158},
  [181] = {.lex_state = 158},
  [182] = {.lex_state = 158},
  [183] = {.lex_state = 158},
  [184] = {.lex_state = 158},
  [185] = {.lex_state = 158},
  [186] = {.lex_state = 6},
  [187] = {.lex_state = 158},
  [188] = {.lex_state = 158},
  [189] = {.lex_state = 158},
  [190] = {.lex_state = 161},
  [191] = {.lex_state = 158},
  [192] = {.lex_state = 158},
  [193] = {.lex_state = 158},
  [194] = {.lex_state = 158},
  [195] = {.lex_state = 158},
  [196] = {.lex_state = 158},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 158},
  [199] = {.lex_state = 158},
  [200] = {.lex_state = 158},
  [201] = {.lex_state = 158},
  [202] = {.lex_state = 158},
  [203] = {.lex_state = 158},
  [204] = {.lex_state = 158},
  [205] = {.lex_state = 158},
  [206] = {.lex_state = 158},
  [207] = {.lex_state = 158},
  [208] = {.lex_state = 158},
  [209] = {.lex_state = 158},
  [210] = {.lex_state = 158},
  [211] = {.lex_state = 158},
  [212] = {.lex_state = 158},
  [213] = {.lex_state = 158},
  [214] = {.lex_state = 158},
  [215] = {.lex_state = 158},
  [216] = {.lex_state = 158},
  [217] = {.lex_state = 158},
  [218] = {.lex_state = 158},
  [219] = {.lex_state = 158},
  [220] = {.lex_state = 158},
  [221] = {.lex_state = 158},
  [222] = {.lex_state = 158},
  [223] = {.lex_state = 158},
  [224] = {.lex_state = 158},
  [225] = {.lex_state = 158},
  [226] = {.lex_state = 158},
  [227] = {.lex_state = 158},
  [228] = {.lex_state = 158},
  [229] = {.lex_state = 6},
  [230] = {.lex_state = 158},
  [231] = {.lex_state = 158},
  [232] = {.lex_state = 158},
  [233] = {.lex_state = 158},
  [234] = {.lex_state = 158},
  [235] = {.lex_state = 158},
  [236] = {.lex_state = 158},
  [237] = {.lex_state = 158},
  [238] = {.lex_state = 158},
  [239] = {.lex_state = 158},
  [240] = {.lex_state = 158},
  [241] = {.lex_state = 158},
  [242] = {.lex_state = 10},
  [243] = {.lex_state = 158},
  [244] = {.lex_state = 158},
  [245] = {.lex_state = 158},
  [246] = {.lex_state = 158},
  [247] = {.lex_state = 158},
  [248] = {.lex_state = 158},
  [249] = {.lex_state = 159},
  [250] = {.lex_state = 158},
  [251] = {.lex_state = 158},
  [252] = {.lex_state = 158},
  [253] = {.lex_state = 158},
  [254] = {.lex_state = 158},
  [255] = {.lex_state = 158},
  [256] = {.lex_state = 158},
  [257] = {.lex_state = 158},
  [258] = {.lex_state = 10},
  [259] = {.lex_state = 6},
  [260] = {.lex_state = 6},
  [261] = {.lex_state = 10},
  [262] = {.lex_state = 6},
  [263] = {.lex_state = 158},
  [264] = {.lex_state = 10},
  [265] = {.lex_state = 161},
  [266] = {.lex_state = 10},
  [267] = {.lex_state = 161},
  [268] = {.lex_state = 161},
  [269] = {.lex_state = 161},
  [270] = {.lex_state = 158},
  [271] = {.lex_state = 161},
  [272] = {.lex_state = 161},
  [273] = {.lex_state = 161},
  [274] = {.lex_state = 158},
  [275] = {.lex_state = 158},
  [276] = {.lex_state = 158},
  [277] = {.lex_state = 158},
  [278] = {.lex_state = 158},
  [279] = {.lex_state = 158},
  [280] = {.lex_state = 158},
  [281] = {.lex_state = 158},
  [282] = {.lex_state = 158},
  [283] = {.lex_state = 158},
  [284] = {.lex_state = 158},
  [285] = {.lex_state = 158},
  [286] = {.lex_state = 10},
  [287] = {.lex_state = 158},
  [288] = {.lex_state = 158},
  [289] = {.lex_state = 158},
  [290] = {.lex_state = 158},
  [291] = {.lex_state = 11},
  [292] = {.lex_state = 158},
  [293] = {.lex_state = 158},
  [294] = {.lex_state = 11},
  [295] = {.lex_state = 11},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 11},
  [298] = {.lex_state = 11},
  [299] = {.lex_state = 11},
  [300] = {.lex_state = 11},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 11},
  [303] = {.lex_state = 11},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 11},
  [306] = {.lex_state = 11},
  [307] = {.lex_state = 11},
  [308] = {.lex_state = 11},
  [309] = {.lex_state = 11},
  [310] = {.lex_state = 158},
  [311] = {.lex_state = 158},
  [312] = {.lex_state = 6},
  [313] = {.lex_state = 6},
  [314] = {.lex_state = 158},
  [315] = {.lex_state = 6},
  [316] = {.lex_state = 158},
  [317] = {.lex_state = 158},
  [318] = {.lex_state = 158},
  [319] = {.lex_state = 158},
  [320] = {.lex_state = 6},
  [321] = {.lex_state = 6},
  [322] = {.lex_state = 158},
  [323] = {.lex_state = 6},
  [324] = {.lex_state = 158},
  [325] = {.lex_state = 158},
  [326] = {.lex_state = 158},
  [327] = {.lex_state = 158},
  [328] = {.lex_state = 158},
  [329] = {.lex_state = 11},
  [330] = {.lex_state = 158},
  [331] = {.lex_state = 158},
  [332] = {.lex_state = 158},
  [333] = {.lex_state = 6},
  [334] = {.lex_state = 6},
  [335] = {.lex_state = 6},
  [336] = {.lex_state = 6},
  [337] = {.lex_state = 6},
  [338] = {.lex_state = 6},
  [339] = {.lex_state = 6},
  [340] = {.lex_state = 6},
  [341] = {.lex_state = 6},
  [342] = {.lex_state = 6},
  [343] = {.lex_state = 6},
  [344] = {.lex_state = 160},
  [345] = {.lex_state = 158},
  [346] = {.lex_state = 158},
  [347] = {.lex_state = 6},
  [348] = {.lex_state = 158},
  [349] = {.lex_state = 6},
  [350] = {.lex_state = 158},
  [351] = {.lex_state = 6},
  [352] = {.lex_state = 158},
  [353] = {.lex_state = 158},
  [354] = {.lex_state = 158},
  [355] = {.lex_state = 6},
  [356] = {.lex_state = 158},
  [357] = {.lex_state = 158},
  [358] = {.lex_state = 6},
  [359] = {.lex_state = 160},
  [360] = {.lex_state = 158},
  [361] = {.lex_state = 6},
  [362] = {.lex_state = 158},
  [363] = {.lex_state = 158},
  [364] = {.lex_state = 6},
  [365] = {.lex_state = 158},
  [366] = {.lex_state = 158},
  [367] = {.lex_state = 158},
  [368] = {.lex_state = 158},
  [369] = {.lex_state = 158},
  [370] = {.lex_state = 158},
  [371] = {.lex_state = 158},
  [372] = {.lex_state = 158},
  [373] = {.lex_state = 158},
  [374] = {.lex_state = 158},
  [375] = {.lex_state = 158},
  [376] = {.lex_state = 158},
  [377] = {.lex_state = 158},
  [378] = {.lex_state = 158},
  [379] = {.lex_state = 158},
  [380] = {.lex_state = 158},
  [381] = {.lex_state = 158},
  [382] = {.lex_state = 158},
  [383] = {.lex_state = 158},
  [384] = {.lex_state = 158},
  [385] = {.lex_state = 158},
  [386] = {.lex_state = 158},
  [387] = {.lex_state = 158},
  [388] = {.lex_state = 158},
  [389] = {.lex_state = 158},
  [390] = {.lex_state = 158},
  [391] = {.lex_state = 158},
  [392] = {.lex_state = 158},
  [393] = {.lex_state = 158},
  [394] = {.lex_state = 158},
  [395] = {.lex_state = 158},
  [396] = {.lex_state = 158},
  [397] = {.lex_state = 158},
  [398] = {.lex_state = 158},
  [399] = {.lex_state = 158},
  [400] = {.lex_state = 158},
  [401] = {.lex_state = 158},
  [402] = {.lex_state = 158},
  [403] = {.lex_state = 158},
  [404] = {.lex_state = 158},
  [405] = {.lex_state = 158},
  [406] = {.lex_state = 158},
  [407] = {.lex_state = 158},
  [408] = {.lex_state = 6},
  [409] = {.lex_state = 158},
  [410] = {.lex_state = 158},
  [411] = {.lex_state = 6},
  [412] = {.lex_state = 158},
  [413] = {.lex_state = 158},
  [414] = {.lex_state = 158},
  [415] = {.lex_state = 5},
  [416] = {.lex_state = 158},
  [417] = {.lex_state = 158},
  [418] = {.lex_state = 158},
  [419] = {.lex_state = 5},
  [420] = {.lex_state = 158},
  [421] = {.lex_state = 158},
  [422] = {.lex_state = 158},
  [423] = {.lex_state = 158},
  [424] = {.lex_state = 158},
  [425] = {.lex_state = 158},
  [426] = {.lex_state = 158},
  [427] = {.lex_state = 158},
  [428] = {.lex_state = 158},
  [429] = {.lex_state = 158},
  [430] = {.lex_state = 158},
  [431] = {.lex_state = 158},
  [432] = {.lex_state = 158},
  [433] = {.lex_state = 158},
  [434] = {.lex_state = 158},
  [435] = {.lex_state = 158},
  [436] = {.lex_state = 6},
  [437] = {.lex_state = 158},
  [438] = {.lex_state = 158},
  [439] = {.lex_state = 158},
  [440] = {.lex_state = 158},
  [441] = {.lex_state = 158},
  [442] = {.lex_state = 158},
  [443] = {.lex_state = 158},
  [444] = {.lex_state = 158},
  [445] = {.lex_state = 158},
  [446] = {.lex_state = 158},
  [447] = {.lex_state = 158},
  [448] = {.lex_state = 1},
  [449] = {.lex_state = 158},
  [450] = {.lex_state = 158},
  [451] = {.lex_state = 158},
  [452] = {.lex_state = 158},
  [453] = {.lex_state = 158},
  [454] = {.lex_state = 158},
  [455] = {.lex_state = 158},
  [456] = {.lex_state = 5},
  [457] = {.lex_state = 158},
  [458] = {.lex_state = 158},
  [459] = {.lex_state = 158},
  [460] = {.lex_state = 158},
  [461] = {.lex_state = 158},
  [462] = {.lex_state = 158},
  [463] = {.lex_state = 158},
  [464] = {.lex_state = 5},
  [465] = {.lex_state = 158},
  [466] = {.lex_state = 158},
  [467] = {.lex_state = 158},
  [468] = {.lex_state = 6},
  [469] = {.lex_state = 158},
  [470] = {.lex_state = 158},
  [471] = {.lex_state = 158},
  [472] = {.lex_state = 158},
  [473] = {.lex_state = 158},
  [474] = {.lex_state = 158},
  [475] = {.lex_state = 158},
  [476] = {.lex_state = 158},
  [477] = {.lex_state = 158},
  [478] = {.lex_state = 158},
  [479] = {.lex_state = 158},
  [480] = {.lex_state = 158},
  [481] = {.lex_state = 158},
  [482] = {.lex_state = 1},
  [483] = {.lex_state = 160},
  [484] = {.lex_state = 5},
  [485] = {.lex_state = 160},
  [486] = {.lex_state = 158},
  [487] = {.lex_state = 158},
  [488] = {.lex_state = 158},
  [489] = {.lex_state = 160},
  [490] = {.lex_state = 158},
  [491] = {.lex_state = 158},
  [492] = {.lex_state = 158},
  [493] = {.lex_state = 158},
  [494] = {.lex_state = 158},
  [495] = {.lex_state = 158},
  [496] = {.lex_state = 3},
  [497] = {.lex_state = 5},
  [498] = {.lex_state = 158},
  [499] = {.lex_state = 158},
  [500] = {.lex_state = 158},
  [501] = {.lex_state = 158},
  [502] = {.lex_state = 160},
  [503] = {.lex_state = 158},
  [504] = {.lex_state = 158},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 158},
  [507] = {.lex_state = 158},
  [508] = {.lex_state = 158},
  [509] = {.lex_state = 158},
  [510] = {.lex_state = 6},
  [511] = {.lex_state = 158},
  [512] = {.lex_state = 158},
  [513] = {.lex_state = 158},
  [514] = {.lex_state = 158},
  [515] = {.lex_state = 158},
  [516] = {.lex_state = 158},
  [517] = {.lex_state = 158},
  [518] = {.lex_state = 158},
  [519] = {.lex_state = 158},
  [520] = {.lex_state = 158},
  [521] = {.lex_state = 158},
  [522] = {.lex_state = 469},
  [523] = {.lex_state = 158},
  [524] = {.lex_state = 158},
  [525] = {.lex_state = 13},
  [526] = {.lex_state = 158},
  [527] = {.lex_state = 158},
  [528] = {.lex_state = 158},
  [529] = {.lex_state = 158},
  [530] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_POUNDline] = ACTIONS(1),
    [aux_sym_preproc_line_token1] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_POUNDdefine] = ACTIONS(1),
    [sym_preproc_arg] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUNDifdef] = ACTIONS(1),
    [anon_sym_POUNDifndef] = ACTIONS(1),
    [anon_sym_POUNDif] = ACTIONS(1),
    [sym_preproc_endif] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DOTpragma] = ACTIONS(1),
    [anon_sym_DOTfunctor] = ACTIONS(1),
    [anon_sym_LPAREN2] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_stateful] = ACTIONS(1),
    [anon_sym_DOTcomp] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_DOToverride] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DOTinit] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DOTinput] = ACTIONS(1),
    [anon_sym_DOTlimitsize] = ACTIONS(1),
    [anon_sym_DOToutput] = ACTIONS(1),
    [anon_sym_DOTprintsize] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_COLON_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_match] = ACTIONS(1),
    [anon_sym_contains] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_decimal_token1] = ACTIONS(1),
    [sym_unsigned] = ACTIONS(1),
    [sym_hex] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_anonymous] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_acos] = ACTIONS(1),
    [anon_sym_acosh] = ACTIONS(1),
    [anon_sym_asin] = ACTIONS(1),
    [anon_sym_asinh] = ACTIONS(1),
    [anon_sym_atan] = ACTIONS(1),
    [anon_sym_atanh] = ACTIONS(1),
    [anon_sym_cos] = ACTIONS(1),
    [anon_sym_cosh] = ACTIONS(1),
    [anon_sym_exp] = ACTIONS(1),
    [anon_sym_log] = ACTIONS(1),
    [anon_sym_sin] = ACTIONS(1),
    [anon_sym_sinh] = ACTIONS(1),
    [anon_sym_tan] = ACTIONS(1),
    [anon_sym_tanh] = ACTIONS(1),
    [anon_sym_autoinc] = ACTIONS(1),
    [anon_sym_cat] = ACTIONS(1),
    [anon_sym_max] = ACTIONS(1),
    [anon_sym_min] = ACTIONS(1),
    [anon_sym_ord] = ACTIONS(1),
    [anon_sym_strlen] = ACTIONS(1),
    [anon_sym_substr] = ACTIONS(1),
    [anon_sym_to_float] = ACTIONS(1),
    [anon_sym_to_number] = ACTIONS(1),
    [anon_sym_to_string] = ACTIONS(1),
    [anon_sym_to_unsigned] = ACTIONS(1),
    [anon_sym_mean] = ACTIONS(1),
    [anon_sym_sum] = ACTIONS(1),
    [anon_sym_count] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_bnot] = ACTIONS(1),
    [anon_sym_lnot] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_land] = ACTIONS(1),
    [anon_sym_lor] = ACTIONS(1),
    [anon_sym_lxor] = ACTIONS(1),
    [anon_sym_band] = ACTIONS(1),
    [anon_sym_bor] = ACTIONS(1),
    [anon_sym_bxor] = ACTIONS(1),
    [anon_sym_bshl] = ACTIONS(1),
    [anon_sym_bshr] = ACTIONS(1),
    [anon_sym_bshru] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_CARET_CARET] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_GT_GT_GT] = ACTIONS(1),
    [anon_sym_DOTdecl] = ACTIONS(1),
    [anon_sym_brie] = ACTIONS(1),
    [anon_sym_btree] = ACTIONS(1),
    [anon_sym_btree_delete] = ACTIONS(1),
    [anon_sym_eqrel] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_magic] = ACTIONS(1),
    [anon_sym_no_inline] = ACTIONS(1),
    [anon_sym_no_magic] = ACTIONS(1),
    [anon_sym_override] = ACTIONS(1),
    [anon_sym_overridable] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [anon_sym_printsize] = ACTIONS(1),
    [anon_sym_choice_DASHdomain] = ACTIONS(1),
    [anon_sym_DOTnumber_type] = ACTIONS(1),
    [anon_sym_DOTsymbol_type] = ACTIONS(1),
    [anon_sym_DOTtype] = ACTIONS(1),
    [anon_sym_LT_COLON] = ACTIONS(1),
    [anon_sym_number] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(505),
    [sym_preproc] = STATE(47),
    [sym_preproc_line] = STATE(234),
    [sym_preproc_include] = STATE(234),
    [sym_preproc_def] = STATE(234),
    [sym_preproc_ifdef] = STATE(234),
    [sym_block_comment] = STATE(47),
    [sym_line_comment] = STATE(47),
    [sym_pragma] = STATE(47),
    [sym_functor_decl] = STATE(47),
    [sym_component_decl] = STATE(47),
    [sym_component_init] = STATE(47),
    [sym_directive] = STATE(47),
    [sym__directive_qualifier] = STATE(450),
    [sym__rule] = STATE(47),
    [sym_monotonic_rule] = STATE(47),
    [sym_subsumptive_rule] = STATE(47),
    [sym_fact] = STATE(47),
    [sym_atom] = STATE(329),
    [sym_relation_decl] = STATE(47),
    [sym_legacy_type_decl] = STATE(47),
    [sym_type_decl] = STATE(47),
    [sym_qualified_name] = STATE(501),
    [aux_sym_program_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_POUNDline] = ACTIONS(5),
    [anon_sym_POUNDinclude] = ACTIONS(7),
    [anon_sym_POUNDdefine] = ACTIONS(9),
    [anon_sym_POUNDifdef] = ACTIONS(11),
    [anon_sym_POUNDifndef] = ACTIONS(11),
    [anon_sym_POUNDif] = ACTIONS(13),
    [sym_preproc_endif] = ACTIONS(15),
    [anon_sym_SLASH_STAR] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [anon_sym_DOTpragma] = ACTIONS(21),
    [anon_sym_DOTfunctor] = ACTIONS(23),
    [anon_sym_DOTcomp] = ACTIONS(25),
    [anon_sym_DOTinit] = ACTIONS(27),
    [anon_sym_DOTinput] = ACTIONS(29),
    [anon_sym_DOTlimitsize] = ACTIONS(29),
    [anon_sym_DOToutput] = ACTIONS(29),
    [anon_sym_DOTprintsize] = ACTIONS(29),
    [anon_sym_DOTdecl] = ACTIONS(31),
    [anon_sym_DOTnumber_type] = ACTIONS(33),
    [anon_sym_DOTsymbol_type] = ACTIONS(33),
    [anon_sym_DOTtype] = ACTIONS(35),
    [sym_ident] = ACTIONS(37),
  },
  [2] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(527),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [sym_anonymous] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [3] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(526),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [sym_anonymous] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [4] = {
    [sym_bool] = STATE(341),
    [sym_disjunction] = STATE(468),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(408),
    [sym__constraint] = STATE(341),
    [sym_match] = STATE(341),
    [sym_contains] = STATE(341),
    [sym_comparison] = STATE(341),
    [sym_atom] = STATE(341),
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(16),
    [anon_sym_LPAREN2] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(87),
    [sym_anonymous] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [5] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(498),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [sym_anonymous] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [6] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(507),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(89),
    [sym_anonymous] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [7] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(503),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [sym_anonymous] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [8] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(492),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(89),
    [sym_anonymous] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [9] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(479),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [sym_anonymous] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [10] = {
    [sym_bool] = STATE(341),
    [sym_disjunction] = STATE(510),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(408),
    [sym__constraint] = STATE(341),
    [sym_match] = STATE(341),
    [sym_contains] = STATE(341),
    [sym_comparison] = STATE(341),
    [sym_atom] = STATE(341),
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(16),
    [anon_sym_LPAREN2] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(87),
    [sym_anonymous] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [11] = {
    [sym_bool] = STATE(341),
    [sym_disjunction] = STATE(530),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(408),
    [sym__constraint] = STATE(341),
    [sym_match] = STATE(341),
    [sym_contains] = STATE(341),
    [sym_comparison] = STATE(341),
    [sym_atom] = STATE(341),
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(16),
    [anon_sym_LPAREN2] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(87),
    [sym_anonymous] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [12] = {
    [sym_bool] = STATE(314),
    [sym_disjunction] = STATE(518),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(360),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(120),
    [sym_adt_constructor] = STATE(120),
    [sym_record_constructor] = STATE(120),
    [sym_constant] = STATE(120),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(120),
    [sym_as] = STATE(120),
    [sym_functor_call] = STATE(120),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(120),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(120),
    [sym_binary_op] = STATE(120),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(63),
    [sym_anonymous] = ACTIONS(63),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [13] = {
    [sym_bool] = STATE(341),
    [sym_negation] = STATE(16),
    [sym_conjunction] = STATE(347),
    [sym__constraint] = STATE(341),
    [sym_match] = STATE(341),
    [sym_contains] = STATE(341),
    [sym_comparison] = STATE(341),
    [sym_atom] = STATE(341),
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(16),
    [anon_sym_LPAREN2] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(87),
    [sym_anonymous] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [14] = {
    [sym_bool] = STATE(314),
    [sym_negation] = STATE(18),
    [sym_conjunction] = STATE(347),
    [sym__constraint] = STATE(314),
    [sym_match] = STATE(314),
    [sym_contains] = STATE(314),
    [sym_comparison] = STATE(314),
    [sym_atom] = STATE(314),
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(18),
    [anon_sym_LPAREN2] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(89),
    [sym_anonymous] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [15] = {
    [sym_bool] = STATE(335),
    [sym_negation] = STATE(20),
    [sym__constraint] = STATE(335),
    [sym_match] = STATE(335),
    [sym_contains] = STATE(335),
    [sym_comparison] = STATE(335),
    [sym_atom] = STATE(335),
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(20),
    [anon_sym_LPAREN2] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(87),
    [sym_anonymous] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [16] = {
    [sym_bool] = STATE(349),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(349),
    [sym_match] = STATE(349),
    [sym_contains] = STATE(349),
    [sym_comparison] = STATE(349),
    [sym_atom] = STATE(349),
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN2] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(87),
    [sym_anonymous] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [17] = {
    [sym_bool] = STATE(335),
    [sym_negation] = STATE(19),
    [sym__constraint] = STATE(335),
    [sym_match] = STATE(335),
    [sym_contains] = STATE(335),
    [sym_comparison] = STATE(335),
    [sym_atom] = STATE(335),
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(19),
    [anon_sym_LPAREN2] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(89),
    [sym_anonymous] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [18] = {
    [sym_bool] = STATE(326),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(326),
    [sym_match] = STATE(326),
    [sym_contains] = STATE(326),
    [sym_comparison] = STATE(326),
    [sym_atom] = STATE(326),
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN2] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(89),
    [sym_anonymous] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [19] = {
    [sym_bool] = STATE(323),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(323),
    [sym_match] = STATE(323),
    [sym_contains] = STATE(323),
    [sym_comparison] = STATE(323),
    [sym_atom] = STATE(323),
    [sym__argument] = STATE(121),
    [sym_adt_constructor] = STATE(121),
    [sym_record_constructor] = STATE(121),
    [sym_constant] = STATE(121),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(121),
    [sym_as] = STATE(121),
    [sym_functor_call] = STATE(121),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(121),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(121),
    [sym_binary_op] = STATE(121),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN2] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(89),
    [sym_anonymous] = ACTIONS(89),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [20] = {
    [sym_bool] = STATE(323),
    [sym_negation] = STATE(44),
    [sym__constraint] = STATE(323),
    [sym_match] = STATE(323),
    [sym_contains] = STATE(323),
    [sym_comparison] = STATE(323),
    [sym_atom] = STATE(323),
    [sym__argument] = STATE(122),
    [sym_adt_constructor] = STATE(122),
    [sym_record_constructor] = STATE(122),
    [sym_constant] = STATE(122),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(122),
    [sym_as] = STATE(122),
    [sym_functor_call] = STATE(122),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(122),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(122),
    [sym_binary_op] = STATE(122),
    [sym_qualified_name] = STATE(501),
    [aux_sym_conjunction_repeat1] = STATE(44),
    [anon_sym_LPAREN2] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(41),
    [anon_sym_false] = ACTIONS(41),
    [anon_sym_BANG] = ACTIONS(43),
    [anon_sym_match] = ACTIONS(45),
    [anon_sym_contains] = ACTIONS(47),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(87),
    [sym_anonymous] = ACTIONS(87),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(83),
  },
  [21] = {
    [sym__argument] = STATE(141),
    [sym_adt_constructor] = STATE(141),
    [sym_record_constructor] = STATE(141),
    [sym_constant] = STATE(141),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(141),
    [sym_as] = STATE(141),
    [sym_functor_call] = STATE(141),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(141),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(141),
    [sym_binary_op] = STATE(141),
    [aux_sym_match_repeat1] = STATE(427),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(105),
    [sym_anonymous] = ACTIONS(105),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [22] = {
    [sym__argument] = STATE(138),
    [sym_adt_constructor] = STATE(138),
    [sym_record_constructor] = STATE(138),
    [sym_constant] = STATE(138),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(138),
    [sym_as] = STATE(138),
    [sym_functor_call] = STATE(138),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(138),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(138),
    [sym_binary_op] = STATE(138),
    [aux_sym_match_repeat1] = STATE(406),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(109),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(111),
    [sym_anonymous] = ACTIONS(111),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [23] = {
    [sym__argument] = STATE(163),
    [sym_adt_constructor] = STATE(163),
    [sym_record_constructor] = STATE(163),
    [sym_constant] = STATE(163),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(163),
    [sym_as] = STATE(163),
    [sym_functor_call] = STATE(163),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(163),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(163),
    [sym_binary_op] = STATE(163),
    [aux_sym_record_constructor_repeat1] = STATE(416),
    [anon_sym_COMMA] = ACTIONS(113),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(117),
    [sym_anonymous] = ACTIONS(117),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [24] = {
    [sym__argument] = STATE(136),
    [sym_adt_constructor] = STATE(136),
    [sym_record_constructor] = STATE(136),
    [sym_constant] = STATE(136),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(136),
    [sym_as] = STATE(136),
    [sym_functor_call] = STATE(136),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(136),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(136),
    [sym_binary_op] = STATE(136),
    [aux_sym_match_repeat1] = STATE(369),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(121),
    [sym_anonymous] = ACTIONS(121),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [25] = {
    [sym__argument] = STATE(157),
    [sym_adt_constructor] = STATE(157),
    [sym_record_constructor] = STATE(157),
    [sym_constant] = STATE(157),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(157),
    [sym_as] = STATE(157),
    [sym_functor_call] = STATE(157),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(157),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(157),
    [sym_binary_op] = STATE(157),
    [aux_sym_match_repeat1] = STATE(371),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(125),
    [sym_anonymous] = ACTIONS(125),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [26] = {
    [sym__argument] = STATE(165),
    [sym_adt_constructor] = STATE(165),
    [sym_record_constructor] = STATE(165),
    [sym_constant] = STATE(165),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(165),
    [sym_as] = STATE(165),
    [sym_functor_call] = STATE(165),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(165),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(165),
    [sym_binary_op] = STATE(165),
    [aux_sym_match_repeat1] = STATE(437),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(129),
    [sym_anonymous] = ACTIONS(129),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [27] = {
    [sym__argument] = STATE(260),
    [sym_adt_constructor] = STATE(260),
    [sym_record_constructor] = STATE(260),
    [sym_constant] = STATE(260),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(260),
    [sym_as] = STATE(260),
    [sym_functor_call] = STATE(260),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(260),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(260),
    [sym_binary_op] = STATE(260),
    [anon_sym_LPAREN2] = ACTIONS(131),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(133),
    [sym_anonymous] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [28] = {
    [sym__argument] = STATE(140),
    [sym_adt_constructor] = STATE(140),
    [sym_record_constructor] = STATE(140),
    [sym_constant] = STATE(140),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(140),
    [sym_as] = STATE(140),
    [sym_functor_call] = STATE(140),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(140),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(140),
    [sym_binary_op] = STATE(140),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(139),
    [sym_anonymous] = ACTIONS(139),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(141),
    [anon_sym_lnot] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(135),
    [sym_ident] = ACTIONS(107),
  },
  [29] = {
    [sym__argument] = STATE(117),
    [sym_adt_constructor] = STATE(117),
    [sym_record_constructor] = STATE(117),
    [sym_constant] = STATE(117),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(117),
    [sym_as] = STATE(117),
    [sym_functor_call] = STATE(117),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(117),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(117),
    [sym_binary_op] = STATE(117),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(143),
    [sym_anonymous] = ACTIONS(143),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [30] = {
    [sym__argument] = STATE(118),
    [sym_adt_constructor] = STATE(118),
    [sym_record_constructor] = STATE(118),
    [sym_constant] = STATE(118),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(118),
    [sym_as] = STATE(118),
    [sym_functor_call] = STATE(118),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(118),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(118),
    [sym_binary_op] = STATE(118),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(145),
    [sym_anonymous] = ACTIONS(145),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [31] = {
    [sym__argument] = STATE(260),
    [sym_adt_constructor] = STATE(260),
    [sym_record_constructor] = STATE(260),
    [sym_constant] = STATE(260),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(260),
    [sym_as] = STATE(260),
    [sym_functor_call] = STATE(260),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(260),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(260),
    [sym_binary_op] = STATE(260),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(133),
    [sym_anonymous] = ACTIONS(133),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [32] = {
    [sym__argument] = STATE(110),
    [sym_adt_constructor] = STATE(110),
    [sym_record_constructor] = STATE(110),
    [sym_constant] = STATE(110),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(110),
    [sym_as] = STATE(110),
    [sym_functor_call] = STATE(110),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(110),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(110),
    [sym_binary_op] = STATE(110),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(147),
    [sym_anonymous] = ACTIONS(147),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [33] = {
    [sym__argument] = STATE(262),
    [sym_adt_constructor] = STATE(262),
    [sym_record_constructor] = STATE(262),
    [sym_constant] = STATE(262),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(262),
    [sym_as] = STATE(262),
    [sym_functor_call] = STATE(262),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(262),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(262),
    [sym_binary_op] = STATE(262),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(149),
    [sym_anonymous] = ACTIONS(149),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [34] = {
    [sym__argument] = STATE(110),
    [sym_adt_constructor] = STATE(110),
    [sym_record_constructor] = STATE(110),
    [sym_constant] = STATE(110),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(110),
    [sym_as] = STATE(110),
    [sym_functor_call] = STATE(110),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(110),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(110),
    [sym_binary_op] = STATE(110),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(147),
    [sym_anonymous] = ACTIONS(147),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(141),
    [anon_sym_lnot] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(135),
    [sym_ident] = ACTIONS(107),
  },
  [35] = {
    [sym__argument] = STATE(197),
    [sym_adt_constructor] = STATE(197),
    [sym_record_constructor] = STATE(197),
    [sym_constant] = STATE(197),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(197),
    [sym_as] = STATE(197),
    [sym_functor_call] = STATE(197),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(197),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(197),
    [sym_binary_op] = STATE(197),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(151),
    [sym_anonymous] = ACTIONS(151),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [36] = {
    [sym__argument] = STATE(127),
    [sym_adt_constructor] = STATE(127),
    [sym_record_constructor] = STATE(127),
    [sym_constant] = STATE(127),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(127),
    [sym_as] = STATE(127),
    [sym_functor_call] = STATE(127),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(127),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(127),
    [sym_binary_op] = STATE(127),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(153),
    [sym_anonymous] = ACTIONS(153),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [37] = {
    [sym__argument] = STATE(186),
    [sym_adt_constructor] = STATE(186),
    [sym_record_constructor] = STATE(186),
    [sym_constant] = STATE(186),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(186),
    [sym_as] = STATE(186),
    [sym_functor_call] = STATE(186),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(186),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(186),
    [sym_binary_op] = STATE(186),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(155),
    [sym_anonymous] = ACTIONS(155),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [38] = {
    [sym__argument] = STATE(178),
    [sym_adt_constructor] = STATE(178),
    [sym_record_constructor] = STATE(178),
    [sym_constant] = STATE(178),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(178),
    [sym_as] = STATE(178),
    [sym_functor_call] = STATE(178),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(178),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(178),
    [sym_binary_op] = STATE(178),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(157),
    [sym_anonymous] = ACTIONS(157),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [39] = {
    [sym__argument] = STATE(134),
    [sym_adt_constructor] = STATE(134),
    [sym_record_constructor] = STATE(134),
    [sym_constant] = STATE(134),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(134),
    [sym_as] = STATE(134),
    [sym_functor_call] = STATE(134),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(134),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(134),
    [sym_binary_op] = STATE(134),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(159),
    [sym_anonymous] = ACTIONS(159),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(141),
    [anon_sym_lnot] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(135),
    [sym_ident] = ACTIONS(107),
  },
  [40] = {
    [sym__argument] = STATE(229),
    [sym_adt_constructor] = STATE(229),
    [sym_record_constructor] = STATE(229),
    [sym_constant] = STATE(229),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(229),
    [sym_as] = STATE(229),
    [sym_functor_call] = STATE(229),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(229),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(229),
    [sym_binary_op] = STATE(229),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(161),
    [sym_anonymous] = ACTIONS(161),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [41] = {
    [sym__argument] = STATE(177),
    [sym_adt_constructor] = STATE(177),
    [sym_record_constructor] = STATE(177),
    [sym_constant] = STATE(177),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(177),
    [sym_as] = STATE(177),
    [sym_functor_call] = STATE(177),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(177),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(177),
    [sym_binary_op] = STATE(177),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(163),
    [sym_anonymous] = ACTIONS(163),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
  [42] = {
    [sym__argument] = STATE(152),
    [sym_adt_constructor] = STATE(152),
    [sym_record_constructor] = STATE(152),
    [sym_constant] = STATE(152),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(152),
    [sym_as] = STATE(152),
    [sym_functor_call] = STATE(152),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(152),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(39),
    [sym_unary_op] = STATE(152),
    [sym_binary_op] = STATE(152),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(135),
    [anon_sym_DOLLAR] = ACTIONS(137),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(165),
    [sym_anonymous] = ACTIONS(165),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(141),
    [anon_sym_lnot] = ACTIONS(141),
    [anon_sym_DASH] = ACTIONS(141),
    [anon_sym_TILDE] = ACTIONS(135),
    [sym_ident] = ACTIONS(107),
  },
  [43] = {
    [sym__argument] = STATE(259),
    [sym_adt_constructor] = STATE(259),
    [sym_record_constructor] = STATE(259),
    [sym_constant] = STATE(259),
    [sym_number] = STATE(95),
    [sym_integer] = STATE(97),
    [sym_decimal] = STATE(98),
    [sym_float] = STATE(97),
    [sym_variable] = STATE(259),
    [sym_as] = STATE(259),
    [sym_functor_call] = STATE(259),
    [sym_user_defined_functor] = STATE(480),
    [sym_intrinsic_functor] = STATE(480),
    [sym_aggregator] = STATE(259),
    [sym_range] = STATE(105),
    [sym__unary_operator] = STATE(30),
    [sym_unary_op] = STATE(259),
    [sym_binary_op] = STATE(259),
    [anon_sym_LPAREN2] = ACTIONS(103),
    [anon_sym_BANG] = ACTIONS(81),
    [anon_sym_DOLLAR] = ACTIONS(49),
    [anon_sym_LBRACK] = ACTIONS(51),
    [sym_ipv4] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [aux_sym_decimal_token1] = ACTIONS(55),
    [sym_unsigned] = ACTIONS(57),
    [sym_hex] = ACTIONS(59),
    [sym_binary] = ACTIONS(59),
    [aux_sym_float_token1] = ACTIONS(61),
    [sym_nil] = ACTIONS(167),
    [sym_anonymous] = ACTIONS(167),
    [anon_sym_as] = ACTIONS(65),
    [anon_sym_AT] = ACTIONS(67),
    [anon_sym_acos] = ACTIONS(69),
    [anon_sym_acosh] = ACTIONS(69),
    [anon_sym_asin] = ACTIONS(69),
    [anon_sym_asinh] = ACTIONS(69),
    [anon_sym_atan] = ACTIONS(69),
    [anon_sym_atanh] = ACTIONS(69),
    [anon_sym_cos] = ACTIONS(69),
    [anon_sym_cosh] = ACTIONS(69),
    [anon_sym_exp] = ACTIONS(69),
    [anon_sym_log] = ACTIONS(69),
    [anon_sym_sin] = ACTIONS(69),
    [anon_sym_sinh] = ACTIONS(69),
    [anon_sym_tan] = ACTIONS(69),
    [anon_sym_tanh] = ACTIONS(69),
    [anon_sym_autoinc] = ACTIONS(69),
    [anon_sym_cat] = ACTIONS(69),
    [anon_sym_max] = ACTIONS(71),
    [anon_sym_min] = ACTIONS(71),
    [anon_sym_ord] = ACTIONS(69),
    [anon_sym_strlen] = ACTIONS(69),
    [anon_sym_substr] = ACTIONS(69),
    [anon_sym_to_float] = ACTIONS(69),
    [anon_sym_to_number] = ACTIONS(69),
    [anon_sym_to_string] = ACTIONS(69),
    [anon_sym_to_unsigned] = ACTIONS(69),
    [anon_sym_mean] = ACTIONS(73),
    [anon_sym_sum] = ACTIONS(73),
    [anon_sym_count] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(77),
    [anon_sym_bnot] = ACTIONS(79),
    [anon_sym_lnot] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [anon_sym_TILDE] = ACTIONS(81),
    [sym_ident] = ACTIONS(107),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(173), 1,
      anon_sym_BANG,
    STATE(44), 2,
      sym_negation,
      aux_sym_conjunction_repeat1,
    ACTIONS(169), 10,
      anon_sym_LPAREN2,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_ipv4,
      sym_string,
      sym_unsigned,
      sym_hex,
      sym_binary,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(171), 42,
      anon_sym_true,
      anon_sym_false,
      anon_sym_match,
      anon_sym_contains,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      sym_nil,
      sym_anonymous,
      anon_sym_as,
      anon_sym_acos,
      anon_sym_acosh,
      anon_sym_asin,
      anon_sym_asinh,
      anon_sym_atan,
      anon_sym_atanh,
      anon_sym_cos,
      anon_sym_cosh,
      anon_sym_exp,
      anon_sym_log,
      anon_sym_sin,
      anon_sym_sinh,
      anon_sym_tan,
      anon_sym_tanh,
      anon_sym_autoinc,
      anon_sym_cat,
      anon_sym_max,
      anon_sym_min,
      anon_sym_ord,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_mean,
      anon_sym_sum,
      anon_sym_count,
      anon_sym_range,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_DASH,
      sym_ident,
  [64] = 2,
    ACTIONS(176), 11,
      anon_sym_LPAREN2,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_ipv4,
      sym_string,
      sym_unsigned,
      sym_hex,
      sym_binary,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(178), 42,
      anon_sym_true,
      anon_sym_false,
      anon_sym_match,
      anon_sym_contains,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      sym_nil,
      sym_anonymous,
      anon_sym_as,
      anon_sym_acos,
      anon_sym_acosh,
      anon_sym_asin,
      anon_sym_asinh,
      anon_sym_atan,
      anon_sym_atanh,
      anon_sym_cos,
      anon_sym_cosh,
      anon_sym_exp,
      anon_sym_log,
      anon_sym_sin,
      anon_sym_sinh,
      anon_sym_tan,
      anon_sym_tanh,
      anon_sym_autoinc,
      anon_sym_cat,
      anon_sym_max,
      anon_sym_min,
      anon_sym_ord,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_mean,
      anon_sym_sum,
      anon_sym_count,
      anon_sym_range,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_DASH,
      sym_ident,
  [122] = 2,
    ACTIONS(176), 11,
      anon_sym_LPAREN2,
      anon_sym_BANG,
      anon_sym_DOLLAR,
      anon_sym_LBRACK,
      sym_ipv4,
      sym_string,
      sym_unsigned,
      sym_hex,
      sym_binary,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(178), 42,
      anon_sym_true,
      anon_sym_false,
      anon_sym_match,
      anon_sym_contains,
      aux_sym_decimal_token1,
      aux_sym_float_token1,
      sym_nil,
      sym_anonymous,
      anon_sym_as,
      anon_sym_acos,
      anon_sym_acosh,
      anon_sym_asin,
      anon_sym_asinh,
      anon_sym_atan,
      anon_sym_atanh,
      anon_sym_cos,
      anon_sym_cosh,
      anon_sym_exp,
      anon_sym_log,
      anon_sym_sin,
      anon_sym_sinh,
      anon_sym_tan,
      anon_sym_tanh,
      anon_sym_autoinc,
      anon_sym_cat,
      anon_sym_max,
      anon_sym_min,
      anon_sym_ord,
      anon_sym_strlen,
      anon_sym_substr,
      anon_sym_to_float,
      anon_sym_to_number,
      anon_sym_to_string,
      anon_sym_to_unsigned,
      anon_sym_mean,
      anon_sym_sum,
      anon_sym_count,
      anon_sym_range,
      anon_sym_bnot,
      anon_sym_lnot,
      anon_sym_DASH,
      sym_ident,
  [180] = 23,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_POUNDif,
    ACTIONS(15), 1,
      sym_preproc_endif,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(21), 1,
      anon_sym_DOTpragma,
    ACTIONS(23), 1,
      anon_sym_DOTfunctor,
    ACTIONS(25), 1,
      anon_sym_DOTcomp,
    ACTIONS(27), 1,
      anon_sym_DOTinit,
    ACTIONS(31), 1,
      anon_sym_DOTdecl,
    ACTIONS(35), 1,
      anon_sym_DOTtype,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    STATE(329), 1,
      sym_atom,
    STATE(450), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(33), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(29), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(48), 16,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_pragma,
      sym_functor_decl,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_legacy_type_decl,
      sym_type_decl,
      aux_sym_program_repeat1,
  [273] = 23,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    ACTIONS(184), 1,
      anon_sym_POUNDline,
    ACTIONS(187), 1,
      anon_sym_POUNDinclude,
    ACTIONS(190), 1,
      anon_sym_POUNDdefine,
    ACTIONS(196), 1,
      anon_sym_POUNDif,
    ACTIONS(199), 1,
      sym_preproc_endif,
    ACTIONS(202), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(208), 1,
      anon_sym_DOTpragma,
    ACTIONS(211), 1,
      anon_sym_DOTfunctor,
    ACTIONS(214), 1,
      anon_sym_DOTcomp,
    ACTIONS(217), 1,
      anon_sym_DOTinit,
    ACTIONS(223), 1,
      anon_sym_DOTdecl,
    ACTIONS(229), 1,
      anon_sym_DOTtype,
    ACTIONS(232), 1,
      sym_ident,
    STATE(329), 1,
      sym_atom,
    STATE(450), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(193), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(226), 2,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
    ACTIONS(220), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(48), 16,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_pragma,
      sym_functor_decl,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_legacy_type_decl,
      sym_type_decl,
      aux_sym_program_repeat1,
  [366] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(195), 1,
      sym_choice_domain,
    ACTIONS(237), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(235), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [421] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(227), 1,
      sym_choice_domain,
    ACTIONS(245), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(243), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [476] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(205), 1,
      sym_choice_domain,
    ACTIONS(249), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(63), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(251), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(247), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [531] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(208), 1,
      sym_choice_domain,
    ACTIONS(255), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(49), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(257), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(253), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [586] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(209), 1,
      sym_choice_domain,
    ACTIONS(261), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(259), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [641] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(210), 1,
      sym_choice_domain,
    ACTIONS(265), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(263), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [696] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(213), 1,
      sym_choice_domain,
    ACTIONS(269), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(65), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(271), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(267), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [751] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(217), 1,
      sym_choice_domain,
    ACTIONS(275), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(273), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [806] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(221), 1,
      sym_choice_domain,
    ACTIONS(279), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(277), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [861] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(226), 1,
      sym_choice_domain,
    ACTIONS(283), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(69), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(285), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(281), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [916] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(225), 1,
      sym_choice_domain,
    ACTIONS(289), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(71), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(291), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(287), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [971] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(222), 1,
      sym_choice_domain,
    ACTIONS(295), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(66), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(297), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(293), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1026] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(219), 1,
      sym_choice_domain,
    ACTIONS(301), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(299), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1081] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(247), 1,
      sym_choice_domain,
    ACTIONS(305), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(57), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(307), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(303), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1136] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(204), 1,
      sym_choice_domain,
    ACTIONS(311), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(309), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1191] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(196), 1,
      sym_choice_domain,
    ACTIONS(315), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(50), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(317), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(313), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1246] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(194), 1,
      sym_choice_domain,
    ACTIONS(321), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(319), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1301] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(251), 1,
      sym_choice_domain,
    ACTIONS(325), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(323), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1356] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(255), 1,
      sym_choice_domain,
    ACTIONS(329), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(61), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(331), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(327), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1411] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(240), 1,
      sym_choice_domain,
    ACTIONS(335), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(56), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(337), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(333), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1466] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(244), 1,
      sym_choice_domain,
    ACTIONS(341), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(339), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1521] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(239), 1,
      sym_choice_domain,
    ACTIONS(345), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(54), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(347), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(343), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1576] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(246), 1,
      sym_choice_domain,
    ACTIONS(351), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(239), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(349), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1631] = 6,
    ACTIONS(241), 1,
      anon_sym_choice_DASHdomain,
    STATE(235), 1,
      sym_choice_domain,
    ACTIONS(355), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(53), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(357), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(353), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1686] = 4,
    ACTIONS(361), 2,
      anon_sym_POUNDif,
      sym_ident,
    STATE(73), 2,
      sym__relation_qualifier,
      aux_sym_relation_decl_repeat3,
    ACTIONS(363), 13,
      anon_sym_brie,
      anon_sym_btree,
      anon_sym_btree_delete,
      anon_sym_eqrel,
      anon_sym_inline,
      anon_sym_magic,
      anon_sym_no_inline,
      anon_sym_no_magic,
      anon_sym_override,
      anon_sym_overridable,
      anon_sym_input,
      anon_sym_output,
      anon_sym_printsize,
    ACTIONS(359), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_choice_DASHdomain,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [1736] = 21,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_POUNDif,
    ACTIONS(15), 1,
      sym_preproc_endif,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_DOTcomp,
    ACTIONS(27), 1,
      anon_sym_DOTinit,
    ACTIONS(31), 1,
      anon_sym_DOTdecl,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(366), 1,
      anon_sym_DOToverride,
    ACTIONS(368), 1,
      anon_sym_RBRACE,
    ACTIONS(372), 1,
      anon_sym_DOTtype,
    STATE(329), 1,
      sym_atom,
    STATE(444), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(370), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(78), 13,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [1819] = 21,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_POUNDif,
    ACTIONS(15), 1,
      sym_preproc_endif,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_DOTcomp,
    ACTIONS(27), 1,
      anon_sym_DOTinit,
    ACTIONS(31), 1,
      anon_sym_DOTdecl,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(366), 1,
      anon_sym_DOToverride,
    ACTIONS(372), 1,
      anon_sym_DOTtype,
    ACTIONS(374), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      sym_atom,
    STATE(444), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(370), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(78), 13,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [1902] = 21,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_POUNDif,
    ACTIONS(15), 1,
      sym_preproc_endif,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_DOTcomp,
    ACTIONS(27), 1,
      anon_sym_DOTinit,
    ACTIONS(31), 1,
      anon_sym_DOTdecl,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(366), 1,
      anon_sym_DOToverride,
    ACTIONS(372), 1,
      anon_sym_DOTtype,
    ACTIONS(376), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      sym_atom,
    STATE(444), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(370), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(75), 13,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [1985] = 21,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_POUNDif,
    ACTIONS(15), 1,
      sym_preproc_endif,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_DOTcomp,
    ACTIONS(27), 1,
      anon_sym_DOTinit,
    ACTIONS(31), 1,
      anon_sym_DOTdecl,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(366), 1,
      anon_sym_DOToverride,
    ACTIONS(372), 1,
      anon_sym_DOTtype,
    ACTIONS(378), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      sym_atom,
    STATE(444), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(370), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(79), 13,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [2068] = 21,
    ACTIONS(380), 1,
      anon_sym_POUNDline,
    ACTIONS(383), 1,
      anon_sym_POUNDinclude,
    ACTIONS(386), 1,
      anon_sym_POUNDdefine,
    ACTIONS(392), 1,
      anon_sym_POUNDif,
    ACTIONS(395), 1,
      sym_preproc_endif,
    ACTIONS(398), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(401), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(404), 1,
      anon_sym_DOTcomp,
    ACTIONS(407), 1,
      anon_sym_DOToverride,
    ACTIONS(410), 1,
      anon_sym_RBRACE,
    ACTIONS(412), 1,
      anon_sym_DOTinit,
    ACTIONS(418), 1,
      anon_sym_DOTdecl,
    ACTIONS(421), 1,
      anon_sym_DOTtype,
    ACTIONS(424), 1,
      sym_ident,
    STATE(329), 1,
      sym_atom,
    STATE(444), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(389), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(415), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(78), 13,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [2151] = 21,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_POUNDif,
    ACTIONS(15), 1,
      sym_preproc_endif,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_DOTcomp,
    ACTIONS(27), 1,
      anon_sym_DOTinit,
    ACTIONS(31), 1,
      anon_sym_DOTdecl,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(366), 1,
      anon_sym_DOToverride,
    ACTIONS(372), 1,
      anon_sym_DOTtype,
    ACTIONS(427), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      sym_atom,
    STATE(444), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(370), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(78), 13,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [2234] = 21,
    ACTIONS(5), 1,
      anon_sym_POUNDline,
    ACTIONS(7), 1,
      anon_sym_POUNDinclude,
    ACTIONS(9), 1,
      anon_sym_POUNDdefine,
    ACTIONS(13), 1,
      anon_sym_POUNDif,
    ACTIONS(15), 1,
      sym_preproc_endif,
    ACTIONS(17), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(25), 1,
      anon_sym_DOTcomp,
    ACTIONS(27), 1,
      anon_sym_DOTinit,
    ACTIONS(31), 1,
      anon_sym_DOTdecl,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(366), 1,
      anon_sym_DOToverride,
    ACTIONS(372), 1,
      anon_sym_DOTtype,
    ACTIONS(429), 1,
      anon_sym_RBRACE,
    STATE(329), 1,
      sym_atom,
    STATE(444), 1,
      sym__directive_qualifier,
    STATE(501), 1,
      sym_qualified_name,
    ACTIONS(11), 2,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
    ACTIONS(370), 4,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
    STATE(234), 4,
      sym_preproc_line,
      sym_preproc_include,
      sym_preproc_def,
      sym_preproc_ifdef,
    STATE(74), 13,
      sym_preproc,
      sym_block_comment,
      sym_line_comment,
      sym_component_decl,
      sym_component_init,
      sym_directive,
      sym__rule,
      sym_monotonic_rule,
      sym_subsumptive_rule,
      sym_fact,
      sym_relation_decl,
      sym_type_decl,
      aux_sym_component_decl_repeat2,
  [2317] = 4,
    ACTIONS(435), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(433), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(431), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2365] = 4,
    ACTIONS(441), 1,
      anon_sym_DOT,
    STATE(82), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(439), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(437), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2413] = 4,
    ACTIONS(435), 1,
      anon_sym_DOT,
    STATE(81), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(446), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(444), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2461] = 2,
    ACTIONS(450), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(448), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2504] = 2,
    ACTIONS(454), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(452), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2547] = 2,
    ACTIONS(458), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(456), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2590] = 2,
    ACTIONS(462), 9,
      anon_sym_COLON,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(460), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_COLON_DASH,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2633] = 2,
    ACTIONS(439), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(437), 30,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2676] = 3,
    ACTIONS(466), 1,
      anon_sym_LPAREN2,
    ACTIONS(468), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(464), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2721] = 2,
    ACTIONS(472), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(470), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2763] = 2,
    ACTIONS(476), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(474), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2805] = 2,
    ACTIONS(480), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(478), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2847] = 2,
    ACTIONS(484), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(482), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2889] = 2,
    ACTIONS(488), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(486), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2931] = 2,
    ACTIONS(492), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(490), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [2973] = 2,
    ACTIONS(496), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(494), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3015] = 2,
    ACTIONS(500), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(498), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3057] = 2,
    ACTIONS(504), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(502), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3099] = 2,
    ACTIONS(508), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(506), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3141] = 2,
    ACTIONS(512), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(510), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3183] = 2,
    ACTIONS(516), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(514), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3225] = 2,
    ACTIONS(520), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(518), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3267] = 2,
    ACTIONS(524), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(522), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3309] = 2,
    ACTIONS(528), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(526), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3351] = 2,
    ACTIONS(532), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(530), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3393] = 2,
    ACTIONS(536), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(534), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3435] = 2,
    ACTIONS(540), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(538), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3477] = 2,
    ACTIONS(544), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(542), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3519] = 2,
    ACTIONS(548), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(546), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3561] = 2,
    ACTIONS(552), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(550), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3603] = 2,
    ACTIONS(556), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(554), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3645] = 2,
    ACTIONS(560), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(558), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3687] = 2,
    ACTIONS(564), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(562), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3729] = 2,
    ACTIONS(568), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(566), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3771] = 2,
    ACTIONS(572), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(570), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3813] = 2,
    ACTIONS(576), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(574), 29,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_DOT,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3855] = 4,
    ACTIONS(552), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(550), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3900] = 5,
    ACTIONS(584), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(582), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_SEMI,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_RBRACK,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3947] = 5,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(444), 1,
      anon_sym_LPAREN2,
    STATE(81), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(572), 8,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(570), 23,
      anon_sym_RPAREN,
      anon_sym_SLASH,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [3992] = 6,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(590), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(592), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4036] = 5,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(590), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(592), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4077] = 5,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(594), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(596), 4,
      anon_sym_EQ,
      anon_sym_LT_EQ,
      anon_sym_BANG_EQ,
      anon_sym_GT_EQ,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4118] = 3,
    STATE(82), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(433), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(431), 22,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4154] = 3,
    STATE(123), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(446), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(444), 22,
      anon_sym_COMMA,
      anon_sym_SLASH,
      anon_sym_LPAREN2,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4190] = 3,
    ACTIONS(600), 1,
      anon_sym_POUNDif,
    ACTIONS(602), 1,
      anon_sym_LT,
    ACTIONS(598), 27,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COLON,
      anon_sym_DOTcomp,
      anon_sym_LBRACE,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4226] = 2,
    ACTIONS(606), 1,
      anon_sym_POUNDif,
    ACTIONS(604), 28,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4260] = 4,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(608), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4297] = 4,
    ACTIONS(439), 1,
      anon_sym_POUNDif,
    ACTIONS(610), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(437), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4334] = 2,
    ACTIONS(615), 1,
      anon_sym_POUNDif,
    ACTIONS(613), 27,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COLON,
      anon_sym_DOTcomp,
      anon_sym_LBRACE,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4367] = 2,
    ACTIONS(619), 1,
      anon_sym_POUNDif,
    ACTIONS(617), 27,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_COLON,
      anon_sym_DOTcomp,
      anon_sym_LBRACE,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4400] = 4,
    ACTIONS(446), 1,
      anon_sym_POUNDif,
    ACTIONS(621), 1,
      anon_sym_DOT,
    STATE(132), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(444), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4437] = 4,
    ACTIONS(433), 1,
      anon_sym_POUNDif,
    ACTIONS(621), 1,
      anon_sym_DOT,
    STATE(128), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(431), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4474] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_POUNDif,
    STATE(161), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(623), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4510] = 4,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(582), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(633), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(629), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4546] = 4,
    ACTIONS(637), 1,
      anon_sym_POUNDif,
    ACTIONS(639), 1,
      anon_sym_DOTplan,
    STATE(245), 1,
      sym_query_plan,
    ACTIONS(635), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4582] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(641), 1,
      anon_sym_RPAREN,
    STATE(413), 1,
      aux_sym_match_repeat1,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4622] = 2,
    ACTIONS(439), 2,
      anon_sym_POUNDif,
      anon_sym_DOT,
    ACTIONS(437), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4654] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(643), 1,
      anon_sym_RPAREN,
    STATE(370), 1,
      aux_sym_match_repeat1,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4694] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(647), 1,
      anon_sym_POUNDif,
    STATE(155), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(645), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4730] = 3,
    ACTIONS(550), 5,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(633), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(629), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4764] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RPAREN,
    STATE(403), 1,
      aux_sym_match_repeat1,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [4804] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_POUNDif,
    STATE(150), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(651), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4840] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(655), 1,
      anon_sym_POUNDif,
    STATE(160), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(651), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4876] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_POUNDif,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(657), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4912] = 5,
    ACTIONS(446), 1,
      anon_sym_POUNDif,
    ACTIONS(621), 1,
      anon_sym_DOT,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    STATE(132), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(444), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4950] = 4,
    ACTIONS(665), 1,
      anon_sym_POUNDif,
    ACTIONS(667), 1,
      anon_sym_PIPE,
    STATE(164), 1,
      aux_sym_adt_repeat1,
    ACTIONS(663), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [4986] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_POUNDif,
    STATE(159), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(657), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5022] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(671), 1,
      anon_sym_POUNDif,
    STATE(154), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(669), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5058] = 2,
    ACTIONS(675), 1,
      anon_sym_POUNDif,
    ACTIONS(673), 26,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5090] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(679), 1,
      anon_sym_POUNDif,
    STATE(160), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(677), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5126] = 4,
    ACTIONS(639), 1,
      anon_sym_DOTplan,
    ACTIONS(683), 1,
      anon_sym_POUNDif,
    STATE(263), 1,
      sym_query_plan,
    ACTIONS(681), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5162] = 4,
    ACTIONS(631), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(608), 3,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_SEMI,
    ACTIONS(633), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(629), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [5198] = 4,
    ACTIONS(687), 1,
      anon_sym_POUNDif,
    ACTIONS(689), 1,
      anon_sym_PIPE,
    STATE(153), 1,
      aux_sym_adt_repeat1,
    ACTIONS(685), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5234] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(694), 1,
      anon_sym_POUNDif,
    STATE(160), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(692), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5270] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(627), 1,
      anon_sym_POUNDif,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(623), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5306] = 4,
    ACTIONS(639), 1,
      anon_sym_DOTplan,
    ACTIONS(698), 1,
      anon_sym_POUNDif,
    STATE(220), 1,
      sym_query_plan,
    ACTIONS(696), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5342] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RPAREN,
    STATE(404), 1,
      aux_sym_match_repeat1,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [5382] = 4,
    ACTIONS(704), 1,
      anon_sym_COMMA,
    ACTIONS(707), 1,
      anon_sym_POUNDif,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(702), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5418] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(711), 1,
      anon_sym_POUNDif,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(709), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5454] = 4,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(718), 1,
      anon_sym_POUNDif,
    STATE(160), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(713), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5490] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(722), 1,
      anon_sym_POUNDif,
    STATE(158), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(720), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5526] = 4,
    ACTIONS(653), 1,
      anon_sym_COMMA,
    ACTIONS(726), 1,
      anon_sym_POUNDif,
    STATE(143), 1,
      aux_sym_choice_domain_repeat1,
    ACTIONS(724), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5562] = 6,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
    STATE(407), 1,
      aux_sym_record_constructor_repeat1,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [5602] = 4,
    ACTIONS(667), 1,
      anon_sym_PIPE,
    ACTIONS(732), 1,
      anon_sym_POUNDif,
    STATE(153), 1,
      aux_sym_adt_repeat1,
    ACTIONS(730), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5638] = 6,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(734), 1,
      anon_sym_RPAREN,
    STATE(405), 1,
      aux_sym_match_repeat1,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [5678] = 4,
    ACTIONS(625), 1,
      anon_sym_COMMA,
    ACTIONS(738), 1,
      anon_sym_POUNDif,
    STATE(144), 1,
      aux_sym_query_plan_repeat2,
    ACTIONS(736), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5714] = 4,
    ACTIONS(639), 1,
      anon_sym_DOTplan,
    ACTIONS(742), 1,
      anon_sym_POUNDif,
    STATE(233), 1,
      sym_query_plan,
    ACTIONS(740), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5750] = 4,
    ACTIONS(746), 1,
      anon_sym_COMMA,
    ACTIONS(749), 1,
      anon_sym_POUNDif,
    STATE(168), 1,
      aux_sym_directive_repeat1,
    ACTIONS(744), 23,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5785] = 2,
    ACTIONS(753), 1,
      anon_sym_POUNDif,
    ACTIONS(751), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5816] = 2,
    ACTIONS(757), 1,
      anon_sym_POUNDif,
    ACTIONS(755), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5847] = 2,
    ACTIONS(761), 1,
      anon_sym_POUNDif,
    ACTIONS(759), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5878] = 2,
    ACTIONS(765), 1,
      anon_sym_POUNDif,
    ACTIONS(763), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [5909] = 4,
    ACTIONS(767), 1,
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(439), 3,
      anon_sym_POUNDif,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(437), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [5944] = 4,
    ACTIONS(770), 1,
      anon_sym_DOT,
    STATE(173), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(433), 3,
      anon_sym_POUNDif,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(431), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [5979] = 4,
    ACTIONS(770), 1,
      anon_sym_DOT,
    STATE(174), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(446), 3,
      anon_sym_POUNDif,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(444), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6014] = 5,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(776), 1,
      anon_sym_POUNDif,
    ACTIONS(778), 1,
      anon_sym_LPAREN2,
    STATE(189), 1,
      aux_sym_directive_repeat1,
    ACTIONS(772), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6051] = 4,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(780), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6086] = 5,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    ACTIONS(784), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6123] = 2,
    ACTIONS(788), 1,
      anon_sym_POUNDif,
    ACTIONS(786), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6154] = 2,
    ACTIONS(792), 1,
      anon_sym_POUNDif,
    ACTIONS(790), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6185] = 2,
    ACTIONS(796), 1,
      anon_sym_POUNDif,
    ACTIONS(794), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6216] = 2,
    ACTIONS(800), 1,
      anon_sym_POUNDif,
    ACTIONS(798), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6247] = 2,
    ACTIONS(804), 1,
      anon_sym_POUNDif,
    ACTIONS(802), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6278] = 2,
    ACTIONS(808), 1,
      anon_sym_POUNDif,
    ACTIONS(806), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6309] = 2,
    ACTIONS(812), 1,
      anon_sym_POUNDif,
    ACTIONS(810), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6340] = 4,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(814), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6375] = 2,
    ACTIONS(818), 1,
      anon_sym_POUNDif,
    ACTIONS(816), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6406] = 2,
    ACTIONS(718), 1,
      anon_sym_POUNDif,
    ACTIONS(713), 25,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6437] = 5,
    ACTIONS(774), 1,
      anon_sym_COMMA,
    ACTIONS(822), 1,
      anon_sym_POUNDif,
    ACTIONS(824), 1,
      anon_sym_LPAREN2,
    STATE(168), 1,
      aux_sym_directive_repeat1,
    ACTIONS(820), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6474] = 2,
    ACTIONS(439), 4,
      anon_sym_POUNDif,
      anon_sym_stateful,
      anon_sym_DOT,
      sym_ident,
    ACTIONS(437), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [6504] = 2,
    ACTIONS(828), 1,
      anon_sym_POUNDif,
    ACTIONS(826), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6534] = 4,
    ACTIONS(832), 1,
      anon_sym_POUNDif,
    ACTIONS(834), 1,
      anon_sym_PIPE,
    STATE(236), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(830), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6568] = 2,
    ACTIONS(838), 1,
      anon_sym_POUNDif,
    ACTIONS(836), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6598] = 2,
    ACTIONS(842), 1,
      anon_sym_POUNDif,
    ACTIONS(840), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6628] = 2,
    ACTIONS(846), 1,
      anon_sym_POUNDif,
    ACTIONS(844), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6658] = 2,
    ACTIONS(850), 1,
      anon_sym_POUNDif,
    ACTIONS(848), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6688] = 4,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [6722] = 2,
    ACTIONS(854), 1,
      anon_sym_POUNDif,
    ACTIONS(852), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6752] = 2,
    ACTIONS(858), 1,
      anon_sym_POUNDif,
    ACTIONS(856), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6782] = 2,
    ACTIONS(862), 1,
      anon_sym_POUNDif,
    ACTIONS(860), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6812] = 2,
    ACTIONS(866), 1,
      anon_sym_POUNDif,
    ACTIONS(864), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6842] = 4,
    ACTIONS(757), 1,
      anon_sym_POUNDif,
    ACTIONS(868), 1,
      anon_sym_PIPE,
    STATE(202), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(755), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6876] = 2,
    ACTIONS(873), 1,
      anon_sym_POUNDif,
    ACTIONS(871), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6906] = 2,
    ACTIONS(877), 1,
      anon_sym_POUNDif,
    ACTIONS(875), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6936] = 2,
    ACTIONS(881), 1,
      anon_sym_POUNDif,
    ACTIONS(879), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6966] = 2,
    ACTIONS(885), 1,
      anon_sym_POUNDif,
    ACTIONS(883), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [6996] = 2,
    ACTIONS(889), 1,
      anon_sym_POUNDif,
    ACTIONS(887), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7026] = 2,
    ACTIONS(893), 1,
      anon_sym_POUNDif,
    ACTIONS(891), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7056] = 2,
    ACTIONS(897), 1,
      anon_sym_POUNDif,
    ACTIONS(895), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7086] = 2,
    ACTIONS(901), 1,
      anon_sym_POUNDif,
    ACTIONS(899), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7116] = 2,
    ACTIONS(905), 1,
      anon_sym_POUNDif,
    ACTIONS(903), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7146] = 2,
    ACTIONS(909), 1,
      anon_sym_POUNDif,
    ACTIONS(907), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7176] = 2,
    ACTIONS(913), 1,
      anon_sym_POUNDif,
    ACTIONS(911), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7206] = 2,
    ACTIONS(917), 1,
      anon_sym_POUNDif,
    ACTIONS(915), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7236] = 2,
    ACTIONS(921), 1,
      anon_sym_POUNDif,
    ACTIONS(919), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7266] = 2,
    ACTIONS(925), 1,
      anon_sym_POUNDif,
    ACTIONS(923), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7296] = 2,
    ACTIONS(929), 1,
      anon_sym_POUNDif,
    ACTIONS(927), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7326] = 2,
    ACTIONS(933), 1,
      anon_sym_POUNDif,
    ACTIONS(931), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7356] = 2,
    ACTIONS(937), 1,
      anon_sym_POUNDif,
    ACTIONS(935), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7386] = 2,
    ACTIONS(941), 1,
      anon_sym_POUNDif,
    ACTIONS(939), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7416] = 2,
    ACTIONS(945), 1,
      anon_sym_POUNDif,
    ACTIONS(943), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7446] = 2,
    ACTIONS(949), 1,
      anon_sym_POUNDif,
    ACTIONS(947), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7476] = 2,
    ACTIONS(953), 1,
      anon_sym_POUNDif,
    ACTIONS(951), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7506] = 2,
    ACTIONS(957), 1,
      anon_sym_POUNDif,
    ACTIONS(955), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7536] = 2,
    ACTIONS(961), 1,
      anon_sym_POUNDif,
    ACTIONS(959), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7566] = 2,
    ACTIONS(965), 1,
      anon_sym_POUNDif,
    ACTIONS(963), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7596] = 2,
    ACTIONS(969), 1,
      anon_sym_POUNDif,
    ACTIONS(967), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7626] = 2,
    ACTIONS(973), 1,
      anon_sym_POUNDif,
    ACTIONS(971), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7656] = 4,
    ACTIONS(975), 1,
      anon_sym_RPAREN,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [7690] = 2,
    ACTIONS(979), 1,
      anon_sym_POUNDif,
    ACTIONS(977), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7720] = 2,
    ACTIONS(983), 1,
      anon_sym_POUNDif,
    ACTIONS(981), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7750] = 2,
    ACTIONS(987), 1,
      anon_sym_POUNDif,
    ACTIONS(985), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7780] = 2,
    ACTIONS(991), 1,
      anon_sym_POUNDif,
    ACTIONS(989), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7810] = 2,
    ACTIONS(995), 1,
      anon_sym_POUNDif,
    ACTIONS(993), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7840] = 2,
    ACTIONS(999), 1,
      anon_sym_POUNDif,
    ACTIONS(997), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7870] = 4,
    ACTIONS(834), 1,
      anon_sym_PIPE,
    ACTIONS(1003), 1,
      anon_sym_POUNDif,
    STATE(202), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(1001), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7904] = 2,
    ACTIONS(1007), 1,
      anon_sym_POUNDif,
    ACTIONS(1005), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7934] = 2,
    ACTIONS(1011), 1,
      anon_sym_POUNDif,
    ACTIONS(1009), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7964] = 2,
    ACTIONS(1015), 1,
      anon_sym_POUNDif,
    ACTIONS(1013), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [7994] = 2,
    ACTIONS(1019), 1,
      anon_sym_POUNDif,
    ACTIONS(1017), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8024] = 2,
    ACTIONS(1023), 1,
      anon_sym_POUNDif,
    ACTIONS(1021), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8054] = 4,
    ACTIONS(439), 1,
      anon_sym_POUNDif,
    ACTIONS(1025), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(437), 22,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [8088] = 2,
    ACTIONS(1030), 1,
      anon_sym_POUNDif,
    ACTIONS(1028), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8118] = 2,
    ACTIONS(1034), 1,
      anon_sym_POUNDif,
    ACTIONS(1032), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8148] = 2,
    ACTIONS(1038), 1,
      anon_sym_POUNDif,
    ACTIONS(1036), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8178] = 2,
    ACTIONS(1042), 1,
      anon_sym_POUNDif,
    ACTIONS(1040), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8208] = 2,
    ACTIONS(1046), 1,
      anon_sym_POUNDif,
    ACTIONS(1044), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8238] = 2,
    ACTIONS(1050), 1,
      anon_sym_POUNDif,
    ACTIONS(1048), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8268] = 4,
    ACTIONS(1054), 1,
      anon_sym_POUNDif,
    ACTIONS(1056), 1,
      anon_sym_EQ,
    ACTIONS(1058), 1,
      anon_sym_LT_COLON,
    ACTIONS(1052), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8302] = 2,
    ACTIONS(1062), 1,
      anon_sym_POUNDif,
    ACTIONS(1060), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8332] = 2,
    ACTIONS(1066), 1,
      anon_sym_POUNDif,
    ACTIONS(1064), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8362] = 2,
    ACTIONS(1070), 1,
      anon_sym_POUNDif,
    ACTIONS(1068), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8392] = 2,
    ACTIONS(1074), 1,
      anon_sym_POUNDif,
    ACTIONS(1072), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8422] = 2,
    ACTIONS(1078), 1,
      anon_sym_POUNDif,
    ACTIONS(1076), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8452] = 2,
    ACTIONS(1082), 1,
      anon_sym_POUNDif,
    ACTIONS(1080), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8482] = 2,
    ACTIONS(1086), 1,
      anon_sym_POUNDif,
    ACTIONS(1084), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8512] = 2,
    ACTIONS(1090), 1,
      anon_sym_POUNDif,
    ACTIONS(1088), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8542] = 4,
    ACTIONS(446), 1,
      anon_sym_POUNDif,
    ACTIONS(1092), 1,
      anon_sym_DOT,
    STATE(261), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(444), 22,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [8576] = 4,
    ACTIONS(1094), 1,
      anon_sym_COMMA,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [8610] = 4,
    ACTIONS(1096), 1,
      anon_sym_COLON,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [8644] = 4,
    ACTIONS(433), 1,
      anon_sym_POUNDif,
    ACTIONS(1092), 1,
      anon_sym_DOT,
    STATE(242), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(431), 22,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [8678] = 4,
    ACTIONS(1098), 1,
      anon_sym_COMMA,
    ACTIONS(586), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(580), 6,
      anon_sym_STAR,
      anon_sym_CARET,
      anon_sym_bshr,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_GT_GT,
    ACTIONS(578), 16,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_land,
      anon_sym_lor,
      anon_sym_lxor,
      anon_sym_band,
      anon_sym_bor,
      anon_sym_bxor,
      anon_sym_bshl,
      anon_sym_bshru,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_STAR_STAR,
      anon_sym_CARET_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT_GT,
  [8712] = 2,
    ACTIONS(1102), 1,
      anon_sym_POUNDif,
    ACTIONS(1100), 24,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8742] = 5,
    ACTIONS(446), 1,
      anon_sym_POUNDif,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
    ACTIONS(1092), 1,
      anon_sym_DOT,
    STATE(261), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(444), 20,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [8777] = 2,
    ACTIONS(606), 3,
      anon_sym_POUNDif,
      anon_sym_stateful,
      sym_ident,
    ACTIONS(604), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [8806] = 2,
    ACTIONS(439), 2,
      anon_sym_POUNDif,
      anon_sym_DOT,
    ACTIONS(437), 22,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_COMMA,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_PIPE,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [8835] = 3,
    ACTIONS(1108), 1,
      anon_sym_stateful,
    ACTIONS(1106), 2,
      anon_sym_POUNDif,
      sym_ident,
    ACTIONS(1104), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [8866] = 3,
    ACTIONS(1114), 1,
      anon_sym_stateful,
    ACTIONS(1112), 2,
      anon_sym_POUNDif,
      sym_ident,
    ACTIONS(1110), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [8897] = 3,
    ACTIONS(1120), 1,
      anon_sym_stateful,
    ACTIONS(1118), 2,
      anon_sym_POUNDif,
      sym_ident,
    ACTIONS(1116), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [8928] = 3,
    ACTIONS(1124), 1,
      anon_sym_POUNDif,
    ACTIONS(1126), 1,
      sym_string,
    ACTIONS(1122), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [8959] = 3,
    ACTIONS(1132), 1,
      anon_sym_stateful,
    ACTIONS(1130), 2,
      anon_sym_POUNDif,
      sym_ident,
    ACTIONS(1128), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [8990] = 3,
    ACTIONS(1138), 1,
      anon_sym_stateful,
    ACTIONS(1136), 2,
      anon_sym_POUNDif,
      sym_ident,
    ACTIONS(1134), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [9021] = 3,
    ACTIONS(1144), 1,
      anon_sym_stateful,
    ACTIONS(1142), 2,
      anon_sym_POUNDif,
      sym_ident,
    ACTIONS(1140), 21,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
  [9052] = 2,
    ACTIONS(1148), 1,
      anon_sym_POUNDif,
    ACTIONS(1146), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9080] = 2,
    ACTIONS(1152), 1,
      anon_sym_POUNDif,
    ACTIONS(1150), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9108] = 2,
    ACTIONS(1156), 1,
      anon_sym_POUNDif,
    ACTIONS(1154), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9136] = 2,
    ACTIONS(1160), 1,
      anon_sym_POUNDif,
    ACTIONS(1158), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9164] = 2,
    ACTIONS(1164), 1,
      anon_sym_POUNDif,
    ACTIONS(1162), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9192] = 2,
    ACTIONS(1168), 1,
      anon_sym_POUNDif,
    ACTIONS(1166), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9220] = 2,
    ACTIONS(1172), 1,
      anon_sym_POUNDif,
    ACTIONS(1170), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9248] = 2,
    ACTIONS(1176), 1,
      anon_sym_POUNDif,
    ACTIONS(1174), 22,
      ts_builtin_sym_end,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTpragma,
      anon_sym_DOTfunctor,
      anon_sym_DOTcomp,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTnumber_type,
      anon_sym_DOTsymbol_type,
      anon_sym_DOTtype,
      sym_ident,
  [9276] = 5,
    ACTIONS(776), 1,
      anon_sym_POUNDif,
    ACTIONS(778), 1,
      anon_sym_LPAREN2,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(283), 1,
      aux_sym_directive_repeat1,
    ACTIONS(772), 19,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9310] = 5,
    ACTIONS(822), 1,
      anon_sym_POUNDif,
    ACTIONS(824), 1,
      anon_sym_LPAREN2,
    ACTIONS(1178), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_directive_repeat1,
    ACTIONS(820), 19,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9344] = 4,
    ACTIONS(749), 1,
      anon_sym_POUNDif,
    ACTIONS(1180), 1,
      anon_sym_COMMA,
    STATE(284), 1,
      aux_sym_directive_repeat1,
    ACTIONS(744), 20,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_LPAREN2,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9376] = 4,
    ACTIONS(832), 1,
      anon_sym_POUNDif,
    ACTIONS(1183), 1,
      anon_sym_PIPE,
    STATE(288), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(830), 19,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9407] = 4,
    ACTIONS(1054), 1,
      anon_sym_POUNDif,
    ACTIONS(1185), 1,
      anon_sym_EQ,
    ACTIONS(1187), 1,
      anon_sym_LT_COLON,
    ACTIONS(1052), 19,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9438] = 4,
    ACTIONS(757), 1,
      anon_sym_POUNDif,
    ACTIONS(1189), 1,
      anon_sym_PIPE,
    STATE(287), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(755), 19,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9469] = 4,
    ACTIONS(1003), 1,
      anon_sym_POUNDif,
    ACTIONS(1183), 1,
      anon_sym_PIPE,
    STATE(287), 1,
      aux_sym_type_union_repeat1,
    ACTIONS(1001), 19,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9500] = 2,
    ACTIONS(1192), 1,
      anon_sym_POUNDif,
    ACTIONS(410), 19,
      anon_sym_POUNDline,
      anon_sym_POUNDinclude,
      anon_sym_POUNDdefine,
      anon_sym_POUNDifdef,
      anon_sym_POUNDifndef,
      sym_preproc_endif,
      anon_sym_SLASH_STAR,
      anon_sym_SLASH_SLASH,
      anon_sym_DOTcomp,
      anon_sym_DOToverride,
      anon_sym_RBRACE,
      anon_sym_DOTinit,
      anon_sym_DOTinput,
      anon_sym_DOTlimitsize,
      anon_sym_DOToutput,
      anon_sym_DOTprintsize,
      anon_sym_DOTdecl,
      anon_sym_DOTtype,
      sym_ident,
  [9525] = 8,
    ACTIONS(55), 1,
      aux_sym_decimal_token1,
    ACTIONS(57), 1,
      sym_unsigned,
    ACTIONS(1196), 1,
      aux_sym_float_token1,
    STATE(98), 1,
      sym_decimal,
    ACTIONS(59), 2,
      sym_hex,
      sym_binary,
    ACTIONS(1194), 2,
      sym_string,
      sym_ident,
    STATE(97), 2,
      sym_integer,
      sym_float,
    STATE(401), 2,
      sym__directive_value,
      sym_number,
  [9554] = 7,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1200), 1,
      anon_sym_RPAREN,
    ACTIONS(1204), 1,
      sym_ident,
    STATE(433), 1,
      aux_sym_functor_decl_repeat1,
    STATE(434), 1,
      sym_attribute,
    STATE(435), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9581] = 8,
    ACTIONS(55), 1,
      aux_sym_decimal_token1,
    ACTIONS(57), 1,
      sym_unsigned,
    ACTIONS(1196), 1,
      aux_sym_float_token1,
    STATE(98), 1,
      sym_decimal,
    ACTIONS(59), 2,
      sym_hex,
      sym_binary,
    ACTIONS(1206), 2,
      sym_string,
      sym_ident,
    STATE(97), 2,
      sym_integer,
      sym_float,
    STATE(463), 2,
      sym__directive_value,
      sym_number,
  [9610] = 8,
    ACTIONS(55), 1,
      aux_sym_decimal_token1,
    ACTIONS(57), 1,
      sym_unsigned,
    ACTIONS(1196), 1,
      aux_sym_float_token1,
    STATE(98), 1,
      sym_decimal,
    ACTIONS(59), 2,
      sym_hex,
      sym_binary,
    ACTIONS(1208), 2,
      sym_string,
      sym_ident,
    STATE(97), 2,
      sym_integer,
      sym_float,
    STATE(410), 2,
      sym__directive_value,
      sym_number,
  [9639] = 5,
    ACTIONS(1210), 1,
      anon_sym_LBRACK,
    ACTIONS(1212), 1,
      sym_ident,
    STATE(146), 1,
      sym__adt_branch,
    STATE(285), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9660] = 5,
    ACTIONS(1210), 1,
      anon_sym_LBRACK,
    ACTIONS(1214), 1,
      sym_ident,
    STATE(146), 1,
      sym__adt_branch,
    STATE(192), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9681] = 4,
    ACTIONS(1204), 1,
      sym_ident,
    STATE(459), 1,
      sym_attribute,
    STATE(441), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9699] = 3,
    ACTIONS(1216), 1,
      sym_ident,
    STATE(170), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9714] = 3,
    ACTIONS(1220), 1,
      sym_ident,
    STATE(271), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1218), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9729] = 3,
    ACTIONS(1222), 1,
      sym_ident,
    STATE(353), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9744] = 3,
    ACTIONS(1216), 1,
      sym_ident,
    STATE(252), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9759] = 3,
    ACTIONS(1220), 1,
      sym_ident,
    STATE(273), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1218), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9774] = 3,
    ACTIONS(1222), 1,
      sym_ident,
    STATE(467), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9789] = 3,
    ACTIONS(1220), 1,
      sym_ident,
    STATE(269), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1218), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9804] = 3,
    ACTIONS(1220), 1,
      sym_ident,
    STATE(268), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1218), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9819] = 3,
    ACTIONS(1220), 1,
      sym_ident,
    STATE(267), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1218), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9834] = 3,
    ACTIONS(1216), 1,
      sym_ident,
    STATE(276), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9849] = 3,
    ACTIONS(1224), 1,
      sym_ident,
    STATE(252), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9864] = 3,
    ACTIONS(1224), 1,
      sym_ident,
    STATE(170), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1202), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9879] = 3,
    ACTIONS(1220), 1,
      sym_ident,
    STATE(272), 3,
      sym__type_name,
      sym_primitive_type,
      sym_qualified_name,
    ACTIONS(1218), 4,
      anon_sym_number,
      anon_sym_symbol,
      anon_sym_unsigned,
      anon_sym_float,
  [9894] = 2,
    ACTIONS(1226), 1,
      sym_ident,
    STATE(250), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [9906] = 2,
    ACTIONS(1228), 1,
      sym_ident,
    STATE(250), 6,
      sym_legacy_bare_type_decl,
      sym_subtype,
      sym_type_synonym,
      sym_type_union,
      sym_type_record,
      sym_adt,
  [9918] = 1,
    ACTIONS(1230), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9926] = 1,
    ACTIONS(1232), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9934] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(327), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1236), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [9946] = 1,
    ACTIONS(1238), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [9954] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1240), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [9966] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1242), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [9978] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1242), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [9990] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1244), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10002] = 1,
    ACTIONS(1246), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10010] = 1,
    ACTIONS(1248), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10018] = 3,
    ACTIONS(1250), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1253), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10030] = 1,
    ACTIONS(1255), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10038] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(318), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1244), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10050] = 5,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1259), 1,
      anon_sym_RBRACE,
    ACTIONS(1261), 1,
      sym_ident,
    STATE(389), 1,
      sym_attribute,
    STATE(391), 1,
      aux_sym_type_record_repeat1,
  [10066] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(319), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1263), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10078] = 3,
    ACTIONS(1234), 1,
      anon_sym_COMMA,
    STATE(322), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1263), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_SEMI,
  [10090] = 5,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1261), 1,
      sym_ident,
    ACTIONS(1265), 1,
      anon_sym_RBRACK,
    STATE(377), 1,
      aux_sym_type_record_repeat1,
    STATE(378), 1,
      sym_attribute,
  [10106] = 5,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1269), 1,
      anon_sym_COLON_DASH,
    ACTIONS(1271), 1,
      anon_sym_DOT,
    ACTIONS(1273), 1,
      anon_sym_LT_EQ,
    STATE(415), 1,
      aux_sym_monotonic_rule_repeat1,
  [10122] = 5,
    ACTIONS(1261), 1,
      sym_ident,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1277), 1,
      anon_sym_RPAREN,
    STATE(368), 1,
      sym_attribute,
    STATE(376), 1,
      aux_sym_relation_decl_repeat2,
  [10138] = 5,
    ACTIONS(1261), 1,
      sym_ident,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1279), 1,
      anon_sym_RPAREN,
    STATE(423), 1,
      aux_sym_relation_decl_repeat2,
    STATE(424), 1,
      sym_attribute,
  [10154] = 5,
    ACTIONS(1261), 1,
      sym_ident,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1281), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_relation_decl_repeat2,
    STATE(383), 1,
      sym_attribute,
  [10170] = 4,
    ACTIONS(435), 1,
      anon_sym_DOT,
    ACTIONS(1283), 1,
      anon_sym_COLON,
    STATE(81), 1,
      aux_sym_qualified_name_repeat1,
    ACTIONS(444), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10184] = 1,
    ACTIONS(1285), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10192] = 1,
    ACTIONS(1253), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10200] = 1,
    ACTIONS(1287), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10208] = 1,
    ACTIONS(1289), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10216] = 1,
    ACTIONS(1291), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10224] = 1,
    ACTIONS(1293), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10232] = 1,
    ACTIONS(1295), 5,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10240] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(351), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1236), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10251] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1242), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10262] = 3,
    ACTIONS(1299), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1253), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10273] = 4,
    ACTIONS(1302), 1,
      aux_sym_preproc_line_token1,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1306), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_query_plan_repeat1,
  [10286] = 4,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1310), 1,
      anon_sym_RPAREN,
    ACTIONS(1312), 1,
      sym_ident,
    STATE(367), 1,
      aux_sym_directive_repeat2,
  [10299] = 3,
    ACTIONS(1314), 1,
      anon_sym_COMMA,
    STATE(346), 1,
      aux_sym_relation_decl_repeat1,
    ACTIONS(1317), 2,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
  [10310] = 1,
    ACTIONS(1319), 4,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10317] = 4,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(1321), 1,
      anon_sym_LBRACE,
    STATE(94), 1,
      sym_atom,
    STATE(501), 1,
      sym_qualified_name,
  [10330] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(355), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1263), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10341] = 3,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(354), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1323), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [10352] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1263), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10363] = 4,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1329), 1,
      anon_sym_LPAREN2,
    ACTIONS(1331), 1,
      sym_ident,
    STATE(429), 1,
      aux_sym_relation_decl_repeat1,
  [10376] = 1,
    ACTIONS(1333), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [10383] = 3,
    ACTIONS(1335), 1,
      anon_sym_SEMI,
    STATE(354), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1319), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [10394] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1244), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10405] = 3,
    ACTIONS(1338), 1,
      anon_sym_COMMA,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
    ACTIONS(1341), 2,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [10416] = 4,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1343), 1,
      anon_sym_RPAREN,
    ACTIONS(1345), 1,
      anon_sym_EQ,
    STATE(374), 1,
      aux_sym_directive_repeat2,
  [10429] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(364), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1242), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10440] = 4,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1347), 1,
      aux_sym_preproc_line_token1,
    ACTIONS(1349), 1,
      anon_sym_RPAREN,
    STATE(414), 1,
      aux_sym_query_plan_repeat1,
  [10453] = 3,
    ACTIONS(1325), 1,
      anon_sym_SEMI,
    STATE(350), 1,
      aux_sym_disjunction_repeat1,
    ACTIONS(1351), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACE,
  [10464] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(342), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1244), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10475] = 4,
    ACTIONS(37), 1,
      sym_ident,
    ACTIONS(1353), 1,
      anon_sym_LBRACE,
    STATE(92), 1,
      sym_atom,
    STATE(501), 1,
      sym_qualified_name,
  [10488] = 4,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1355), 1,
      anon_sym_RPAREN,
    ACTIONS(1357), 1,
      anon_sym_EQ,
    STATE(387), 1,
      aux_sym_directive_repeat2,
  [10501] = 3,
    ACTIONS(1297), 1,
      anon_sym_COMMA,
    STATE(343), 1,
      aux_sym_conjunction_repeat2,
    ACTIONS(1240), 2,
      anon_sym_DOT,
      anon_sym_SEMI,
  [10512] = 4,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1359), 1,
      anon_sym_RPAREN,
    ACTIONS(1361), 1,
      sym_ident,
    STATE(372), 1,
      aux_sym_directive_repeat2,
  [10525] = 2,
    ACTIONS(1365), 1,
      anon_sym_EQ,
    ACTIONS(1363), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [10533] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1367), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_directive_repeat2,
  [10543] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1369), 1,
      anon_sym_RPAREN,
    STATE(426), 1,
      aux_sym_relation_decl_repeat2,
  [10553] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1371), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10563] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1373), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10573] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1375), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10583] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1377), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_directive_repeat2,
  [10593] = 3,
    ACTIONS(1379), 1,
      anon_sym_COMMA,
    ACTIONS(1382), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_directive_repeat2,
  [10603] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1384), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_directive_repeat2,
  [10613] = 1,
    ACTIONS(1386), 3,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
  [10619] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1388), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_relation_decl_repeat2,
  [10629] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1390), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
  [10639] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1392), 1,
      anon_sym_RBRACK,
    STATE(381), 1,
      aux_sym_type_record_repeat1,
  [10649] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1394), 1,
      anon_sym_RPAREN,
    STATE(380), 1,
      aux_sym_relation_decl_repeat1,
  [10659] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1396), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_relation_decl_repeat1,
  [10669] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1398), 1,
      anon_sym_RBRACK,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
  [10679] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1400), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_relation_decl_repeat2,
  [10689] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1402), 1,
      anon_sym_RPAREN,
    STATE(420), 1,
      aux_sym_relation_decl_repeat2,
  [10699] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1404), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_relation_decl_repeat2,
  [10709] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1406), 1,
      anon_sym_LPAREN2,
    STATE(346), 1,
      aux_sym_relation_decl_repeat1,
  [10719] = 3,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    ACTIONS(1410), 1,
      anon_sym_LBRACE,
    STATE(421), 1,
      aux_sym_component_decl_repeat1,
  [10729] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1412), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_directive_repeat2,
  [10739] = 3,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    ACTIONS(1416), 1,
      anon_sym_GT,
    STATE(395), 1,
      aux_sym_component_type_repeat1,
  [10749] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1418), 1,
      anon_sym_RBRACE,
    STATE(396), 1,
      aux_sym_type_record_repeat1,
  [10759] = 3,
    ACTIONS(1420), 1,
      anon_sym_COMMA,
    ACTIONS(1423), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_functor_decl_repeat1,
  [10769] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1425), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
  [10779] = 3,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1427), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_functor_decl_repeat1,
  [10789] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1429), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_query_plan_repeat1,
  [10799] = 3,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1431), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_functor_decl_repeat1,
  [10809] = 3,
    ACTIONS(1433), 1,
      anon_sym_COMMA,
    ACTIONS(1436), 1,
      anon_sym_GT,
    STATE(395), 1,
      aux_sym_component_type_repeat1,
  [10819] = 3,
    ACTIONS(1257), 1,
      anon_sym_COMMA,
    ACTIONS(1438), 1,
      anon_sym_RBRACE,
    STATE(356), 1,
      aux_sym_type_record_repeat1,
  [10829] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1440), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_query_plan_repeat1,
  [10839] = 3,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    ACTIONS(1442), 1,
      anon_sym_COMMA,
    STATE(398), 1,
      aux_sym_record_constructor_repeat1,
  [10849] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1445), 1,
      anon_sym_RPAREN,
    STATE(393), 1,
      aux_sym_query_plan_repeat1,
  [10859] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1447), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_directive_repeat2,
  [10869] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1449), 1,
      anon_sym_RPAREN,
    STATE(431), 1,
      aux_sym_directive_repeat2,
  [10879] = 3,
    ACTIONS(1451), 1,
      anon_sym_COMMA,
    ACTIONS(1454), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10889] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1456), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10899] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1458), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10909] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1460), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10919] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1462), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10929] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(1464), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      aux_sym_record_constructor_repeat1,
  [10939] = 3,
    ACTIONS(1351), 1,
      anon_sym_DOT,
    ACTIONS(1466), 1,
      anon_sym_SEMI,
    STATE(411), 1,
      aux_sym_disjunction_repeat1,
  [10949] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1468), 1,
      anon_sym_RPAREN,
    STATE(346), 1,
      aux_sym_relation_decl_repeat1,
  [10959] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1470), 1,
      anon_sym_RPAREN,
    STATE(400), 1,
      aux_sym_directive_repeat2,
  [10969] = 3,
    ACTIONS(1323), 1,
      anon_sym_DOT,
    ACTIONS(1466), 1,
      anon_sym_SEMI,
    STATE(436), 1,
      aux_sym_disjunction_repeat1,
  [10979] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1472), 1,
      anon_sym_RPAREN,
    STATE(439), 1,
      aux_sym_query_plan_repeat1,
  [10989] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1474), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [10999] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1476), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_query_plan_repeat1,
  [11009] = 3,
    ACTIONS(1267), 1,
      anon_sym_COMMA,
    ACTIONS(1478), 1,
      anon_sym_COLON_DASH,
    STATE(419), 1,
      aux_sym_monotonic_rule_repeat1,
  [11019] = 3,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(728), 1,
      anon_sym_RBRACK,
    STATE(398), 1,
      aux_sym_record_constructor_repeat1,
  [11029] = 3,
    ACTIONS(1480), 1,
      anon_sym_COMMA,
    ACTIONS(1483), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_query_plan_repeat1,
  [11039] = 1,
    ACTIONS(1317), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LPAREN2,
  [11045] = 3,
    ACTIONS(1485), 1,
      anon_sym_COMMA,
    ACTIONS(1488), 1,
      anon_sym_COLON_DASH,
    STATE(419), 1,
      aux_sym_monotonic_rule_repeat1,
  [11055] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1490), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_relation_decl_repeat2,
  [11065] = 3,
    ACTIONS(1492), 1,
      anon_sym_COMMA,
    ACTIONS(1495), 1,
      anon_sym_LBRACE,
    STATE(421), 1,
      aux_sym_component_decl_repeat1,
  [11075] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1497), 1,
      anon_sym_RPAREN,
    STATE(409), 1,
      aux_sym_relation_decl_repeat1,
  [11085] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1499), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_relation_decl_repeat2,
  [11095] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1501), 1,
      anon_sym_RPAREN,
    STATE(384), 1,
      aux_sym_relation_decl_repeat2,
  [11105] = 3,
    ACTIONS(1503), 1,
      anon_sym_COMMA,
    ACTIONS(1506), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_relation_decl_repeat2,
  [11115] = 3,
    ACTIONS(1275), 1,
      anon_sym_COMMA,
    ACTIONS(1508), 1,
      anon_sym_RPAREN,
    STATE(425), 1,
      aux_sym_relation_decl_repeat2,
  [11125] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1510), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [11135] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1512), 1,
      anon_sym_LPAREN2,
    STATE(385), 1,
      aux_sym_relation_decl_repeat1,
  [11145] = 3,
    ACTIONS(1327), 1,
      anon_sym_COMMA,
    ACTIONS(1512), 1,
      anon_sym_LPAREN2,
    STATE(346), 1,
      aux_sym_relation_decl_repeat1,
  [11155] = 3,
    ACTIONS(1408), 1,
      anon_sym_COMMA,
    ACTIONS(1514), 1,
      anon_sym_LBRACE,
    STATE(386), 1,
      aux_sym_component_decl_repeat1,
  [11165] = 3,
    ACTIONS(1308), 1,
      anon_sym_COMMA,
    ACTIONS(1516), 1,
      anon_sym_RPAREN,
    STATE(373), 1,
      aux_sym_directive_repeat2,
  [11175] = 3,
    ACTIONS(1414), 1,
      anon_sym_COMMA,
    ACTIONS(1518), 1,
      anon_sym_GT,
    STATE(388), 1,
      aux_sym_component_type_repeat1,
  [11185] = 3,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1520), 1,
      anon_sym_RPAREN,
    STATE(390), 1,
      aux_sym_functor_decl_repeat1,
  [11195] = 3,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1522), 1,
      anon_sym_RPAREN,
    STATE(392), 1,
      aux_sym_functor_decl_repeat1,
  [11205] = 3,
    ACTIONS(1198), 1,
      anon_sym_COMMA,
    ACTIONS(1524), 1,
      anon_sym_RPAREN,
    STATE(394), 1,
      aux_sym_functor_decl_repeat1,
  [11215] = 3,
    ACTIONS(1319), 1,
      anon_sym_DOT,
    ACTIONS(1526), 1,
      anon_sym_SEMI,
    STATE(436), 1,
      aux_sym_disjunction_repeat1,
  [11225] = 3,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(1529), 1,
      anon_sym_RPAREN,
    STATE(402), 1,
      aux_sym_match_repeat1,
  [11235] = 3,
    ACTIONS(37), 1,
      sym_ident,
    STATE(456), 1,
      sym_atom,
    STATE(501), 1,
      sym_qualified_name,
  [11245] = 3,
    ACTIONS(1304), 1,
      anon_sym_COMMA,
    ACTIONS(1531), 1,
      anon_sym_RPAREN,
    STATE(417), 1,
      aux_sym_query_plan_repeat1,
  [11255] = 3,
    ACTIONS(37), 1,
      sym_ident,
    STATE(484), 1,
      sym_atom,
    STATE(501), 1,
      sym_qualified_name,
  [11265] = 1,
    ACTIONS(1533), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11270] = 2,
    ACTIONS(1535), 1,
      sym_ident,
    STATE(171), 1,
      sym__adt_branch,
  [11277] = 2,
    ACTIONS(1537), 1,
      anon_sym_COLON,
    ACTIONS(1539), 1,
      anon_sym_LBRACE,
  [11284] = 2,
    ACTIONS(1541), 1,
      sym_ident,
    STATE(282), 1,
      sym_qualified_name,
  [11291] = 2,
    ACTIONS(1541), 1,
      sym_ident,
    STATE(149), 1,
      sym_qualified_name,
  [11298] = 2,
    ACTIONS(1543), 1,
      sym_ident,
    STATE(430), 1,
      sym_component_type,
  [11305] = 2,
    ACTIONS(1543), 1,
      sym_ident,
    STATE(206), 1,
      sym_component_type,
  [11312] = 2,
    ACTIONS(1545), 1,
      aux_sym_preproc_def_token1,
    ACTIONS(1547), 1,
      sym_preproc_arg,
  [11319] = 1,
    ACTIONS(1549), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11324] = 2,
    ACTIONS(1551), 1,
      sym_ident,
    STATE(176), 1,
      sym_qualified_name,
  [11331] = 2,
    ACTIONS(37), 1,
      sym_ident,
    STATE(89), 1,
      sym_qualified_name,
  [11338] = 1,
    ACTIONS(1553), 2,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [11343] = 2,
    ACTIONS(1555), 1,
      anon_sym_LPAREN2,
    ACTIONS(1557), 1,
      sym_ident,
  [11350] = 1,
    ACTIONS(1559), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11355] = 2,
    ACTIONS(1551), 1,
      sym_ident,
    STATE(149), 1,
      sym_qualified_name,
  [11362] = 1,
    ACTIONS(1488), 2,
      anon_sym_COMMA,
      anon_sym_COLON_DASH,
  [11367] = 2,
    ACTIONS(1543), 1,
      sym_ident,
    STATE(443), 1,
      sym_component_type,
  [11374] = 2,
    ACTIONS(1543), 1,
      sym_ident,
    STATE(452), 1,
      sym_component_type,
  [11381] = 1,
    ACTIONS(1561), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11386] = 2,
    ACTIONS(1563), 1,
      anon_sym_LPAREN2,
    ACTIONS(1565), 1,
      sym_ident,
  [11393] = 1,
    ACTIONS(1567), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [11398] = 2,
    ACTIONS(1261), 1,
      sym_ident,
    STATE(375), 1,
      sym_attribute,
  [11405] = 1,
    ACTIONS(1569), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [11410] = 1,
    ACTIONS(1571), 2,
      sym_string,
      sym_include_string,
  [11415] = 2,
    ACTIONS(1573), 1,
      sym_ident,
    STATE(89), 1,
      sym_qualified_name,
  [11422] = 2,
    ACTIONS(1261), 1,
      sym_ident,
    STATE(449), 1,
      sym_attribute,
  [11429] = 1,
    ACTIONS(1575), 1,
      anon_sym_RPAREN,
  [11433] = 1,
    ACTIONS(1577), 1,
      anon_sym_DOT,
  [11437] = 1,
    ACTIONS(1579), 1,
      anon_sym_LPAREN2,
  [11441] = 1,
    ACTIONS(1581), 1,
      anon_sym_LPAREN2,
  [11445] = 1,
    ACTIONS(1583), 1,
      anon_sym_LPAREN2,
  [11449] = 1,
    ACTIONS(1585), 1,
      anon_sym_LPAREN2,
  [11453] = 1,
    ACTIONS(1587), 1,
      anon_sym_COLON,
  [11457] = 1,
    ACTIONS(131), 1,
      anon_sym_LPAREN2,
  [11461] = 1,
    ACTIONS(1589), 1,
      anon_sym_COLON,
  [11465] = 1,
    ACTIONS(1283), 1,
      anon_sym_COLON,
  [11469] = 1,
    ACTIONS(1591), 1,
      sym_ident,
  [11473] = 1,
    ACTIONS(1593), 1,
      anon_sym_LPAREN2,
  [11477] = 1,
    ACTIONS(1595), 1,
      anon_sym_RPAREN,
  [11481] = 1,
    ACTIONS(1597), 1,
      anon_sym_LPAREN2,
  [11485] = 1,
    ACTIONS(1599), 1,
      sym_ident,
  [11489] = 1,
    ACTIONS(1601), 1,
      aux_sym_preproc_def_token1,
  [11493] = 1,
    ACTIONS(1603), 1,
      aux_sym_preproc_line_token1,
  [11497] = 1,
    ACTIONS(1605), 1,
      anon_sym_COLON_DASH,
  [11501] = 1,
    ACTIONS(1607), 1,
      aux_sym_preproc_line_token1,
  [11505] = 1,
    ACTIONS(1609), 1,
      sym_ident,
  [11509] = 1,
    ACTIONS(1611), 1,
      anon_sym_COLON,
  [11513] = 1,
    ACTIONS(1613), 1,
      sym_ident,
  [11517] = 1,
    ACTIONS(1615), 1,
      aux_sym_preproc_line_token1,
  [11521] = 1,
    ACTIONS(1617), 1,
      sym_ident,
  [11525] = 1,
    ACTIONS(1619), 1,
      anon_sym_EQ,
  [11529] = 1,
    ACTIONS(1621), 1,
      anon_sym_RBRACE,
  [11533] = 1,
    ACTIONS(1623), 1,
      anon_sym_LPAREN2,
  [11537] = 1,
    ACTIONS(1625), 1,
      sym_ident,
  [11541] = 1,
    ACTIONS(1627), 1,
      sym_ident,
  [11545] = 1,
    ACTIONS(1629), 1,
      anon_sym_LF,
  [11549] = 1,
    ACTIONS(1631), 1,
      anon_sym_SLASH,
  [11553] = 1,
    ACTIONS(1633), 1,
      anon_sym_RPAREN,
  [11557] = 1,
    ACTIONS(1635), 1,
      anon_sym_LPAREN2,
  [11561] = 1,
    ACTIONS(1637), 1,
      sym_string,
  [11565] = 1,
    ACTIONS(1639), 1,
      anon_sym_LPAREN2,
  [11569] = 1,
    ACTIONS(1641), 1,
      aux_sym_preproc_line_token1,
  [11573] = 1,
    ACTIONS(1643), 1,
      anon_sym_RPAREN,
  [11577] = 1,
    ACTIONS(1645), 1,
      anon_sym_COLON,
  [11581] = 1,
    ACTIONS(1647), 1,
      ts_builtin_sym_end,
  [11585] = 1,
    ACTIONS(1649), 1,
      anon_sym_LPAREN2,
  [11589] = 1,
    ACTIONS(1651), 1,
      anon_sym_RBRACE,
  [11593] = 1,
    ACTIONS(1653), 1,
      anon_sym_COLON,
  [11597] = 1,
    ACTIONS(1655), 1,
      sym_ident,
  [11601] = 1,
    ACTIONS(1657), 1,
      anon_sym_DOT,
  [11605] = 1,
    ACTIONS(661), 1,
      anon_sym_LBRACE,
  [11609] = 1,
    ACTIONS(1659), 1,
      anon_sym_COLON,
  [11613] = 1,
    ACTIONS(1661), 1,
      anon_sym_COLON,
  [11617] = 1,
    ACTIONS(1663), 1,
      anon_sym_COLON,
  [11621] = 1,
    ACTIONS(1665), 1,
      sym_ident,
  [11625] = 1,
    ACTIONS(1667), 1,
      sym_ident,
  [11629] = 1,
    ACTIONS(1669), 1,
      sym_ident,
  [11633] = 1,
    ACTIONS(1671), 1,
      anon_sym_RPAREN,
  [11637] = 1,
    ACTIONS(1673), 1,
      sym_ident,
  [11641] = 1,
    ACTIONS(1675), 1,
      sym_ident,
  [11645] = 1,
    ACTIONS(1677), 1,
      sym_string,
  [11649] = 1,
    ACTIONS(1679), 1,
      aux_sym_line_comment_token1,
  [11653] = 1,
    ACTIONS(1681), 1,
      sym_ident,
  [11657] = 1,
    ACTIONS(1683), 1,
      anon_sym_COLON,
  [11661] = 1,
    ACTIONS(1685), 1,
      aux_sym_block_comment_token1,
  [11665] = 1,
    ACTIONS(1687), 1,
      anon_sym_RPAREN,
  [11669] = 1,
    ACTIONS(1689), 1,
      anon_sym_RPAREN,
  [11673] = 1,
    ACTIONS(1691), 1,
      sym_ident,
  [11677] = 1,
    ACTIONS(1693), 1,
      sym_ident,
  [11681] = 1,
    ACTIONS(1695), 1,
      anon_sym_DOT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(44)] = 0,
  [SMALL_STATE(45)] = 64,
  [SMALL_STATE(46)] = 122,
  [SMALL_STATE(47)] = 180,
  [SMALL_STATE(48)] = 273,
  [SMALL_STATE(49)] = 366,
  [SMALL_STATE(50)] = 421,
  [SMALL_STATE(51)] = 476,
  [SMALL_STATE(52)] = 531,
  [SMALL_STATE(53)] = 586,
  [SMALL_STATE(54)] = 641,
  [SMALL_STATE(55)] = 696,
  [SMALL_STATE(56)] = 751,
  [SMALL_STATE(57)] = 806,
  [SMALL_STATE(58)] = 861,
  [SMALL_STATE(59)] = 916,
  [SMALL_STATE(60)] = 971,
  [SMALL_STATE(61)] = 1026,
  [SMALL_STATE(62)] = 1081,
  [SMALL_STATE(63)] = 1136,
  [SMALL_STATE(64)] = 1191,
  [SMALL_STATE(65)] = 1246,
  [SMALL_STATE(66)] = 1301,
  [SMALL_STATE(67)] = 1356,
  [SMALL_STATE(68)] = 1411,
  [SMALL_STATE(69)] = 1466,
  [SMALL_STATE(70)] = 1521,
  [SMALL_STATE(71)] = 1576,
  [SMALL_STATE(72)] = 1631,
  [SMALL_STATE(73)] = 1686,
  [SMALL_STATE(74)] = 1736,
  [SMALL_STATE(75)] = 1819,
  [SMALL_STATE(76)] = 1902,
  [SMALL_STATE(77)] = 1985,
  [SMALL_STATE(78)] = 2068,
  [SMALL_STATE(79)] = 2151,
  [SMALL_STATE(80)] = 2234,
  [SMALL_STATE(81)] = 2317,
  [SMALL_STATE(82)] = 2365,
  [SMALL_STATE(83)] = 2413,
  [SMALL_STATE(84)] = 2461,
  [SMALL_STATE(85)] = 2504,
  [SMALL_STATE(86)] = 2547,
  [SMALL_STATE(87)] = 2590,
  [SMALL_STATE(88)] = 2633,
  [SMALL_STATE(89)] = 2676,
  [SMALL_STATE(90)] = 2721,
  [SMALL_STATE(91)] = 2763,
  [SMALL_STATE(92)] = 2805,
  [SMALL_STATE(93)] = 2847,
  [SMALL_STATE(94)] = 2889,
  [SMALL_STATE(95)] = 2931,
  [SMALL_STATE(96)] = 2973,
  [SMALL_STATE(97)] = 3015,
  [SMALL_STATE(98)] = 3057,
  [SMALL_STATE(99)] = 3099,
  [SMALL_STATE(100)] = 3141,
  [SMALL_STATE(101)] = 3183,
  [SMALL_STATE(102)] = 3225,
  [SMALL_STATE(103)] = 3267,
  [SMALL_STATE(104)] = 3309,
  [SMALL_STATE(105)] = 3351,
  [SMALL_STATE(106)] = 3393,
  [SMALL_STATE(107)] = 3435,
  [SMALL_STATE(108)] = 3477,
  [SMALL_STATE(109)] = 3519,
  [SMALL_STATE(110)] = 3561,
  [SMALL_STATE(111)] = 3603,
  [SMALL_STATE(112)] = 3645,
  [SMALL_STATE(113)] = 3687,
  [SMALL_STATE(114)] = 3729,
  [SMALL_STATE(115)] = 3771,
  [SMALL_STATE(116)] = 3813,
  [SMALL_STATE(117)] = 3855,
  [SMALL_STATE(118)] = 3900,
  [SMALL_STATE(119)] = 3947,
  [SMALL_STATE(120)] = 3992,
  [SMALL_STATE(121)] = 4036,
  [SMALL_STATE(122)] = 4077,
  [SMALL_STATE(123)] = 4118,
  [SMALL_STATE(124)] = 4154,
  [SMALL_STATE(125)] = 4190,
  [SMALL_STATE(126)] = 4226,
  [SMALL_STATE(127)] = 4260,
  [SMALL_STATE(128)] = 4297,
  [SMALL_STATE(129)] = 4334,
  [SMALL_STATE(130)] = 4367,
  [SMALL_STATE(131)] = 4400,
  [SMALL_STATE(132)] = 4437,
  [SMALL_STATE(133)] = 4474,
  [SMALL_STATE(134)] = 4510,
  [SMALL_STATE(135)] = 4546,
  [SMALL_STATE(136)] = 4582,
  [SMALL_STATE(137)] = 4622,
  [SMALL_STATE(138)] = 4654,
  [SMALL_STATE(139)] = 4694,
  [SMALL_STATE(140)] = 4730,
  [SMALL_STATE(141)] = 4764,
  [SMALL_STATE(142)] = 4804,
  [SMALL_STATE(143)] = 4840,
  [SMALL_STATE(144)] = 4876,
  [SMALL_STATE(145)] = 4912,
  [SMALL_STATE(146)] = 4950,
  [SMALL_STATE(147)] = 4986,
  [SMALL_STATE(148)] = 5022,
  [SMALL_STATE(149)] = 5058,
  [SMALL_STATE(150)] = 5090,
  [SMALL_STATE(151)] = 5126,
  [SMALL_STATE(152)] = 5162,
  [SMALL_STATE(153)] = 5198,
  [SMALL_STATE(154)] = 5234,
  [SMALL_STATE(155)] = 5270,
  [SMALL_STATE(156)] = 5306,
  [SMALL_STATE(157)] = 5342,
  [SMALL_STATE(158)] = 5382,
  [SMALL_STATE(159)] = 5418,
  [SMALL_STATE(160)] = 5454,
  [SMALL_STATE(161)] = 5490,
  [SMALL_STATE(162)] = 5526,
  [SMALL_STATE(163)] = 5562,
  [SMALL_STATE(164)] = 5602,
  [SMALL_STATE(165)] = 5638,
  [SMALL_STATE(166)] = 5678,
  [SMALL_STATE(167)] = 5714,
  [SMALL_STATE(168)] = 5750,
  [SMALL_STATE(169)] = 5785,
  [SMALL_STATE(170)] = 5816,
  [SMALL_STATE(171)] = 5847,
  [SMALL_STATE(172)] = 5878,
  [SMALL_STATE(173)] = 5909,
  [SMALL_STATE(174)] = 5944,
  [SMALL_STATE(175)] = 5979,
  [SMALL_STATE(176)] = 6014,
  [SMALL_STATE(177)] = 6051,
  [SMALL_STATE(178)] = 6086,
  [SMALL_STATE(179)] = 6123,
  [SMALL_STATE(180)] = 6154,
  [SMALL_STATE(181)] = 6185,
  [SMALL_STATE(182)] = 6216,
  [SMALL_STATE(183)] = 6247,
  [SMALL_STATE(184)] = 6278,
  [SMALL_STATE(185)] = 6309,
  [SMALL_STATE(186)] = 6340,
  [SMALL_STATE(187)] = 6375,
  [SMALL_STATE(188)] = 6406,
  [SMALL_STATE(189)] = 6437,
  [SMALL_STATE(190)] = 6474,
  [SMALL_STATE(191)] = 6504,
  [SMALL_STATE(192)] = 6534,
  [SMALL_STATE(193)] = 6568,
  [SMALL_STATE(194)] = 6598,
  [SMALL_STATE(195)] = 6628,
  [SMALL_STATE(196)] = 6658,
  [SMALL_STATE(197)] = 6688,
  [SMALL_STATE(198)] = 6722,
  [SMALL_STATE(199)] = 6752,
  [SMALL_STATE(200)] = 6782,
  [SMALL_STATE(201)] = 6812,
  [SMALL_STATE(202)] = 6842,
  [SMALL_STATE(203)] = 6876,
  [SMALL_STATE(204)] = 6906,
  [SMALL_STATE(205)] = 6936,
  [SMALL_STATE(206)] = 6966,
  [SMALL_STATE(207)] = 6996,
  [SMALL_STATE(208)] = 7026,
  [SMALL_STATE(209)] = 7056,
  [SMALL_STATE(210)] = 7086,
  [SMALL_STATE(211)] = 7116,
  [SMALL_STATE(212)] = 7146,
  [SMALL_STATE(213)] = 7176,
  [SMALL_STATE(214)] = 7206,
  [SMALL_STATE(215)] = 7236,
  [SMALL_STATE(216)] = 7266,
  [SMALL_STATE(217)] = 7296,
  [SMALL_STATE(218)] = 7326,
  [SMALL_STATE(219)] = 7356,
  [SMALL_STATE(220)] = 7386,
  [SMALL_STATE(221)] = 7416,
  [SMALL_STATE(222)] = 7446,
  [SMALL_STATE(223)] = 7476,
  [SMALL_STATE(224)] = 7506,
  [SMALL_STATE(225)] = 7536,
  [SMALL_STATE(226)] = 7566,
  [SMALL_STATE(227)] = 7596,
  [SMALL_STATE(228)] = 7626,
  [SMALL_STATE(229)] = 7656,
  [SMALL_STATE(230)] = 7690,
  [SMALL_STATE(231)] = 7720,
  [SMALL_STATE(232)] = 7750,
  [SMALL_STATE(233)] = 7780,
  [SMALL_STATE(234)] = 7810,
  [SMALL_STATE(235)] = 7840,
  [SMALL_STATE(236)] = 7870,
  [SMALL_STATE(237)] = 7904,
  [SMALL_STATE(238)] = 7934,
  [SMALL_STATE(239)] = 7964,
  [SMALL_STATE(240)] = 7994,
  [SMALL_STATE(241)] = 8024,
  [SMALL_STATE(242)] = 8054,
  [SMALL_STATE(243)] = 8088,
  [SMALL_STATE(244)] = 8118,
  [SMALL_STATE(245)] = 8148,
  [SMALL_STATE(246)] = 8178,
  [SMALL_STATE(247)] = 8208,
  [SMALL_STATE(248)] = 8238,
  [SMALL_STATE(249)] = 8268,
  [SMALL_STATE(250)] = 8302,
  [SMALL_STATE(251)] = 8332,
  [SMALL_STATE(252)] = 8362,
  [SMALL_STATE(253)] = 8392,
  [SMALL_STATE(254)] = 8422,
  [SMALL_STATE(255)] = 8452,
  [SMALL_STATE(256)] = 8482,
  [SMALL_STATE(257)] = 8512,
  [SMALL_STATE(258)] = 8542,
  [SMALL_STATE(259)] = 8576,
  [SMALL_STATE(260)] = 8610,
  [SMALL_STATE(261)] = 8644,
  [SMALL_STATE(262)] = 8678,
  [SMALL_STATE(263)] = 8712,
  [SMALL_STATE(264)] = 8742,
  [SMALL_STATE(265)] = 8777,
  [SMALL_STATE(266)] = 8806,
  [SMALL_STATE(267)] = 8835,
  [SMALL_STATE(268)] = 8866,
  [SMALL_STATE(269)] = 8897,
  [SMALL_STATE(270)] = 8928,
  [SMALL_STATE(271)] = 8959,
  [SMALL_STATE(272)] = 8990,
  [SMALL_STATE(273)] = 9021,
  [SMALL_STATE(274)] = 9052,
  [SMALL_STATE(275)] = 9080,
  [SMALL_STATE(276)] = 9108,
  [SMALL_STATE(277)] = 9136,
  [SMALL_STATE(278)] = 9164,
  [SMALL_STATE(279)] = 9192,
  [SMALL_STATE(280)] = 9220,
  [SMALL_STATE(281)] = 9248,
  [SMALL_STATE(282)] = 9276,
  [SMALL_STATE(283)] = 9310,
  [SMALL_STATE(284)] = 9344,
  [SMALL_STATE(285)] = 9376,
  [SMALL_STATE(286)] = 9407,
  [SMALL_STATE(287)] = 9438,
  [SMALL_STATE(288)] = 9469,
  [SMALL_STATE(289)] = 9500,
  [SMALL_STATE(290)] = 9525,
  [SMALL_STATE(291)] = 9554,
  [SMALL_STATE(292)] = 9581,
  [SMALL_STATE(293)] = 9610,
  [SMALL_STATE(294)] = 9639,
  [SMALL_STATE(295)] = 9660,
  [SMALL_STATE(296)] = 9681,
  [SMALL_STATE(297)] = 9699,
  [SMALL_STATE(298)] = 9714,
  [SMALL_STATE(299)] = 9729,
  [SMALL_STATE(300)] = 9744,
  [SMALL_STATE(301)] = 9759,
  [SMALL_STATE(302)] = 9774,
  [SMALL_STATE(303)] = 9789,
  [SMALL_STATE(304)] = 9804,
  [SMALL_STATE(305)] = 9819,
  [SMALL_STATE(306)] = 9834,
  [SMALL_STATE(307)] = 9849,
  [SMALL_STATE(308)] = 9864,
  [SMALL_STATE(309)] = 9879,
  [SMALL_STATE(310)] = 9894,
  [SMALL_STATE(311)] = 9906,
  [SMALL_STATE(312)] = 9918,
  [SMALL_STATE(313)] = 9926,
  [SMALL_STATE(314)] = 9934,
  [SMALL_STATE(315)] = 9946,
  [SMALL_STATE(316)] = 9954,
  [SMALL_STATE(317)] = 9966,
  [SMALL_STATE(318)] = 9978,
  [SMALL_STATE(319)] = 9990,
  [SMALL_STATE(320)] = 10002,
  [SMALL_STATE(321)] = 10010,
  [SMALL_STATE(322)] = 10018,
  [SMALL_STATE(323)] = 10030,
  [SMALL_STATE(324)] = 10038,
  [SMALL_STATE(325)] = 10050,
  [SMALL_STATE(326)] = 10066,
  [SMALL_STATE(327)] = 10078,
  [SMALL_STATE(328)] = 10090,
  [SMALL_STATE(329)] = 10106,
  [SMALL_STATE(330)] = 10122,
  [SMALL_STATE(331)] = 10138,
  [SMALL_STATE(332)] = 10154,
  [SMALL_STATE(333)] = 10170,
  [SMALL_STATE(334)] = 10184,
  [SMALL_STATE(335)] = 10192,
  [SMALL_STATE(336)] = 10200,
  [SMALL_STATE(337)] = 10208,
  [SMALL_STATE(338)] = 10216,
  [SMALL_STATE(339)] = 10224,
  [SMALL_STATE(340)] = 10232,
  [SMALL_STATE(341)] = 10240,
  [SMALL_STATE(342)] = 10251,
  [SMALL_STATE(343)] = 10262,
  [SMALL_STATE(344)] = 10273,
  [SMALL_STATE(345)] = 10286,
  [SMALL_STATE(346)] = 10299,
  [SMALL_STATE(347)] = 10310,
  [SMALL_STATE(348)] = 10317,
  [SMALL_STATE(349)] = 10330,
  [SMALL_STATE(350)] = 10341,
  [SMALL_STATE(351)] = 10352,
  [SMALL_STATE(352)] = 10363,
  [SMALL_STATE(353)] = 10376,
  [SMALL_STATE(354)] = 10383,
  [SMALL_STATE(355)] = 10394,
  [SMALL_STATE(356)] = 10405,
  [SMALL_STATE(357)] = 10416,
  [SMALL_STATE(358)] = 10429,
  [SMALL_STATE(359)] = 10440,
  [SMALL_STATE(360)] = 10453,
  [SMALL_STATE(361)] = 10464,
  [SMALL_STATE(362)] = 10475,
  [SMALL_STATE(363)] = 10488,
  [SMALL_STATE(364)] = 10501,
  [SMALL_STATE(365)] = 10512,
  [SMALL_STATE(366)] = 10525,
  [SMALL_STATE(367)] = 10533,
  [SMALL_STATE(368)] = 10543,
  [SMALL_STATE(369)] = 10553,
  [SMALL_STATE(370)] = 10563,
  [SMALL_STATE(371)] = 10573,
  [SMALL_STATE(372)] = 10583,
  [SMALL_STATE(373)] = 10593,
  [SMALL_STATE(374)] = 10603,
  [SMALL_STATE(375)] = 10613,
  [SMALL_STATE(376)] = 10619,
  [SMALL_STATE(377)] = 10629,
  [SMALL_STATE(378)] = 10639,
  [SMALL_STATE(379)] = 10649,
  [SMALL_STATE(380)] = 10659,
  [SMALL_STATE(381)] = 10669,
  [SMALL_STATE(382)] = 10679,
  [SMALL_STATE(383)] = 10689,
  [SMALL_STATE(384)] = 10699,
  [SMALL_STATE(385)] = 10709,
  [SMALL_STATE(386)] = 10719,
  [SMALL_STATE(387)] = 10729,
  [SMALL_STATE(388)] = 10739,
  [SMALL_STATE(389)] = 10749,
  [SMALL_STATE(390)] = 10759,
  [SMALL_STATE(391)] = 10769,
  [SMALL_STATE(392)] = 10779,
  [SMALL_STATE(393)] = 10789,
  [SMALL_STATE(394)] = 10799,
  [SMALL_STATE(395)] = 10809,
  [SMALL_STATE(396)] = 10819,
  [SMALL_STATE(397)] = 10829,
  [SMALL_STATE(398)] = 10839,
  [SMALL_STATE(399)] = 10849,
  [SMALL_STATE(400)] = 10859,
  [SMALL_STATE(401)] = 10869,
  [SMALL_STATE(402)] = 10879,
  [SMALL_STATE(403)] = 10889,
  [SMALL_STATE(404)] = 10899,
  [SMALL_STATE(405)] = 10909,
  [SMALL_STATE(406)] = 10919,
  [SMALL_STATE(407)] = 10929,
  [SMALL_STATE(408)] = 10939,
  [SMALL_STATE(409)] = 10949,
  [SMALL_STATE(410)] = 10959,
  [SMALL_STATE(411)] = 10969,
  [SMALL_STATE(412)] = 10979,
  [SMALL_STATE(413)] = 10989,
  [SMALL_STATE(414)] = 10999,
  [SMALL_STATE(415)] = 11009,
  [SMALL_STATE(416)] = 11019,
  [SMALL_STATE(417)] = 11029,
  [SMALL_STATE(418)] = 11039,
  [SMALL_STATE(419)] = 11045,
  [SMALL_STATE(420)] = 11055,
  [SMALL_STATE(421)] = 11065,
  [SMALL_STATE(422)] = 11075,
  [SMALL_STATE(423)] = 11085,
  [SMALL_STATE(424)] = 11095,
  [SMALL_STATE(425)] = 11105,
  [SMALL_STATE(426)] = 11115,
  [SMALL_STATE(427)] = 11125,
  [SMALL_STATE(428)] = 11135,
  [SMALL_STATE(429)] = 11145,
  [SMALL_STATE(430)] = 11155,
  [SMALL_STATE(431)] = 11165,
  [SMALL_STATE(432)] = 11175,
  [SMALL_STATE(433)] = 11185,
  [SMALL_STATE(434)] = 11195,
  [SMALL_STATE(435)] = 11205,
  [SMALL_STATE(436)] = 11215,
  [SMALL_STATE(437)] = 11225,
  [SMALL_STATE(438)] = 11235,
  [SMALL_STATE(439)] = 11245,
  [SMALL_STATE(440)] = 11255,
  [SMALL_STATE(441)] = 11265,
  [SMALL_STATE(442)] = 11270,
  [SMALL_STATE(443)] = 11277,
  [SMALL_STATE(444)] = 11284,
  [SMALL_STATE(445)] = 11291,
  [SMALL_STATE(446)] = 11298,
  [SMALL_STATE(447)] = 11305,
  [SMALL_STATE(448)] = 11312,
  [SMALL_STATE(449)] = 11319,
  [SMALL_STATE(450)] = 11324,
  [SMALL_STATE(451)] = 11331,
  [SMALL_STATE(452)] = 11338,
  [SMALL_STATE(453)] = 11343,
  [SMALL_STATE(454)] = 11350,
  [SMALL_STATE(455)] = 11355,
  [SMALL_STATE(456)] = 11362,
  [SMALL_STATE(457)] = 11367,
  [SMALL_STATE(458)] = 11374,
  [SMALL_STATE(459)] = 11381,
  [SMALL_STATE(460)] = 11386,
  [SMALL_STATE(461)] = 11393,
  [SMALL_STATE(462)] = 11398,
  [SMALL_STATE(463)] = 11405,
  [SMALL_STATE(464)] = 11410,
  [SMALL_STATE(465)] = 11415,
  [SMALL_STATE(466)] = 11422,
  [SMALL_STATE(467)] = 11429,
  [SMALL_STATE(468)] = 11433,
  [SMALL_STATE(469)] = 11437,
  [SMALL_STATE(470)] = 11441,
  [SMALL_STATE(471)] = 11445,
  [SMALL_STATE(472)] = 11449,
  [SMALL_STATE(473)] = 11453,
  [SMALL_STATE(474)] = 11457,
  [SMALL_STATE(475)] = 11461,
  [SMALL_STATE(476)] = 11465,
  [SMALL_STATE(477)] = 11469,
  [SMALL_STATE(478)] = 11473,
  [SMALL_STATE(479)] = 11477,
  [SMALL_STATE(480)] = 11481,
  [SMALL_STATE(481)] = 11485,
  [SMALL_STATE(482)] = 11489,
  [SMALL_STATE(483)] = 11493,
  [SMALL_STATE(484)] = 11497,
  [SMALL_STATE(485)] = 11501,
  [SMALL_STATE(486)] = 11505,
  [SMALL_STATE(487)] = 11509,
  [SMALL_STATE(488)] = 11513,
  [SMALL_STATE(489)] = 11517,
  [SMALL_STATE(490)] = 11521,
  [SMALL_STATE(491)] = 11525,
  [SMALL_STATE(492)] = 11529,
  [SMALL_STATE(493)] = 11533,
  [SMALL_STATE(494)] = 11537,
  [SMALL_STATE(495)] = 11541,
  [SMALL_STATE(496)] = 11545,
  [SMALL_STATE(497)] = 11549,
  [SMALL_STATE(498)] = 11553,
  [SMALL_STATE(499)] = 11557,
  [SMALL_STATE(500)] = 11561,
  [SMALL_STATE(501)] = 11565,
  [SMALL_STATE(502)] = 11569,
  [SMALL_STATE(503)] = 11573,
  [SMALL_STATE(504)] = 11577,
  [SMALL_STATE(505)] = 11581,
  [SMALL_STATE(506)] = 11585,
  [SMALL_STATE(507)] = 11589,
  [SMALL_STATE(508)] = 11593,
  [SMALL_STATE(509)] = 11597,
  [SMALL_STATE(510)] = 11601,
  [SMALL_STATE(511)] = 11605,
  [SMALL_STATE(512)] = 11609,
  [SMALL_STATE(513)] = 11613,
  [SMALL_STATE(514)] = 11617,
  [SMALL_STATE(515)] = 11621,
  [SMALL_STATE(516)] = 11625,
  [SMALL_STATE(517)] = 11629,
  [SMALL_STATE(518)] = 11633,
  [SMALL_STATE(519)] = 11637,
  [SMALL_STATE(520)] = 11641,
  [SMALL_STATE(521)] = 11645,
  [SMALL_STATE(522)] = 11649,
  [SMALL_STATE(523)] = 11653,
  [SMALL_STATE(524)] = 11657,
  [SMALL_STATE(525)] = 11661,
  [SMALL_STATE(526)] = 11665,
  [SMALL_STATE(527)] = 11669,
  [SMALL_STATE(528)] = 11673,
  [SMALL_STATE(529)] = 11677,
  [SMALL_STATE(530)] = 11681,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(529),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(528),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(528),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(470),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(478),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(474),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(473),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(472),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_intrinsic_functor, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_conjunction_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat1, 2), SHIFT_REPEAT(46),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(489),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(464),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(529),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(528),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(528),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(234),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(525),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(522),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(521),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(515),
  [214] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(457),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(509),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(450),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(352),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(306),
  [229] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(310),
  [232] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(83),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 111),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 111),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 134),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 134),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 81),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 81),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 80),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 80),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 79),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 79),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 77),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 77),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 75),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 75),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 74),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 74),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 70),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 70),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 22),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 22),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 20),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 20),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 19),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 19),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 18),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 18),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 41),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 41),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 114),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 114),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 112),
  [315] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 112),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 107),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 107),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 40),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 40),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 3),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 3),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 46),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 46),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 45),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 45),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 47),
  [345] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 47),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 43),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 43),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 48),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 48),
  [357] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_relation_decl_repeat3, 2), SHIFT_REPEAT(73),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(489),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(464),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(529),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(528),
  [392] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(528),
  [395] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(234),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(525),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(522),
  [404] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(457),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(488),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2),
  [412] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(509),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(444),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(352),
  [421] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(311),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat2, 2), SHIFT_REPEAT(83),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2),
  [441] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(486),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_qualified_name, 1),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 31),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 31),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 4, .production_id = 32),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 4, .production_id = 32),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 5, .production_id = 60),
  [458] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 5, .production_id = 60),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 3, .production_id = 12),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atom, 3, .production_id = 12),
  [464] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 2, .production_id = 27),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 2, .production_id = 27),
  [470] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 122),
  [472] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 122),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argument, 3),
  [476] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__argument, 3),
  [478] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 3, .production_id = 55),
  [480] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 3, .production_id = 55),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 8, .production_id = 147),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 8, .production_id = 147),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 4, .production_id = 94),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 4, .production_id = 94),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decimal, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decimal, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1),
  [504] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1),
  [506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [508] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1),
  [510] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 95),
  [512] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 95),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 5, .production_id = 124),
  [516] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 5, .production_id = 124),
  [518] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 4, .production_id = 96),
  [520] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 4, .production_id = 96),
  [522] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 5, .production_id = 125),
  [524] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 5, .production_id = 125),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 4, .production_id = 27),
  [528] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 4, .production_id = 27),
  [530] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 1),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 6, .production_id = 139),
  [536] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 6, .production_id = 139),
  [538] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_as, 6, .production_id = 140),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_as, 6, .production_id = 140),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_aggregator, 6, .production_id = 141),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_aggregator, 6, .production_id = 141),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt_constructor, 5, .production_id = 123),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt_constructor, 5, .production_id = 123),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_op, 3, .production_id = 57),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_op, 3, .production_id = 57),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 6, .production_id = 142),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range, 6, .production_id = 142),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_call, 3, .production_id = 58),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_call, 3, .production_id = 58),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 4),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 4),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 2),
  [568] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 2),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_record_constructor, 3),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_record_constructor, 3),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [580] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_op, 2, .production_id = 29),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_op, 2, .production_id = 29),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [590] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [594] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 1, .production_id = 4),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_type, 1, .production_id = 4),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [606] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_primitive_type, 1),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 57),
  [610] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(495),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 5, .production_id = 63),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_type, 5, .production_id = 63),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_type, 4, .production_id = 35),
  [619] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_type, 4, .production_id = 35),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(495),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7, .production_id = 143),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 7, .production_id = 143),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 59),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monotonic_rule, 5, .production_id = 59),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6, .production_id = 143),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 6, .production_id = 143),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 5),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 5),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 6, .production_id = 126),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 6, .production_id = 126),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 3, .production_id = 23),
  [665] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt, 3, .production_id = 23),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 2),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 2),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 25),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 25),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 6),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 6),
  [681] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 4, .production_id = 28),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monotonic_rule, 4, .production_id = 28),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 88),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 88),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 88), SHIFT_REPEAT(442),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 3),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 2, .production_id = 7),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 2, .production_id = 7),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [704] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 2), SHIFT_REPEAT(485),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 7, .production_id = 126),
  [711] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 7, .production_id = 126),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [715] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 2), SHIFT_REPEAT(460),
  [718] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_domain_repeat1, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 8, .production_id = 143),
  [722] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 8, .production_id = 143),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_choice_domain, 4),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_choice_domain, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_adt, 4, .production_id = 50),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_adt, 4, .production_id = 50),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [736] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_query_plan, 5, .production_id = 126),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_query_plan, 5, .production_id = 126),
  [740] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 6, .production_id = 97),
  [742] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsumptive_rule, 6, .production_id = 97),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 26),
  [746] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 26), SHIFT_REPEAT(455),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 26),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 143),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 143),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_type_union_repeat1, 2),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 87),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_adt_repeat1, 2, .production_id = 87),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 3, .production_id = 86),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adt_branch, 3, .production_id = 86),
  [767] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(520),
  [770] = {.entry = {.count = 1, .reusable = false}}, SHIFT(520),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 2, .production_id = 6),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 2, .production_id = 6),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_record_constructor_repeat1, 2),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 7, .production_id = 143),
  [788] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 7, .production_id = 143),
  [790] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 126),
  [792] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 6, .production_id = 126),
  [794] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 117),
  [796] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adt_branch, 4, .production_id = 117),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 4, .production_id = 116),
  [800] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adt_branch, 4, .production_id = 116),
  [802] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__adt_branch, 5, .production_id = 136),
  [804] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__adt_branch, 5, .production_id = 136),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 5),
  [808] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_domain_repeat1, 5),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat2, 5, .production_id = 126),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_query_plan_repeat2, 5, .production_id = 126),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 30),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_choice_domain_repeat1, 4),
  [818] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_choice_domain_repeat1, 4),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 3, .production_id = 10),
  [822] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 3, .production_id = 10),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [826] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 103),
  [828] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_decl, 7, .production_id = 103),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_synonym, 3, .production_id = 24),
  [832] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_synonym, 3, .production_id = 24),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 8, .production_id = 130),
  [838] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_decl, 8, .production_id = 130),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 131),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 131),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 132),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 132),
  [848] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 133),
  [850] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 133),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 90),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6, .production_id = 90),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, .production_id = 120),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 7, .production_id = 120),
  [860] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 89),
  [862] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6, .production_id = 89),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 7, .production_id = 119),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 7, .production_id = 119),
  [868] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(297),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 6, .production_id = 115),
  [873] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_record, 6, .production_id = 115),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 8, .production_id = 135),
  [877] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 8, .production_id = 135),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 113),
  [881] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 113),
  [883] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_init, 4, .production_id = 15),
  [885] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_init, 4, .production_id = 15),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 4, .production_id = 14),
  [889] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_decl, 4, .production_id = 14),
  [891] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 110),
  [893] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 110),
  [895] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 109),
  [897] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 109),
  [899] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 108),
  [901] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 108),
  [903] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 137),
  [905] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 8, .production_id = 137),
  [907] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 8, .production_id = 138),
  [909] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 8, .production_id = 138),
  [911] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 106),
  [913] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 106),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [917] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_include, 2, .production_id = 1),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 5, .production_id = 36),
  [921] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_decl, 5, .production_id = 36),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_ifdef, 2, .production_id = 2),
  [925] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_ifdef, 2, .production_id = 2),
  [927] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 105),
  [929] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 105),
  [931] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 4, .production_id = 13),
  [933] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 4, .production_id = 13),
  [935] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 37),
  [937] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 37),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fact, 3, .production_id = 11),
  [941] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fact, 3, .production_id = 11),
  [943] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 7, .production_id = 104),
  [945] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 7, .production_id = 104),
  [947] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 39),
  [949] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 39),
  [951] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 84),
  [953] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_record, 5, .production_id = 84),
  [955] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 5, .production_id = 83),
  [957] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_record, 5, .production_id = 83),
  [959] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 42),
  [961] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 42),
  [963] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 5, .production_id = 44),
  [965] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 5, .production_id = 44),
  [967] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 9, .production_id = 145),
  [969] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 9, .production_id = 145),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 9, .production_id = 146),
  [973] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 9, .production_id = 146),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_record, 4, .production_id = 49),
  [979] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_record, 4, .production_id = 49),
  [981] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 6, .production_id = 66),
  [983] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_decl, 6, .production_id = 66),
  [985] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_component_decl, 7, .production_id = 102),
  [987] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_component_decl, 7, .production_id = 102),
  [989] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsumptive_rule, 7, .production_id = 127),
  [991] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsumptive_rule, 7, .production_id = 127),
  [993] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc, 1),
  [995] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc, 1),
  [997] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 78),
  [999] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 78),
  [1001] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_union, 4, .production_id = 51),
  [1003] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_union, 4, .production_id = 51),
  [1005] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 6, .production_id = 91),
  [1007] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 6, .production_id = 91),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 52),
  [1011] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5, .production_id = 52),
  [1013] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 76),
  [1015] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 76),
  [1017] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 73),
  [1019] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 73),
  [1021] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 53),
  [1023] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5, .production_id = 53),
  [1025] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_qualified_name_repeat1, 2), SHIFT_REPEAT(519),
  [1028] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 5, .production_id = 10),
  [1030] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 5, .production_id = 10),
  [1032] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 72),
  [1034] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 72),
  [1036] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 6, .production_id = 98),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monotonic_rule, 6, .production_id = 98),
  [1040] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 71),
  [1042] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 71),
  [1044] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 69),
  [1046] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 69),
  [1048] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directive, 4, .production_id = 6),
  [1050] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_directive, 4, .production_id = 6),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_bare_type_decl, 1, .production_id = 4),
  [1054] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_bare_type_decl, 1, .production_id = 4),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1060] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_decl, 2),
  [1062] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_decl, 2),
  [1064] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 6, .production_id = 68),
  [1066] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 6, .production_id = 68),
  [1068] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtype, 3, .production_id = 24),
  [1070] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtype, 3, .production_id = 24),
  [1072] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3),
  [1074] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3),
  [1076] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
  [1078] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_comment, 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_decl, 4, .production_id = 17),
  [1082] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation_decl, 4, .production_id = 17),
  [1084] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_def, 3, .production_id = 2),
  [1086] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_def, 3, .production_id = 2),
  [1088] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_preproc_line, 3, .production_id = 8),
  [1090] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_preproc_line, 3, .production_id = 8),
  [1092] = {.entry = {.count = 1, .reusable = false}}, SHIFT(519),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_monotonic_rule, 5, .production_id = 56),
  [1102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_monotonic_rule, 5, .production_id = 56),
  [1104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 99),
  [1106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 99),
  [1108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [1110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 100),
  [1112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 100),
  [1114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [1116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 101),
  [1118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 101),
  [1120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [1122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 2, .production_id = 3),
  [1124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 2, .production_id = 3),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 128),
  [1130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 128),
  [1132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [1134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 6, .production_id = 61),
  [1136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 6, .production_id = 61),
  [1138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [1140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 129),
  [1142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 129),
  [1144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [1146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma, 3, .production_id = 9),
  [1148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pragma, 3, .production_id = 9),
  [1150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 7, .production_id = 61),
  [1152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 7, .production_id = 61),
  [1154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_legacy_type_decl, 2, .production_id = 5),
  [1156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_legacy_type_decl, 2, .production_id = 5),
  [1158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 99),
  [1160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 99),
  [1162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 100),
  [1164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 100),
  [1166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 128),
  [1168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 9, .production_id = 128),
  [1170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 9, .production_id = 129),
  [1172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 9, .production_id = 129),
  [1174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functor_decl, 8, .production_id = 101),
  [1176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_functor_decl, 8, .production_id = 101),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat1, 2, .production_id = 26), SHIFT_REPEAT(445),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_union_repeat1, 2), SHIFT_REPEAT(308),
  [1192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_component_decl_repeat2, 2),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [1204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [1214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [1216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [1218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [1220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [1222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [1224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 5, .production_id = 121),
  [1232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 92),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 1),
  [1238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 3),
  [1240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 5),
  [1242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 4),
  [1244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 3),
  [1246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 4),
  [1248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 3),
  [1250] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(17),
  [1253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2),
  [1255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 3),
  [1257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [1261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_conjunction, 2),
  [1265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [1267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [1271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [1273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [1287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 4, .production_id = 93),
  [1289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 92),
  [1291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 5),
  [1293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match, 4, .production_id = 93),
  [1295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_contains, 5, .production_id = 121),
  [1297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_conjunction_repeat2, 2), SHIFT_REPEAT(15),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1314] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2), SHIFT_REPEAT(490),
  [1317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat1, 2),
  [1319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2),
  [1321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 2),
  [1325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [1327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, .production_id = 38),
  [1335] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(14),
  [1338] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2, .production_id = 85), SHIFT_REPEAT(462),
  [1341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2, .production_id = 85),
  [1343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [1351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disjunction, 1),
  [1353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [1357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [1361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 3),
  [1365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [1369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [1375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1379] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 54), SHIFT_REPEAT(494),
  [1382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 2, .production_id = 54),
  [1384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_record_repeat1, 2, .production_id = 82),
  [1388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [1390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [1398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [1400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [1406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [1412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [1414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [1416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [1420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 34), SHIFT_REPEAT(296),
  [1423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 34),
  [1425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [1427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [1429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [1431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1433] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 64), SHIFT_REPEAT(516),
  [1436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 64),
  [1438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_record_constructor_repeat1, 2), SHIFT_REPEAT(41),
  [1445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [1451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 33), SHIFT_REPEAT(37),
  [1454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_match_repeat1, 2, .production_id = 33),
  [1456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [1458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [1464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [1468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [1470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2), SHIFT_REPEAT(502),
  [1483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2),
  [1485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2), SHIFT_REPEAT(438),
  [1488] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_monotonic_rule_repeat1, 2),
  [1490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [1492] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 67), SHIFT_REPEAT(458),
  [1495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 67),
  [1497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [1499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [1501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [1503] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 21), SHIFT_REPEAT(466),
  [1506] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 21),
  [1508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [1510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [1516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [1520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1526] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disjunction_repeat1, 2), SHIFT_REPEAT(13),
  [1529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 14),
  [1535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [1541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [1545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(482),
  [1549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_relation_decl_repeat2, 2, .production_id = 16),
  [1551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [1553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_decl_repeat1, 2, .production_id = 65),
  [1555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [1557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_query_plan_repeat1, 2, .production_id = 144),
  [1561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functor_decl_repeat1, 2, .production_id = 16),
  [1563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [1565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [1567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_component_type_repeat1, 2, .production_id = 62),
  [1569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_directive_repeat2, 4, .production_id = 118),
  [1571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [1573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [1579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [1581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [1587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [1595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [1599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [1603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [1607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [1611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [1623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [1631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [1633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined_functor, 2, .production_id = 2),
  [1637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [1641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1647] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [1659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [1665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [1677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [1685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_souffle(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
