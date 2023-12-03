#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 44
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  sym_name = 1,
  anon_sym_def = 2,
  anon_sym_let = 3,
  anon_sym_entry = 4,
  anon_sym_EQ = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  aux_sym_binary_token1 = 8,
  aux_sym_binary_token2 = 9,
  anon_sym_DASH = 10,
  anon_sym_if = 11,
  anon_sym_then = 12,
  anon_sym_else = 13,
  sym__comment = 14,
  sym_source_file = 15,
  sym__dec = 16,
  sym_val_bind = 17,
  sym_entry_point = 18,
  sym__simple_bind = 19,
  sym__atom = 20,
  sym__exp = 21,
  sym_apply = 22,
  sym_binary = 23,
  sym_neg = 24,
  sym_if = 25,
  aux_sym_source_file_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_def] = "def",
  [anon_sym_let] = "let",
  [anon_sym_entry] = "entry",
  [anon_sym_EQ] = "=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_binary_token1] = "qualsymbol",
  [aux_sym_binary_token2] = "qualsymbol",
  [anon_sym_DASH] = "-",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [sym__comment] = "_comment",
  [sym_source_file] = "source_file",
  [sym__dec] = "_dec",
  [sym_val_bind] = "val_bind",
  [sym_entry_point] = "entry_point",
  [sym__simple_bind] = "_simple_bind",
  [sym__atom] = "_atom",
  [sym__exp] = "_exp",
  [sym_apply] = "apply",
  [sym_binary] = "binary",
  [sym_neg] = "neg",
  [sym_if] = "if",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_entry] = anon_sym_entry,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_binary_token1] = aux_sym_binary_token1,
  [aux_sym_binary_token2] = aux_sym_binary_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [sym__comment] = sym__comment,
  [sym_source_file] = sym_source_file,
  [sym__dec] = sym__dec,
  [sym_val_bind] = sym_val_bind,
  [sym_entry_point] = sym_entry_point,
  [sym__simple_bind] = sym__simple_bind,
  [sym__atom] = sym__atom,
  [sym__exp] = sym__exp,
  [sym_apply] = sym_apply,
  [sym_binary] = sym_binary,
  [sym_neg] = sym_neg,
  [sym_if] = sym_if,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_entry] = {
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
  [sym__comment] = {
    .visible = false,
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
  [sym_entry_point] = {
    .visible = true,
    .named = true,
  },
  [sym__simple_bind] = {
    .visible = false,
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
};

enum {
  field_bindto = 1,
  field_val = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_bindto] = "bindto",
  [field_val] = "val",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_bindto, 1, .inherited = true},
    {field_val, 1, .inherited = true},
  [2] =
    {field_bindto, 0},
    {field_val, 2},
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
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 2,
  [10] = 7,
  [11] = 11,
  [12] = 5,
  [13] = 6,
  [14] = 3,
  [15] = 4,
  [16] = 8,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 17,
  [25] = 21,
  [26] = 20,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 29,
  [31] = 27,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 34,
  [38] = 36,
  [39] = 35,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
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
      ACCEPT_TOKEN(sym__comment);
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
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 't') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'f') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'h') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'f') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 18:
      if (lookahead == 'y') ADVANCE(20);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_entry);
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
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_entry] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [sym__comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__dec] = STATE(22),
    [sym_val_bind] = STATE(22),
    [sym_entry_point] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_def] = ACTIONS(7),
    [anon_sym_let] = ACTIONS(7),
    [anon_sym_entry] = ACTIONS(9),
    [sym__comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_if,
    STATE(17), 2,
      sym__atom,
      sym_apply,
    STATE(27), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [26] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(39), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [52] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(37), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [78] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(36), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [104] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(19), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [130] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(30), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [156] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(18), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [182] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(31), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [208] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_if,
    STATE(17), 2,
      sym__atom,
      sym_apply,
    STATE(29), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [234] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_if,
    STATE(17), 2,
      sym__atom,
      sym_apply,
    STATE(28), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [260] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(38), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [286] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_if,
    STATE(17), 2,
      sym__atom,
      sym_apply,
    STATE(19), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [312] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(35), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [338] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(19), 1,
      sym_name,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_DASH,
    ACTIONS(25), 1,
      anon_sym_if,
    STATE(24), 2,
      sym__atom,
      sym_apply,
    STATE(34), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [364] = 7,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_if,
    STATE(17), 2,
      sym__atom,
      sym_apply,
    STATE(18), 4,
      sym__exp,
      sym_binary,
      sym_neg,
      sym_if,
  [390] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_name,
    STATE(21), 1,
      sym__atom,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym_binary_token2,
    ACTIONS(31), 4,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
  [413] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(35), 6,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [430] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(39), 6,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [447] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(41), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      aux_sym_binary_token2,
    ACTIONS(43), 5,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
      sym_name,
  [463] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      aux_sym_binary_token2,
    ACTIONS(47), 5,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
      sym_name,
  [479] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      anon_sym_entry,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_def,
      anon_sym_let,
    STATE(23), 4,
      sym__dec,
      sym_val_bind,
      sym_entry_point,
      aux_sym_source_file_repeat1,
  [499] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      anon_sym_entry,
    ACTIONS(53), 2,
      anon_sym_def,
      anon_sym_let,
    STATE(23), 4,
      sym__dec,
      sym_val_bind,
      sym_entry_point,
      aux_sym_source_file_repeat1,
  [519] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      sym_name,
    STATE(25), 1,
      sym__atom,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(31), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [541] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(45), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(47), 4,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
      sym_name,
  [556] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(41), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(43), 4,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
      sym_name,
  [571] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      aux_sym_binary_token2,
    ACTIONS(35), 4,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
  [587] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(61), 1,
      aux_sym_binary_token2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym_binary_token1,
    ACTIONS(65), 3,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [605] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(61), 1,
      aux_sym_binary_token2,
    ACTIONS(67), 1,
      aux_sym_binary_token1,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 3,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [623] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 1,
      aux_sym_binary_token1,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(71), 2,
      anon_sym_then,
      anon_sym_else,
  [640] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(33), 1,
      anon_sym_RPAREN,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(35), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [655] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [665] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [675] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      aux_sym_binary_token1,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(81), 1,
      anon_sym_else,
  [688] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      aux_sym_binary_token1,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(83), 1,
      anon_sym_then,
  [701] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      aux_sym_binary_token1,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
  [714] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      aux_sym_binary_token1,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(87), 1,
      anon_sym_else,
  [727] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      aux_sym_binary_token1,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
  [740] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      aux_sym_binary_token1,
    ACTIONS(75), 1,
      aux_sym_binary_token2,
    ACTIONS(91), 1,
      anon_sym_then,
  [753] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      sym_name,
    STATE(33), 1,
      sym__simple_bind,
  [763] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      sym_name,
    STATE(32), 1,
      sym__simple_bind,
  [773] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(95), 1,
      anon_sym_EQ,
  [780] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
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
  [SMALL_STATE(19)] = 430,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 463,
  [SMALL_STATE(22)] = 479,
  [SMALL_STATE(23)] = 499,
  [SMALL_STATE(24)] = 519,
  [SMALL_STATE(25)] = 541,
  [SMALL_STATE(26)] = 556,
  [SMALL_STATE(27)] = 571,
  [SMALL_STATE(28)] = 587,
  [SMALL_STATE(29)] = 605,
  [SMALL_STATE(30)] = 623,
  [SMALL_STATE(31)] = 640,
  [SMALL_STATE(32)] = 655,
  [SMALL_STATE(33)] = 665,
  [SMALL_STATE(34)] = 675,
  [SMALL_STATE(35)] = 688,
  [SMALL_STATE(36)] = 701,
  [SMALL_STATE(37)] = 714,
  [SMALL_STATE(38)] = 727,
  [SMALL_STATE(39)] = 740,
  [SMALL_STATE(40)] = 753,
  [SMALL_STATE(41)] = 763,
  [SMALL_STATE(42)] = 773,
  [SMALL_STATE(43)] = 780,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neg, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neg, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_bind, 3, .production_id = 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_bind, 3, .production_id = 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_point, 2, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_bind, 2, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
