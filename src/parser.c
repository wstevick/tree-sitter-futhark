#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 6

enum {
  sym_name = 1,
  anon_sym_def = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  aux_sym_binary_token1 = 6,
  aux_sym_binary_token2 = 7,
  anon_sym_DASH = 8,
  anon_sym_if = 9,
  anon_sym_then = 10,
  anon_sym_else = 11,
  sym_comment = 12,
  sym_source_file = 13,
  sym__dec = 14,
  sym_val_bind = 15,
  sym__atom = 16,
  sym__exp = 17,
  sym_apply = 18,
  sym_binary = 19,
  sym_neg = 20,
  sym_if = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_apply_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_def] = "def",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_binary_token1] = "qualsymbol",
  [aux_sym_binary_token2] = "qualsymbol",
  [anon_sym_DASH] = "-",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__dec] = "_dec",
  [sym_val_bind] = "val_bind",
  [sym__atom] = "_atom",
  [sym__exp] = "_exp",
  [sym_apply] = "apply",
  [sym_binary] = "binary",
  [sym_neg] = "neg",
  [sym_if] = "if",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_apply_repeat1] = "apply_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_binary_token1] = aux_sym_binary_token1,
  [aux_sym_binary_token2] = aux_sym_binary_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__dec] = sym__dec,
  [sym_val_bind] = sym_val_bind,
  [sym__atom] = sym__atom,
  [sym__exp] = sym__exp,
  [sym_apply] = sym_apply,
  [sym_binary] = sym_binary,
  [sym_neg] = sym_neg,
  [sym_if] = sym_if,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_apply_repeat1] = aux_sym_apply_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_binary_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_binary_token2] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__dec] = {
    .visible = false,
    .named = true,
  },
  [sym_val_bind] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym_apply] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_neg] = {
    .visible = true,
    .named = true,
  },
  [sym_if] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_apply_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_args = 1,
  field_bindto = 2,
  field_cond = 3,
  field_else = 4,
  field_func = 5,
  field_lhs = 6,
  field_negated = 7,
  field_op = 8,
  field_rhs = 9,
  field_then = 10,
  field_val = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_bindto] = "bindto",
  [field_cond] = "cond",
  [field_else] = "else",
  [field_func] = "func",
  [field_lhs] = "lhs",
  [field_negated] = "negated",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_then] = "then",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bindto, 1},
    {field_val, 3},
  [2] =
    {field_negated, 1},
  [3] =
    {field_args, 1},
    {field_func, 0},
  [5] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [8] =
    {field_cond, 1},
    {field_else, 5},
    {field_then, 3},
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
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 6,
  [9] = 9,
  [10] = 4,
  [11] = 11,
  [12] = 9,
  [13] = 11,
  [14] = 14,
  [15] = 3,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 18,
  [21] = 17,
  [22] = 19,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 29,
  [32] = 27,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 36,
  [38] = 34,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 42,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(11);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(2);
      END_STATE();
    case 4:
      if (eof) ADVANCE(5);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == '*' ||
          lookahead == '/') ADVANCE(11);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_binary_token1);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_binary_token2);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'd') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'h') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__dec] = STATE(28),
    [sym_val_bind] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(34), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [26] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_if,
    STATE(20), 1,
      sym__atom,
    STATE(32), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [52] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(39), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [78] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(38), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [104] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(37), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [130] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_if,
    STATE(20), 1,
      sym__atom,
    STATE(33), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [156] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(36), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [182] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_if,
    STATE(20), 1,
      sym__atom,
    STATE(25), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [208] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(35), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_if,
    STATE(20), 1,
      sym__atom,
    STATE(31), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [260] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(25), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [286] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(29), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [312] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(24), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [338] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_name,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(15), 1,
      anon_sym_if,
    STATE(18), 1,
      sym__atom,
    STATE(27), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [364] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_name,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_if,
    STATE(20), 1,
      sym__atom,
    STATE(24), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [390] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_name,
    ACTIONS(28), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    STATE(17), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(33), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [413] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 1,
      sym_name,
    ACTIONS(37), 2,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    STATE(19), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(39), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [436] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(41), 1,
      sym_name,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    STATE(17), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(45), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [459] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_name,
    ACTIONS(37), 2,
      ts_builtin_sym_end,
      aux_sym_binary_token2,
    ACTIONS(39), 2,
      anon_sym_def,
      aux_sym_binary_token1,
    STATE(22), 2,
      sym__atom,
      aux_sym_apply_repeat1,
  [481] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      aux_sym_binary_token2,
    ACTIONS(33), 2,
      anon_sym_def,
      aux_sym_binary_token1,
    STATE(21), 2,
      sym__atom,
      aux_sym_apply_repeat1,
  [503] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym_name,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_binary_token2,
    ACTIONS(45), 2,
      anon_sym_def,
      aux_sym_binary_token1,
    STATE(21), 2,
      sym__atom,
      aux_sym_apply_repeat1,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(57), 4,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
      sym_name,
  [540] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(63), 4,
      anon_sym_def,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [555] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(67), 4,
      anon_sym_def,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [570] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(57), 3,
      anon_sym_def,
      aux_sym_binary_token1,
      sym_name,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      aux_sym_binary_token2,
  [584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(63), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [599] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_def,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(30), 3,
      sym__dec,
      sym_val_bind,
      aux_sym_source_file_repeat1,
  [614] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      aux_sym_binary_token1,
    ACTIONS(77), 2,
      anon_sym_then,
      anon_sym_else,
  [631] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      anon_sym_def,
    STATE(30), 3,
      sym__dec,
      sym_val_bind,
      aux_sym_source_file_repeat1,
  [646] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_def,
    ACTIONS(84), 1,
      aux_sym_binary_token1,
    ACTIONS(86), 1,
      aux_sym_binary_token2,
  [662] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      aux_sym_binary_token2,
    ACTIONS(63), 2,
      anon_sym_def,
      aux_sym_binary_token1,
  [676] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 1,
      aux_sym_binary_token1,
    ACTIONS(86), 1,
      aux_sym_binary_token2,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(90), 1,
      anon_sym_def,
  [692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(75), 1,
      aux_sym_binary_token1,
    ACTIONS(92), 1,
      anon_sym_else,
  [705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(75), 1,
      aux_sym_binary_token1,
    ACTIONS(94), 1,
      anon_sym_then,
  [718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(75), 1,
      aux_sym_binary_token1,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
  [731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(75), 1,
      aux_sym_binary_token1,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
  [744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(75), 1,
      aux_sym_binary_token1,
    ACTIONS(100), 1,
      anon_sym_else,
  [757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      aux_sym_binary_token2,
    ACTIONS(75), 1,
      aux_sym_binary_token1,
    ACTIONS(102), 1,
      anon_sym_then,
  [770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [777] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_name,
  [784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 130,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 208,
  [SMALL_STATE(11)] = 234,
  [SMALL_STATE(12)] = 260,
  [SMALL_STATE(13)] = 286,
  [SMALL_STATE(14)] = 312,
  [SMALL_STATE(15)] = 338,
  [SMALL_STATE(16)] = 364,
  [SMALL_STATE(17)] = 390,
  [SMALL_STATE(18)] = 413,
  [SMALL_STATE(19)] = 436,
  [SMALL_STATE(20)] = 459,
  [SMALL_STATE(21)] = 481,
  [SMALL_STATE(22)] = 503,
  [SMALL_STATE(23)] = 525,
  [SMALL_STATE(24)] = 540,
  [SMALL_STATE(25)] = 555,
  [SMALL_STATE(26)] = 570,
  [SMALL_STATE(27)] = 584,
  [SMALL_STATE(28)] = 599,
  [SMALL_STATE(29)] = 614,
  [SMALL_STATE(30)] = 631,
  [SMALL_STATE(31)] = 646,
  [SMALL_STATE(32)] = 662,
  [SMALL_STATE(33)] = 676,
  [SMALL_STATE(34)] = 692,
  [SMALL_STATE(35)] = 705,
  [SMALL_STATE(36)] = 718,
  [SMALL_STATE(37)] = 731,
  [SMALL_STATE(38)] = 744,
  [SMALL_STATE(39)] = 757,
  [SMALL_STATE(40)] = 770,
  [SMALL_STATE(41)] = 777,
  [SMALL_STATE(42)] = 784,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(17),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply, 2, .production_id = 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply, 2, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(21),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(8),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neg, 2, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neg, 2, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6, .production_id = 5),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_bind, 4, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_val_bind, 4, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_futhark(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
