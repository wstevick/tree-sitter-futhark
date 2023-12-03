#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
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
  aux_sym_apply_repeat1 = 27,
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
  [aux_sym_apply_repeat1] = "apply_repeat1",
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
  [aux_sym_apply_repeat1] = {
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
  [9] = 8,
  [10] = 10,
  [11] = 5,
  [12] = 6,
  [13] = 4,
  [14] = 14,
  [15] = 7,
  [16] = 2,
  [17] = 17,
  [18] = 3,
  [19] = 19,
  [20] = 14,
  [21] = 19,
  [22] = 17,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 26,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
  [40] = 38,
  [41] = 36,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
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
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 4},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
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
    [sym_source_file] = STATE(44),
    [sym__dec] = STATE(25),
    [sym_val_bind] = STATE(25),
    [sym_entry_point] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
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
    STATE(20), 1,
      sym__atom,
    STATE(24), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [26] = 7,
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
    STATE(20), 1,
      sym__atom,
    STATE(40), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [52] = 7,
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
    STATE(20), 1,
      sym__atom,
    STATE(41), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [78] = 7,
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
    STATE(20), 1,
      sym__atom,
    STATE(39), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [104] = 7,
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
    STATE(20), 1,
      sym__atom,
    STATE(23), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [130] = 7,
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
      sym__comment,
    ACTIONS(11), 1,
      sym_name,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_if,
    STATE(20), 1,
      sym__atom,
    STATE(32), 5,
      sym__exp,
      sym_apply,
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
    STATE(14), 1,
      sym__atom,
    STATE(29), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [208] = 7,
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
    STATE(14), 1,
      sym__atom,
    STATE(31), 5,
      sym__exp,
      sym_apply,
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
    STATE(20), 1,
      sym__atom,
    STATE(37), 5,
      sym__exp,
      sym_apply,
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
    STATE(14), 1,
      sym__atom,
    STATE(23), 5,
      sym__exp,
      sym_apply,
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
    STATE(20), 1,
      sym__atom,
    STATE(36), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [312] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      sym_name,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      aux_sym_binary_token2,
    STATE(19), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(31), 4,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
  [336] = 7,
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
    STATE(14), 1,
      sym__atom,
    STATE(30), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [362] = 7,
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
    STATE(14), 1,
      sym__atom,
    STATE(24), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [388] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(35), 1,
      sym_name,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      aux_sym_binary_token2,
    STATE(17), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(38), 4,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
  [412] = 7,
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
    STATE(20), 1,
      sym__atom,
    STATE(38), 5,
      sym__exp,
      sym_apply,
      sym_binary,
      sym_neg,
      sym_if,
  [438] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(45), 1,
      sym_name,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_binary_token2,
    STATE(17), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(47), 4,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
  [462] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      sym_name,
    ACTIONS(27), 2,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    STATE(21), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(31), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [485] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      sym_name,
    ACTIONS(43), 2,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    STATE(22), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(47), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [508] = 6,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(53), 1,
      sym_name,
    ACTIONS(56), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 2,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    STATE(22), 2,
      sym__atom,
      aux_sym_apply_repeat1,
    ACTIONS(38), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [531] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(59), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(61), 6,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [548] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(65), 6,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [565] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(9), 1,
      anon_sym_entry,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_def,
      anon_sym_let,
    STATE(27), 4,
      sym__dec,
      sym_val_bind,
      sym_entry_point,
      aux_sym_source_file_repeat1,
  [585] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      aux_sym_binary_token2,
    ACTIONS(71), 5,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
      sym_name,
  [601] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_entry,
    ACTIONS(75), 2,
      anon_sym_def,
      anon_sym_let,
    STATE(27), 4,
      sym__dec,
      sym_val_bind,
      sym_entry_point,
      aux_sym_source_file_repeat1,
  [621] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(69), 3,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      aux_sym_binary_token2,
    ACTIONS(71), 4,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
      sym_name,
  [636] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(81), 1,
      aux_sym_binary_token2,
    ACTIONS(65), 4,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
      aux_sym_binary_token1,
  [652] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(81), 1,
      aux_sym_binary_token2,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym_binary_token1,
    ACTIONS(85), 3,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [670] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(81), 1,
      aux_sym_binary_token2,
    ACTIONS(87), 1,
      aux_sym_binary_token1,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 3,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [688] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(65), 3,
      aux_sym_binary_token1,
      anon_sym_then,
      anon_sym_else,
  [703] = 5,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(95), 1,
      aux_sym_binary_token1,
    ACTIONS(85), 2,
      anon_sym_then,
      anon_sym_else,
  [720] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [730] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_let,
      anon_sym_entry,
  [740] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(95), 1,
      aux_sym_binary_token1,
    ACTIONS(101), 1,
      anon_sym_then,
  [753] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(95), 1,
      aux_sym_binary_token1,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
  [766] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(95), 1,
      aux_sym_binary_token1,
    ACTIONS(105), 1,
      anon_sym_else,
  [779] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(95), 1,
      aux_sym_binary_token1,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
  [792] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(95), 1,
      aux_sym_binary_token1,
    ACTIONS(109), 1,
      anon_sym_else,
  [805] = 4,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(93), 1,
      aux_sym_binary_token2,
    ACTIONS(95), 1,
      aux_sym_binary_token1,
    ACTIONS(111), 1,
      anon_sym_then,
  [818] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(113), 1,
      sym_name,
    STATE(34), 1,
      sym__simple_bind,
  [828] = 3,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(113), 1,
      sym_name,
    STATE(35), 1,
      sym__simple_bind,
  [838] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
  [845] = 2,
    ACTIONS(3), 1,
      sym__comment,
    ACTIONS(117), 1,
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
  [SMALL_STATE(15)] = 336,
  [SMALL_STATE(16)] = 362,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 412,
  [SMALL_STATE(19)] = 438,
  [SMALL_STATE(20)] = 462,
  [SMALL_STATE(21)] = 485,
  [SMALL_STATE(22)] = 508,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 548,
  [SMALL_STATE(25)] = 565,
  [SMALL_STATE(26)] = 585,
  [SMALL_STATE(27)] = 601,
  [SMALL_STATE(28)] = 621,
  [SMALL_STATE(29)] = 636,
  [SMALL_STATE(30)] = 652,
  [SMALL_STATE(31)] = 670,
  [SMALL_STATE(32)] = 688,
  [SMALL_STATE(33)] = 703,
  [SMALL_STATE(34)] = 720,
  [SMALL_STATE(35)] = 730,
  [SMALL_STATE(36)] = 740,
  [SMALL_STATE(37)] = 753,
  [SMALL_STATE(38)] = 766,
  [SMALL_STATE(39)] = 779,
  [SMALL_STATE(40)] = 792,
  [SMALL_STATE(41)] = 805,
  [SMALL_STATE(42)] = 818,
  [SMALL_STATE(43)] = 828,
  [SMALL_STATE(44)] = 838,
  [SMALL_STATE(45)] = 845,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__exp, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__exp, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(17),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(11),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_apply, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_apply, 2),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(22),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_apply_repeat1, 2), SHIFT_REPEAT(5),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_neg, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_neg, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__atom, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__atom, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if, 6),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if, 6),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__simple_bind, 3, .production_id = 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__simple_bind, 3, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_point, 2, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_bind, 2, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [115] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
