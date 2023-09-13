#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  sym_name = 1,
  anon_sym_def = 2,
  anon_sym_a = 3,
  anon_sym_EQ = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_PLUS = 7,
  anon_sym_DASH = 8,
  anon_sym_STAR = 9,
  anon_sym_SLASH = 10,
  sym_comment = 11,
  sym_source_file = 12,
  sym__atom = 13,
  sym__exp = 14,
  sym_call = 15,
  sym_binary = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_def] = "def",
  [anon_sym_a] = "a",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "symbol",
  [anon_sym_DASH] = "symbol",
  [anon_sym_STAR] = "symbol",
  [anon_sym_SLASH] = "symbol",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__atom] = "_atom",
  [sym__exp] = "_exp",
  [sym_call] = "call",
  [sym_binary] = "binary",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_a] = anon_sym_a,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_PLUS,
  [anon_sym_SLASH] = anon_sym_PLUS,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__atom] = sym__atom,
  [sym__exp] = sym__exp,
  [sym_call] = sym_call,
  [sym_binary] = sym_binary,
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
  [anon_sym_a] = {
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
    .named = true,
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
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym__exp] = {
    .visible = false,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_arg = 1,
  field_func = 2,
  field_lhs = 3,
  field_op = 4,
  field_rhs = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arg] = "arg",
  [field_func] = "func",
  [field_lhs] = "lhs",
  [field_op] = "op",
  [field_rhs] = "rhs",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_arg, 1},
    {field_func, 0},
  [2] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
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
  [8] = 3,
  [9] = 4,
  [10] = 6,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 13,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 20,
  [21] = 21,
  [22] = 22,
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
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      ACCEPT_TOKEN(anon_sym_a);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(4);
      END_STATE();
    case 4:
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_a] = ACTIONS(1),
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
    [sym_source_file] = STATE(22),
    [anon_sym_def] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__atom] = STATE(10),
    [sym__exp] = STATE(10),
    [sym_call] = STATE(10),
    [sym_binary] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__atom] = STATE(6),
    [sym__exp] = STATE(6),
    [sym_call] = STATE(6),
    [sym_binary] = STATE(6),
    [sym_name] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__atom] = STATE(6),
    [sym__exp] = STATE(6),
    [sym_call] = STATE(6),
    [sym_binary] = STATE(6),
    [sym_name] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__atom] = STATE(6),
    [sym__exp] = STATE(6),
    [sym_call] = STATE(6),
    [sym_binary] = STATE(6),
    [sym_name] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__atom] = STATE(6),
    [sym__exp] = STATE(6),
    [sym_call] = STATE(6),
    [sym_binary] = STATE(6),
    [sym_name] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__atom] = STATE(10),
    [sym__exp] = STATE(10),
    [sym_call] = STATE(10),
    [sym_binary] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_name] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(37),
    [anon_sym_STAR] = ACTIONS(15),
    [anon_sym_SLASH] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__atom] = STATE(6),
    [sym__exp] = STATE(6),
    [sym_call] = STATE(6),
    [sym_binary] = STATE(6),
    [sym_name] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [anon_sym_STAR] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__atom] = STATE(10),
    [sym__exp] = STATE(10),
    [sym_call] = STATE(10),
    [sym_binary] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_name] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(13),
    [anon_sym_STAR] = ACTIONS(7),
    [anon_sym_SLASH] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__atom] = STATE(10),
    [sym__exp] = STATE(10),
    [sym_call] = STATE(10),
    [sym_binary] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym_name] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(31),
    [anon_sym_STAR] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(41), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_name,
  [15] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      anon_sym_DASH,
    ACTIONS(41), 6,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      sym_name,
  [30] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_name,
    STATE(9), 4,
      sym__atom,
      sym__exp,
      sym_call,
      sym_binary,
  [46] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(47), 1,
      sym_name,
    STATE(5), 4,
      sym__atom,
      sym__exp,
      sym_call,
      sym_binary,
  [62] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_name,
    STATE(4), 4,
      sym__atom,
      sym__exp,
      sym_call,
      sym_binary,
  [78] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_name,
    STATE(2), 4,
      sym__atom,
      sym__exp,
      sym_call,
      sym_binary,
  [94] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(53), 1,
      sym_name,
    STATE(8), 4,
      sym__atom,
      sym__exp,
      sym_call,
      sym_binary,
  [110] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      sym_name,
    STATE(7), 4,
      sym__atom,
      sym__exp,
      sym_call,
      sym_binary,
  [126] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(57), 1,
      sym_name,
    STATE(3), 4,
      sym__atom,
      sym__exp,
      sym_call,
      sym_binary,
  [142] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 1,
      anon_sym_a,
  [149] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_EQ,
  [156] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 15,
  [SMALL_STATE(13)] = 30,
  [SMALL_STATE(14)] = 46,
  [SMALL_STATE(15)] = 62,
  [SMALL_STATE(16)] = 78,
  [SMALL_STATE(17)] = 94,
  [SMALL_STATE(18)] = 110,
  [SMALL_STATE(19)] = 126,
  [SMALL_STATE(20)] = 142,
  [SMALL_STATE(21)] = 149,
  [SMALL_STATE(22)] = 156,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2, .production_id = 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2, .production_id = 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
