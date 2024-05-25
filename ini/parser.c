#include "parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers
{
    anon_sym_LBRACK = 1,
    aux_sym_section_name_token1 = 2,
    anon_sym_RBRACK = 3,
    anon_sym_LF = 4,
    aux_sym_setting_token1 = 5,
    anon_sym_EQ = 6,
    aux_sym_setting_token2 = 7,
    sym_comment = 8,
    sym_document = 9,
    sym_section = 10,
    sym_section_name = 11,
    sym_setting = 12,
    sym__blank = 13,
    aux_sym_document_repeat1 = 14,
    aux_sym_document_repeat2 = 15,
    aux_sym_section_repeat1 = 16,
};

static const char *const ts_symbol_names[] = {
    [ts_builtin_sym_end] = "end",
    [anon_sym_LBRACK] = "[",
    [aux_sym_section_name_token1] = "text",
    [anon_sym_RBRACK] = "]",
    [anon_sym_LF] = "\n",
    [aux_sym_setting_token1] = "setting_name",
    [anon_sym_EQ] = "=",
    [aux_sym_setting_token2] = "setting_value",
    [sym_comment] = "comment",
    [sym_document] = "document",
    [sym_section] = "section",
    [sym_section_name] = "section_name",
    [sym_setting] = "setting",
    [sym__blank] = "_blank",
    [aux_sym_document_repeat1] = "document_repeat1",
    [aux_sym_document_repeat2] = "document_repeat2",
    [aux_sym_section_repeat1] = "section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
    [ts_builtin_sym_end] = ts_builtin_sym_end,
    [anon_sym_LBRACK] = anon_sym_LBRACK,
    [aux_sym_section_name_token1] = aux_sym_section_name_token1,
    [anon_sym_RBRACK] = anon_sym_RBRACK,
    [anon_sym_LF] = anon_sym_LF,
    [aux_sym_setting_token1] = aux_sym_setting_token1,
    [anon_sym_EQ] = anon_sym_EQ,
    [aux_sym_setting_token2] = aux_sym_setting_token2,
    [sym_comment] = sym_comment,
    [sym_document] = sym_document,
    [sym_section] = sym_section,
    [sym_section_name] = sym_section_name,
    [sym_setting] = sym_setting,
    [sym__blank] = sym__blank,
    [aux_sym_document_repeat1] = aux_sym_document_repeat1,
    [aux_sym_document_repeat2] = aux_sym_document_repeat2,
    [aux_sym_section_repeat1] = aux_sym_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
    [ts_builtin_sym_end] = {
        .visible = false,
        .named = true,
    },
    [anon_sym_LBRACK] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_section_name_token1] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_RBRACK] = {
        .visible = true,
        .named = false,
    },
    [anon_sym_LF] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_setting_token1] = {
        .visible = true,
        .named = true,
    },
    [anon_sym_EQ] = {
        .visible = true,
        .named = false,
    },
    [aux_sym_setting_token2] = {
        .visible = true,
        .named = true,
    },
    [sym_comment] = {
        .visible = true,
        .named = true,
    },
    [sym_document] = {
        .visible = true,
        .named = true,
    },
    [sym_section] = {
        .visible = true,
        .named = true,
    },
    [sym_section_name] = {
        .visible = true,
        .named = true,
    },
    [sym_setting] = {
        .visible = true,
        .named = true,
    },
    [sym__blank] = {
        .visible = false,
        .named = true,
    },
    [aux_sym_document_repeat1] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_document_repeat2] = {
        .visible = false,
        .named = false,
    },
    [aux_sym_section_repeat1] = {
        .visible = false,
        .named = false,
    },
};

enum ts_field_identifiers
{
    field_setting_name = 1,
    field_setting_value = 2,
};

