#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  sym_name = 1,
  anon_sym_def = 2,
  anon_sym_EQ = 3,
  anon_sym_LPAREN = 4,
  anon_sym_RPAREN = 5,
  anon_sym_PLUS = 6,
  anon_sym_DASH = 7,
  anon_sym_STAR = 8,
  anon_sym_SLASH = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym__dec = 12,
  sym_val_bind = 13,
  sym__atom = 14,
  sym__exp = 15,
  sym_apply = 16,
  sym_binary = 17,
  sym_neg = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_apply_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_def] = "def",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "symbol",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "symbol",
  [anon_sym_SLASH] = "symbol",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__dec] = "_dec",
  [sym_val_bind] = "val_bind",
  [sym__atom] = "_atom",
  [sym__exp] = "_exp",
  [sym_apply] = "apply",
  [sym_binary] = "binary",
  [sym_neg] = "neg",
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
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_PLUS,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__dec] = sym__dec,
  [sym_val_bind] = sym_val_bind,
  [sym__atom] = sym__atom,
  [sym__exp] = sym__exp,
  [sym_apply] = sym_apply,
  [sym_binary] = sym_binary,
  [sym_neg] = sym_neg,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = true,
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
  field_func = 3,
  field_lhs = 4,
  field_negated = 5,
  field_op = 6,
  field_rhs = 7,
  field_val = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_args] = "args",
  [field_bindto] = "bindto",
  [field_func] = "func",
  [field_lhs] = "lhs",
  [field_negated] = "negated",
  [field_op] = "op",
  [field_rhs] = "rhs",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 1},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [4] = {
    [1] = anon_sym_PLUS,
  },
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
  [6] = 3,
  [7] = 4,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 9,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 8,
  [16] = 16,
  [17] = 14,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 23,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(2);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(5);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '+') ADVANCE(6);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '=') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(11);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '\'' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      END_STATE();
    case 11:
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == 'f') ADVANCE(3);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_def);
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
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(28),
    [sym__dec] = STATE(25),
    [sym_val_bind] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__atom] = STATE(4),
    [aux_sym_apply_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_name] = ACTIONS(11),
    [anon_sym_def] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__atom] = STATE(3),
    [aux_sym_apply_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_name] = ACTIONS(19),
    [anon_sym_def] = ACTIONS(22),
    [anon_sym_LPAREN] = ACTIONS(24),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(22),
    [anon_sym_STAR] = ACTIONS(17),
    [anon_sym_SLASH] = ACTIONS(17),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__atom] = STATE(3),
    [aux_sym_apply_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_name] = ACTIONS(29),
    [anon_sym_def] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_DASH,
    ACTIONS(33), 1,
      sym_name,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    STATE(7), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(9), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [23] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(22), 1,
      anon_sym_DASH,
    ACTIONS(37), 1,
      sym_name,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(6), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(17), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [46] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      anon_sym_DASH,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(43), 1,
      sym_name,
    STATE(6), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(27), 4,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [69] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym__atom,
    STATE(20), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [91] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym__atom,
    STATE(27), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [113] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(51), 1,
      anon_sym_DASH,
    STATE(2), 1,
      sym__atom,
    STATE(21), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [135] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym__atom,
    STATE(23), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [157] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(51), 1,
      anon_sym_DASH,
    STATE(2), 1,
      sym__atom,
    STATE(18), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [179] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym__atom,
    STATE(18), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [201] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(51), 1,
      anon_sym_DASH,
    STATE(2), 1,
      sym__atom,
    STATE(22), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [223] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(51), 1,
      anon_sym_DASH,
    STATE(2), 1,
      sym__atom,
    STATE(20), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [245] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 3,
      anon_sym_def,
      anon_sym_DASH,
      sym_name,
    ACTIONS(53), 5,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [261] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(47), 1,
      anon_sym_DASH,
    STATE(5), 1,
      sym__atom,
    STATE(26), 4,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
  [283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_DASH,
    ACTIONS(57), 6,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [298] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DASH,
    ACTIONS(53), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_name,
  [313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(61), 6,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
  [328] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_PLUS,
    ACTIONS(69), 1,
      anon_sym_DASH,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      anon_sym_def,
    ACTIONS(71), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [346] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(71), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(61), 3,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_PLUS,
  [362] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      anon_sym_def,
    STATE(24), 3,
      sym__dec,
      sym_val_bind,
      aux_sym_source_file_repeat1,
  [394] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_def,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    STATE(24), 3,
      sym__dec,
      sym_val_bind,
      aux_sym_source_file_repeat1,
  [409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(61), 2,
      anon_sym_RPAREN,
      anon_sym_PLUS,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_PLUS,
    ACTIONS(77), 1,
      anon_sym_DASH,
    ACTIONS(88), 1,
      anon_sym_RPAREN,
    ACTIONS(79), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
  [441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
  [448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      sym_name,
  [455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 23,
  [SMALL_STATE(7)] = 46,
  [SMALL_STATE(8)] = 69,
  [SMALL_STATE(9)] = 91,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 135,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 179,
  [SMALL_STATE(14)] = 201,
  [SMALL_STATE(15)] = 223,
  [SMALL_STATE(16)] = 245,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 283,
  [SMALL_STATE(19)] = 298,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 346,
  [SMALL_STATE(23)] = 362,
  [SMALL_STATE(24)] = 379,
  [SMALL_STATE(25)] = 394,
  [SMALL_STATE(26)] = 409,
  [SMALL_STATE(27)] = 424,
  [SMALL_STATE(28)] = 441,
  [SMALL_STATE(29)] = 448,
  [SMALL_STATE(30)] = 455,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(11),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply, 2, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply, 2, .production_id = 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(6),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(9),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 3),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neg, 2, .production_id = 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neg, 2, .production_id = 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 4),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_bind, 4, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
