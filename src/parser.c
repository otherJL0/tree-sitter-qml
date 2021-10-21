#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 15
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 13
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_DOT = 2,
  anon_sym_as = 3,
  sym_identifier = 4,
  sym_number = 5,
  sym_document = 6,
  sym__statement = 7,
  sym_import_statement = 8,
  sym_module_import = 9,
  sym_version = 10,
  sym_qualified_import = 11,
  aux_sym_document_repeat1 = 12,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_import_statement] = "import_statement",
  [sym_module_import] = "module_import",
  [sym_version] = "version",
  [sym_qualified_import] = "qualified_import",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_import_statement] = sym_import_statement,
  [sym_module_import] = sym_module_import,
  [sym_version] = sym_version,
  [sym_qualified_import] = sym_qualified_import,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_import_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_module_import] = {
    .visible = true,
    .named = true,
  },
  [sym_version] = {
    .visible = true,
    .named = true,
  },
  [sym_qualified_import] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 1:
      if (lookahead == 'm') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
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
  [10] = {.lex_state = 7},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(11),
    [sym__statement] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym_module_import] = STATE(4),
    [sym_qualified_import] = STATE(7),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
  },
  [2] = {
    [sym__statement] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym_module_import] = STATE(4),
    [sym_qualified_import] = STATE(7),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(5),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_import_statement] = STATE(3),
    [sym_module_import] = STATE(4),
    [sym_qualified_import] = STATE(7),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_import] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(16), 1,
      anon_sym_as,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [8] = 1,
    ACTIONS(18), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
  [14] = 1,
    ACTIONS(20), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
  [20] = 1,
    ACTIONS(14), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [25] = 2,
    ACTIONS(22), 1,
      sym_number,
    STATE(5), 1,
      sym_version,
  [32] = 1,
    ACTIONS(24), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [37] = 1,
    ACTIONS(26), 1,
      sym_identifier,
  [41] = 1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [45] = 1,
    ACTIONS(30), 1,
      sym_identifier,
  [49] = 1,
    ACTIONS(32), 1,
      anon_sym_DOT,
  [53] = 1,
    ACTIONS(34), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 8,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 25,
  [SMALL_STATE(9)] = 32,
  [SMALL_STATE(10)] = 37,
  [SMALL_STATE(11)] = 41,
  [SMALL_STATE(12)] = 45,
  [SMALL_STATE(13)] = 49,
  [SMALL_STATE(14)] = 53,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(10),
  [14] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 1),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_import, 3),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [28] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_qml(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
