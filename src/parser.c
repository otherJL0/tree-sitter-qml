#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_import = 1,
  anon_sym_DOT = 2,
  anon_sym_as = 3,
  sym_path = 4,
  sym_file = 5,
  sym_identifier = 6,
  sym_number = 7,
  sym_document = 8,
  sym__statement = 9,
  sym_import_statement = 10,
  sym_module_import = 11,
  sym_module = 12,
  sym_version = 13,
  sym_qualified_import = 14,
  sym_directory_import = 15,
  sym_js_import = 16,
  aux_sym_document_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_import] = "import",
  [anon_sym_DOT] = ".",
  [anon_sym_as] = "as",
  [sym_path] = "path",
  [sym_file] = "file",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_document] = "document",
  [sym__statement] = "_statement",
  [sym_import_statement] = "import_statement",
  [sym_module_import] = "module_import",
  [sym_module] = "module",
  [sym_version] = "version",
  [sym_qualified_import] = "qualified_import",
  [sym_directory_import] = "directory_import",
  [sym_js_import] = "js_import",
  [aux_sym_document_repeat1] = "document_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_as] = anon_sym_as,
  [sym_path] = sym_path,
  [sym_file] = sym_file,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_document] = sym_document,
  [sym__statement] = sym__statement,
  [sym_import_statement] = sym_import_statement,
  [sym_module_import] = sym_module_import,
  [sym_module] = sym_module,
  [sym_version] = sym_version,
  [sym_qualified_import] = sym_qualified_import,
  [sym_directory_import] = sym_directory_import,
  [sym_js_import] = sym_js_import,
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
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
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
  [sym_module] = {
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
  [sym_directory_import] = {
    .visible = true,
    .named = true,
  },
  [sym_js_import] = {
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
      if (eof) ADVANCE(15);
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '.') ADVANCE(17);
      if (lookahead == 'a') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'j') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 'j') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 8:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(3);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_path);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_path] = ACTIONS(1),
    [sym_file] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(16),
    [sym__statement] = STATE(2),
    [sym_import_statement] = STATE(2),
    [sym_module_import] = STATE(6),
    [sym_qualified_import] = STATE(14),
    [sym_directory_import] = STATE(6),
    [sym_js_import] = STATE(14),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_import] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_module_import,
      sym_directory_import,
    STATE(14), 2,
      sym_qualified_import,
      sym_js_import,
    STATE(3), 3,
      sym__statement,
      sym_import_statement,
      aux_sym_document_repeat1,
  [20] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_import,
    STATE(6), 2,
      sym_module_import,
      sym_directory_import,
    STATE(14), 2,
      sym_qualified_import,
      sym_js_import,
    STATE(3), 3,
      sym__statement,
      sym_import_statement,
      aux_sym_document_repeat1,
  [40] = 4,
    ACTIONS(14), 1,
      sym_path,
    ACTIONS(16), 1,
      sym_file,
    ACTIONS(18), 1,
      sym_identifier,
    STATE(9), 1,
      sym_module,
  [53] = 1,
    ACTIONS(20), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
  [59] = 2,
    ACTIONS(24), 1,
      anon_sym_as,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [67] = 1,
    ACTIONS(26), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
  [73] = 1,
    ACTIONS(28), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      anon_sym_as,
  [79] = 2,
    ACTIONS(30), 1,
      sym_number,
    STATE(7), 1,
      sym_version,
  [86] = 2,
    ACTIONS(32), 1,
      anon_sym_DOT,
    ACTIONS(34), 1,
      sym_number,
  [93] = 2,
    ACTIONS(18), 1,
      sym_identifier,
    STATE(20), 1,
      sym_module,
  [100] = 1,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [105] = 1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [110] = 1,
    ACTIONS(22), 2,
      ts_builtin_sym_end,
      anon_sym_import,
  [115] = 1,
    ACTIONS(40), 1,
      sym_identifier,
  [119] = 1,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
  [123] = 1,
    ACTIONS(44), 1,
      sym_identifier,
  [127] = 1,
    ACTIONS(46), 1,
      anon_sym_DOT,
  [131] = 1,
    ACTIONS(48), 1,
      anon_sym_as,
  [135] = 1,
    ACTIONS(50), 1,
      sym_number,
  [139] = 1,
    ACTIONS(52), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 59,
  [SMALL_STATE(7)] = 67,
  [SMALL_STATE(8)] = 73,
  [SMALL_STATE(9)] = 79,
  [SMALL_STATE(10)] = 86,
  [SMALL_STATE(11)] = 93,
  [SMALL_STATE(12)] = 100,
  [SMALL_STATE(13)] = 105,
  [SMALL_STATE(14)] = 110,
  [SMALL_STATE(15)] = 115,
  [SMALL_STATE(16)] = 119,
  [SMALL_STATE(17)] = 123,
  [SMALL_STATE(18)] = 127,
  [SMALL_STATE(19)] = 131,
  [SMALL_STATE(20)] = 135,
  [SMALL_STATE(21)] = 139,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [16] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_version, 3),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_import_statement, 1),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module_import, 3),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_directory_import, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_import, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_import, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [42] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