static const char *const ts_field_names[] = {
    [0] = NULL,
    [field_setting_name] = "setting_name",
    [field_setting_value] = "setting_value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
    [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
    [0] =
        {field_setting_name, 0},
    {field_setting_value, 2},
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
    [9] = 9,
    [10] = 10,
    [11] = 11,
    [12] = 12,
    [13] = 13,
    [14] = 14,
    [15] = 15,
    [16] = 16,
    [17] = 17,
    [18] = 18,
    [19] = 19,
    [20] = 20,
    [21] = 21,
    [22] = 22,
};

static bool ts_lex(TSLexer *lexer, TSStateId state)
{
    START_LEXER();
    eof = lexer->eof(lexer);
    switch (state)
    {
    case 0:
        if (eof)
            ADVANCE(6);
        if (lookahead == '\n')
            ADVANCE(12);
        if (lookahead == '=')
            ADVANCE(14);
        if (lookahead == '[')
            ADVANCE(7);
        if (lookahead == ']')
            ADVANCE(11);
        if (lookahead == '\t' ||
            lookahead == ' ')
            SKIP(0);
        if (lookahead == '#' ||
            lookahead == ';')
            ADVANCE(1);
        if (lookahead != 0 &&
            (lookahead < '\t' || '\r' < lookahead))
            ADVANCE(13);
        END_STATE();
    case 1:
        if (lookahead == '\n')
            ADVANCE(17);
        if (lookahead != 0)
            ADVANCE(1);
        END_STATE();
    case 2:
        if (lookahead == ']')
            ADVANCE(10);
        if (lookahead == '\t' ||
            lookahead == ' ')
            SKIP(2);
        END_STATE();
    case 3:
        if (lookahead == '\t' ||
            lookahead == ' ')
            ADVANCE(15);
        if (lookahead != 0 &&
            lookahead != '\t' &&
            lookahead != '\n' &&
            lookahead != '#' &&
            lookahead != ';')
            ADVANCE(16);
        END_STATE();
    case 4:
        if (lookahead == '\t' ||
            lookahead == ' ')
            ADVANCE(8);
        if (lookahead != 0 &&
            lookahead != '\t' &&
            lookahead != '\n' &&
            lookahead != '[' &&
            lookahead != ']')
            ADVANCE(9);
        END_STATE();
    case 5:
        if (eof)
            ADVANCE(6);
        if (lookahead == '\n')
            ADVANCE(12);
        if (lookahead == '[')
            ADVANCE(7);
        if (lookahead == '\t' ||
            lookahead == ' ')
            SKIP(5);
        if (lookahead == '#' ||
            lookahead == ';')
            ADVANCE(1);
        if (lookahead != 0 &&
            (lookahead < '\t' || '\r' < lookahead) &&
            lookahead != '=')
            ADVANCE(13);
        END_STATE();
    case 6:
        ACCEPT_TOKEN(ts_builtin_sym_end);
        END_STATE();
    case 7:
        ACCEPT_TOKEN(anon_sym_LBRACK);
        END_STATE();
    case 8:
        ACCEPT_TOKEN(aux_sym_section_name_token1);
        if (lookahead == '\t' ||
            lookahead == ' ')
            ADVANCE(8);
        if (lookahead != 0 &&
            lookahead != '\t' &&
            lookahead != '\n' &&
            lookahead != '[' &&
            lookahead != ']')
            ADVANCE(9);
        END_STATE();
    case 9:
        ACCEPT_TOKEN(aux_sym_section_name_token1);
        if (lookahead != 0 &&
            lookahead != '\n' &&
            lookahead != '[' &&
            lookahead != ']')
            ADVANCE(9);
        END_STATE();
    case 10:
        ACCEPT_TOKEN(anon_sym_RBRACK);
        END_STATE();
    case 11:
        ACCEPT_TOKEN(anon_sym_RBRACK);
        if (lookahead != 0 &&
            (lookahead < '\t' || '\r' < lookahead) &&
            lookahead != ' ' &&
            lookahead != '#' &&
            lookahead != ';' &&
            lookahead != '=' &&
            lookahead != '[')
            ADVANCE(13);
        END_STATE();
    case 12:
        ACCEPT_TOKEN(anon_sym_LF);
        END_STATE();
    case 13:
        ACCEPT_TOKEN(aux_sym_setting_token1);
        if (lookahead != 0 &&
            (lookahead < '\t' || '\r' < lookahead) &&
            lookahead != ' ' &&
            lookahead != '#' &&
            lookahead != ';' &&
            lookahead != '=' &&
            lookahead != '[')
            ADVANCE(13);
        END_STATE();
    case 14:
        ACCEPT_TOKEN(anon_sym_EQ);
        END_STATE();
    case 15:
        ACCEPT_TOKEN(aux_sym_setting_token2);
        if (lookahead == '\t' ||
            lookahead == ' ')
            ADVANCE(15);
        if (lookahead != 0 &&
            lookahead != '\t' &&
            lookahead != '\n' &&
            lookahead != '#' &&
            lookahead != ';')
            ADVANCE(16);
        END_STATE();
    case 16:
        ACCEPT_TOKEN(aux_sym_setting_token2);
        if (lookahead != 0 &&
            lookahead != '\n' &&
            lookahead != '#' &&
            lookahead != ';')
            ADVANCE(16);
        END_STATE();
    case 17:
        ACCEPT_TOKEN(sym_comment);
        END_STATE();
    default:
        return false;
    }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
    [0] = {.lex_state = 0},
    [1] = {.lex_state = 0},
    [2] = {.lex_state = 5},
    [3] = {.lex_state = 5},
    [4] = {.lex_state = 0},
    [5] = {.lex_state = 5},
    [6] = {.lex_state = 0},
    [7] = {.lex_state = 0},
    [8] = {.lex_state = 0},
    [9] = {.lex_state = 0},
    [10] = {.lex_state = 5},
    [11] = {.lex_state = 5},
    [12] = {.lex_state = 5},
    [13] = {.lex_state = 5},
    [14] = {.lex_state = 0},
    [15] = {.lex_state = 0},
    [16] = {.lex_state = 0},
    [17] = {.lex_state = 2},
    [18] = {.lex_state = 0},
    [19] = {.lex_state = 3},
    [20] = {.lex_state = 4},
    [21] = {.lex_state = 0},
    [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
    [0] = {
        [ts_builtin_sym_end] = ACTIONS(1),
        [anon_sym_LBRACK] = ACTIONS(1),
        [anon_sym_RBRACK] = ACTIONS(1),
        [anon_sym_LF] = ACTIONS(1),
        [aux_sym_setting_token1] = ACTIONS(1),
        [anon_sym_EQ] = ACTIONS(1),
        [sym_comment] = ACTIONS(1),
    },
    [1] = {
        [sym_document] = STATE(16),
        [sym_section] = STATE(6),
        [sym_section_name] = STATE(3),
        [sym__blank] = STATE(4),
        [aux_sym_document_repeat1] = STATE(4),
        [aux_sym_document_repeat2] = STATE(6),
        [ts_builtin_sym_end] = ACTIONS(3),
        [anon_sym_LBRACK] = ACTIONS(5),
        [anon_sym_LF] = ACTIONS(7),
    },
};

static const uint16_t ts_small_parse_table[] = {
    [0] = 4,
    ACTIONS(14),
    1,
    aux_sym_setting_token1,
    ACTIONS(9),
    2,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    ACTIONS(11),
    2,
    anon_sym_LF,
    sym_comment,
    STATE(2),
    3,
    sym_setting,
    sym__blank,
    aux_sym_section_repeat1,
    [17] = 4,
    ACTIONS(21),
    1,
    aux_sym_setting_token1,
    ACTIONS(17),
    2,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    ACTIONS(19),
    2,
    anon_sym_LF,
    sym_comment,
    STATE(5),
    3,
    sym_setting,
    sym__blank,
    aux_sym_section_repeat1,
    [34] = 6,
    ACTIONS(5),
    1,
    anon_sym_LBRACK,
    ACTIONS(23),
    1,
    ts_builtin_sym_end,
    ACTIONS(25),
    1,
    anon_sym_LF,
    STATE(3),
    1,
    sym_section_name,
    STATE(7),
    2,
    sym__blank,
    aux_sym_document_repeat1,
    STATE(8),
    2,
    sym_section,
    aux_sym_document_repeat2,
    [55] = 4,
    ACTIONS(21),
    1,
    aux_sym_setting_token1,
    ACTIONS(27),
    2,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    ACTIONS(29),
    2,
    anon_sym_LF,
    sym_comment,
    STATE(2),
    3,
    sym_setting,
    sym__blank,
    aux_sym_section_repeat1,
    [72] = 4,
    ACTIONS(5),
    1,
    anon_sym_LBRACK,
    ACTIONS(23),
    1,
    ts_builtin_sym_end,
    STATE(3),
    1,
    sym_section_name,
    STATE(9),
    2,
    sym_section,
    aux_sym_document_repeat2,
    [86] = 3,
    ACTIONS(33),
    1,
    anon_sym_LF,
    ACTIONS(31),
    2,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    STATE(7),
    2,
    sym__blank,
    aux_sym_document_repeat1,
    [98] = 4,
    ACTIONS(5),
    1,
    anon_sym_LBRACK,
    ACTIONS(36),
    1,
    ts_builtin_sym_end,
    STATE(3),
    1,
    sym_section_name,
    STATE(9),
    2,
    sym_section,
    aux_sym_document_repeat2,
    [112] = 4,
    ACTIONS(38),
    1,
    ts_builtin_sym_end,
    ACTIONS(40),
    1,
    anon_sym_LBRACK,
    STATE(3),
    1,
    sym_section_name,
    STATE(9),
    2,
    sym_section,
    aux_sym_document_repeat2,
    [126] = 1,
    ACTIONS(43),
    5,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    anon_sym_LF,
    aux_sym_setting_token1,
    sym_comment,
    [134] = 1,
    ACTIONS(45),
    5,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    anon_sym_LF,
    aux_sym_setting_token1,
    sym_comment,
    [142] = 1,
    ACTIONS(47),
    5,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    anon_sym_LF,
    aux_sym_setting_token1,
    sym_comment,
    [150] = 1,
    ACTIONS(49),
    5,
    ts_builtin_sym_end,
    anon_sym_LBRACK,
    anon_sym_LF,
    aux_sym_setting_token1,
    sym_comment,
    [158] = 2,
    ACTIONS(51),
    1,
    anon_sym_LF,
    ACTIONS(53),
    1,
    sym_comment,
    [165] = 2,
    ACTIONS(55),
    1,
    anon_sym_LF,
    ACTIONS(57),
    1,
    sym_comment,
    [172] = 1,
    ACTIONS(59),
    1,
    ts_builtin_sym_end,
    [176] = 1,
    ACTIONS(61),
    1,
    anon_sym_RBRACK,
    [180] = 1,
    ACTIONS(63),
    1,
    anon_sym_EQ,
    [184] = 1,
    ACTIONS(65),
    1,
    aux_sym_setting_token2,
    [188] = 1,
    ACTIONS(67),
    1,
    aux_sym_section_name_token1,
    [192] = 1,
    ACTIONS(69),
    1,
    anon_sym_LF,
    [196] = 1,
    ACTIONS(71),
    1,
    anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
    [SMALL_STATE(2)] = 0,
    [SMALL_STATE(3)] = 17,
    [SMALL_STATE(4)] = 34,
    [SMALL_STATE(5)] = 55,
    [SMALL_STATE(6)] = 72,
    [SMALL_STATE(7)] = 86,
    [SMALL_STATE(8)] = 98,
    [SMALL_STATE(9)] = 112,
    [SMALL_STATE(10)] = 126,
    [SMALL_STATE(11)] = 134,
    [SMALL_STATE(12)] = 142,
    [SMALL_STATE(13)] = 150,
    [SMALL_STATE(14)] = 158,
    [SMALL_STATE(15)] = 165,
    [SMALL_STATE(16)] = 172,
    [SMALL_STATE(17)] = 176,
    [SMALL_STATE(18)] = 180,
    [SMALL_STATE(19)] = 184,
    [SMALL_STATE(20)] = 188,
    [SMALL_STATE(21)] = 192,
    [SMALL_STATE(22)] = 196,
};

static const TSParseActionEntry ts_parse_actions[] = {
    [0] = {.entry = {.count = 0, .reusable = false}},
    [1] = {.entry = {.count = 1, .reusable = false}},
    RECOVER(),
    [3] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_document, 0, 0, 0),
    [5] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(20),
    [7] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(4),
    [9] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(aux_sym_section_repeat1, 2, 0, 0),
    [11] = {.entry = {.count = 2, .reusable = true}},
    REDUCE(aux_sym_section_repeat1, 2, 0, 0),
    SHIFT_REPEAT(2),
    [14] = {.entry = {.count = 2, .reusable = true}},
    REDUCE(aux_sym_section_repeat1, 2, 0, 0),
    SHIFT_REPEAT(18),
    [17] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_section, 1, 0, 0),
    [19] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(5),
    [21] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(18),
    [23] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_document, 1, 0, 0),
    [25] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(7),
    [27] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_section, 2, 0, 0),
    [29] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(2),
    [31] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    [33] = {.entry = {.count = 2, .reusable = true}},
    REDUCE(aux_sym_document_repeat1, 2, 0, 0),
    SHIFT_REPEAT(7),
    [36] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_document, 2, 0, 0),
    [38] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(aux_sym_document_repeat2, 2, 0, 0),
    [40] = {.entry = {.count = 2, .reusable = true}},
    REDUCE(aux_sym_document_repeat2, 2, 0, 0),
    SHIFT_REPEAT(20),
    [43] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_section_name, 4, 0, 0),
    [45] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_section_name, 5, 0, 0),
    [47] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_setting, 4, 0, 1),
    [49] = {.entry = {.count = 1, .reusable = true}},
    REDUCE(sym_setting, 5, 0, 1),
    [51] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(10),
    [53] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(21),
    [55] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(12),
    [57] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(22),
    [59] = {.entry = {.count = 1, .reusable = true}},
    ACCEPT_INPUT(),
    [61] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(14),
    [63] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(19),
    [65] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(15),
    [67] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(17),
    [69] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(11),
    [71] = {.entry = {.count = 1, .reusable = true}},
    SHIFT(13),
};

#ifdef __cplusplus
extern "C"
{
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

    TS_PUBLIC const TSLanguage *tree_sitter_ini(void)
    {
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
