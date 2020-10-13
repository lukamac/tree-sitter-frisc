#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  sym_comment = 1,
  anon_sym_COMMA = 2,
  anon_sym_CMP = 3,
  anon_sym_MOVE = 4,
  anon_sym_ORG = 5,
  aux_sym_define_memory_token1 = 6,
  anon_sym_EQU = 7,
  anon_sym_JP = 8,
  anon_sym_LPAREN = 9,
  anon_sym_RPAREN = 10,
  anon_sym_JR = 11,
  anon_sym_CALL = 12,
  aux_sym_ret_token1 = 13,
  anon_sym_HALT = 14,
  anon_sym__ = 15,
  anon_sym_C = 16,
  anon_sym_NC = 17,
  anon_sym_V = 18,
  anon_sym_NV = 19,
  anon_sym_N = 20,
  anon_sym_NN = 21,
  anon_sym_M = 22,
  anon_sym_P = 23,
  anon_sym_Z = 24,
  anon_sym_NZ = 25,
  anon_sym_EQ = 26,
  anon_sym_NE = 27,
  anon_sym_ULE = 28,
  anon_sym_UGT = 29,
  anon_sym_ULT = 30,
  anon_sym_UGE = 31,
  anon_sym_SLE = 32,
  anon_sym_SGT = 33,
  anon_sym_SLT = 34,
  anon_sym_SGE = 35,
  aux_sym_load_token1 = 36,
  aux_sym_store_token1 = 37,
  anon_sym_PLUS = 38,
  anon_sym_POP = 39,
  anon_sym_PUSH = 40,
  sym__alu_mnemonic = 41,
  aux_sym_register_token1 = 42,
  anon_sym_SP = 43,
  anon_sym_SR = 44,
  anon_sym_PC = 45,
  sym_label = 46,
  anon_sym_DQUOTE = 47,
  aux_sym_string_literal_token1 = 48,
  sym_dec = 49,
  sym_bin = 50,
  sym_oct = 51,
  aux_sym_hex_token1 = 52,
  aux_sym_hex_token2 = 53,
  sym_source_file = 54,
  sym__statement = 55,
  sym_alu_operation = 56,
  sym_compare = 57,
  sym_move = 58,
  sym__memory_operation = 59,
  sym__control_operation = 60,
  sym__preprocessor = 61,
  sym_org = 62,
  sym_define_memory = 63,
  sym_equ = 64,
  sym_jump = 65,
  sym_jump_relative = 66,
  sym_call = 67,
  sym_ret = 68,
  sym_halt = 69,
  sym_condition = 70,
  sym_load = 71,
  sym_store = 72,
  sym_reg_offset = 73,
  sym_stack_operation = 74,
  sym__src1 = 75,
  sym__src2 = 76,
  sym__dest = 77,
  sym_register = 78,
  sym_immediate = 79,
  sym__numbers = 80,
  sym_number = 81,
  sym_string_literal = 82,
  sym_hex = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym__numbers_repeat1 = 85,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_COMMA] = ",",
  [anon_sym_CMP] = "CMP",
  [anon_sym_MOVE] = "MOVE",
  [anon_sym_ORG] = "ORG",
  [aux_sym_define_memory_token1] = "define_memory_token1",
  [anon_sym_EQU] = "EQU",
  [anon_sym_JP] = "JP",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_JR] = "JR",
  [anon_sym_CALL] = "CALL",
  [aux_sym_ret_token1] = "ret_token1",
  [anon_sym_HALT] = "HALT",
  [anon_sym__] = "_",
  [anon_sym_C] = "C",
  [anon_sym_NC] = "NC",
  [anon_sym_V] = "V",
  [anon_sym_NV] = "NV",
  [anon_sym_N] = "N",
  [anon_sym_NN] = "NN",
  [anon_sym_M] = "M",
  [anon_sym_P] = "P",
  [anon_sym_Z] = "Z",
  [anon_sym_NZ] = "NZ",
  [anon_sym_EQ] = "EQ",
  [anon_sym_NE] = "NE",
  [anon_sym_ULE] = "ULE",
  [anon_sym_UGT] = "UGT",
  [anon_sym_ULT] = "ULT",
  [anon_sym_UGE] = "UGE",
  [anon_sym_SLE] = "SLE",
  [anon_sym_SGT] = "SGT",
  [anon_sym_SLT] = "SLT",
  [anon_sym_SGE] = "SGE",
  [aux_sym_load_token1] = "load_token1",
  [aux_sym_store_token1] = "store_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_POP] = "POP",
  [anon_sym_PUSH] = "PUSH",
  [sym__alu_mnemonic] = "_alu_mnemonic",
  [aux_sym_register_token1] = "register_token1",
  [anon_sym_SP] = "SP",
  [anon_sym_SR] = "SR",
  [anon_sym_PC] = "PC",
  [sym_label] = "label",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_literal_token1] = "string_literal_token1",
  [sym_dec] = "dec",
  [sym_bin] = "bin",
  [sym_oct] = "oct",
  [aux_sym_hex_token1] = "hex_token1",
  [aux_sym_hex_token2] = "hex_token2",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_alu_operation] = "alu_operation",
  [sym_compare] = "compare",
  [sym_move] = "move",
  [sym__memory_operation] = "_memory_operation",
  [sym__control_operation] = "_control_operation",
  [sym__preprocessor] = "_preprocessor",
  [sym_org] = "org",
  [sym_define_memory] = "define_memory",
  [sym_equ] = "equ",
  [sym_jump] = "jump",
  [sym_jump_relative] = "jump_relative",
  [sym_call] = "call",
  [sym_ret] = "ret",
  [sym_halt] = "halt",
  [sym_condition] = "condition",
  [sym_load] = "load",
  [sym_store] = "store",
  [sym_reg_offset] = "reg_offset",
  [sym_stack_operation] = "stack_operation",
  [sym__src1] = "_src1",
  [sym__src2] = "_src2",
  [sym__dest] = "_dest",
  [sym_register] = "register",
  [sym_immediate] = "immediate",
  [sym__numbers] = "_numbers",
  [sym_number] = "number",
  [sym_string_literal] = "string_literal",
  [sym_hex] = "hex",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__numbers_repeat1] = "_numbers_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_CMP] = anon_sym_CMP,
  [anon_sym_MOVE] = anon_sym_MOVE,
  [anon_sym_ORG] = anon_sym_ORG,
  [aux_sym_define_memory_token1] = aux_sym_define_memory_token1,
  [anon_sym_EQU] = anon_sym_EQU,
  [anon_sym_JP] = anon_sym_JP,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_JR] = anon_sym_JR,
  [anon_sym_CALL] = anon_sym_CALL,
  [aux_sym_ret_token1] = aux_sym_ret_token1,
  [anon_sym_HALT] = anon_sym_HALT,
  [anon_sym__] = anon_sym__,
  [anon_sym_C] = anon_sym_C,
  [anon_sym_NC] = anon_sym_NC,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_NV] = anon_sym_NV,
  [anon_sym_N] = anon_sym_N,
  [anon_sym_NN] = anon_sym_NN,
  [anon_sym_M] = anon_sym_M,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_NZ] = anon_sym_NZ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_NE] = anon_sym_NE,
  [anon_sym_ULE] = anon_sym_ULE,
  [anon_sym_UGT] = anon_sym_UGT,
  [anon_sym_ULT] = anon_sym_ULT,
  [anon_sym_UGE] = anon_sym_UGE,
  [anon_sym_SLE] = anon_sym_SLE,
  [anon_sym_SGT] = anon_sym_SGT,
  [anon_sym_SLT] = anon_sym_SLT,
  [anon_sym_SGE] = anon_sym_SGE,
  [aux_sym_load_token1] = aux_sym_load_token1,
  [aux_sym_store_token1] = aux_sym_store_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_POP] = anon_sym_POP,
  [anon_sym_PUSH] = anon_sym_PUSH,
  [sym__alu_mnemonic] = sym__alu_mnemonic,
  [aux_sym_register_token1] = aux_sym_register_token1,
  [anon_sym_SP] = anon_sym_SP,
  [anon_sym_SR] = anon_sym_SR,
  [anon_sym_PC] = anon_sym_PC,
  [sym_label] = sym_label,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_literal_token1] = aux_sym_string_literal_token1,
  [sym_dec] = sym_dec,
  [sym_bin] = sym_bin,
  [sym_oct] = sym_oct,
  [aux_sym_hex_token1] = aux_sym_hex_token1,
  [aux_sym_hex_token2] = aux_sym_hex_token2,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_alu_operation] = sym_alu_operation,
  [sym_compare] = sym_compare,
  [sym_move] = sym_move,
  [sym__memory_operation] = sym__memory_operation,
  [sym__control_operation] = sym__control_operation,
  [sym__preprocessor] = sym__preprocessor,
  [sym_org] = sym_org,
  [sym_define_memory] = sym_define_memory,
  [sym_equ] = sym_equ,
  [sym_jump] = sym_jump,
  [sym_jump_relative] = sym_jump_relative,
  [sym_call] = sym_call,
  [sym_ret] = sym_ret,
  [sym_halt] = sym_halt,
  [sym_condition] = sym_condition,
  [sym_load] = sym_load,
  [sym_store] = sym_store,
  [sym_reg_offset] = sym_reg_offset,
  [sym_stack_operation] = sym_stack_operation,
  [sym__src1] = sym__src1,
  [sym__src2] = sym__src2,
  [sym__dest] = sym__dest,
  [sym_register] = sym_register,
  [sym_immediate] = sym_immediate,
  [sym__numbers] = sym__numbers,
  [sym_number] = sym_number,
  [sym_string_literal] = sym_string_literal,
  [sym_hex] = sym_hex,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__numbers_repeat1] = aux_sym__numbers_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOVE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ORG] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_define_memory_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQU] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_JP] = {
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
  [anon_sym_JR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CALL] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_ret_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_HALT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_C] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NV] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NZ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ULE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UGT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ULT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UGE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SGT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SGE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_load_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_store_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUSH] = {
    .visible = true,
    .named = false,
  },
  [sym__alu_mnemonic] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_register_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PC] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_dec] = {
    .visible = true,
    .named = true,
  },
  [sym_bin] = {
    .visible = true,
    .named = true,
  },
  [sym_oct] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hex_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hex_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_alu_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_compare] = {
    .visible = true,
    .named = true,
  },
  [sym_move] = {
    .visible = true,
    .named = true,
  },
  [sym__memory_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__control_operation] = {
    .visible = false,
    .named = true,
  },
  [sym__preprocessor] = {
    .visible = false,
    .named = true,
  },
  [sym_org] = {
    .visible = true,
    .named = true,
  },
  [sym_define_memory] = {
    .visible = true,
    .named = true,
  },
  [sym_equ] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_jump_relative] = {
    .visible = true,
    .named = true,
  },
  [sym_call] = {
    .visible = true,
    .named = true,
  },
  [sym_ret] = {
    .visible = true,
    .named = true,
  },
  [sym_halt] = {
    .visible = true,
    .named = true,
  },
  [sym_condition] = {
    .visible = true,
    .named = true,
  },
  [sym_load] = {
    .visible = true,
    .named = true,
  },
  [sym_store] = {
    .visible = true,
    .named = true,
  },
  [sym_reg_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_stack_operation] = {
    .visible = true,
    .named = true,
  },
  [sym__src1] = {
    .visible = false,
    .named = true,
  },
  [sym__src2] = {
    .visible = false,
    .named = true,
  },
  [sym__dest] = {
    .visible = false,
    .named = true,
  },
  [sym_register] = {
    .visible = true,
    .named = true,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym__numbers] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__numbers_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      if (lookahead == '"') ADVANCE(128);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'J') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(81);
      if (lookahead == 'U') ADVANCE(97);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == 'X') ADVANCE(105);
      if (lookahead == 'Z') ADVANCE(53);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('B' <= lookahead && lookahead <= 'Y') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(13)
      if (lookahead == ';') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 7:
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == 'P') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(126);
      if (lookahead == 'S') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(22);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == 'M') ADVANCE(51);
      if (lookahead == 'N') ADVANCE(49);
      if (lookahead == 'P') ADVANCE(52);
      if (lookahead == 'S') ADVANCE(19);
      if (lookahead == 'U') ADVANCE(20);
      if (lookahead == 'V') ADVANCE(47);
      if (lookahead == 'Z') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'H') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(62);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(63);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(58);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(15);
      if (lookahead == 'L') ADVANCE(16);
      END_STATE();
    case 20:
      if (lookahead == 'G') ADVANCE(17);
      if (lookahead == 'L') ADVANCE(18);
      END_STATE();
    case 21:
      if (lookahead == 'Q') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      if (lookahead == ')') ADVANCE(38);
      if (lookahead == '+') ADVANCE(69);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == ';') ADVANCE(29);
      if (lookahead == 'A') ADVANCE(86);
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'D') ADVANCE(125);
      if (lookahead == 'E') ADVANCE(113);
      if (lookahead == 'H') ADVANCE(78);
      if (lookahead == 'J') ADVANCE(108);
      if (lookahead == 'L') ADVANCE(104);
      if (lookahead == 'M') ADVANCE(103);
      if (lookahead == 'O') ADVANCE(114);
      if (lookahead == 'P') ADVANCE(106);
      if (lookahead == 'R') ADVANCE(90);
      if (lookahead == 'S') ADVANCE(82);
      if (lookahead == 'X') ADVANCE(105);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_CMP);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_MOVE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_ORG);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_define_memory_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQU);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_JP);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_JR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_CALL);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_ret_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_ret_token1);
      if (lookahead == 'I' ||
          lookahead == 'N') ADVANCE(41);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_HALT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_C);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_NC);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_NV);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_N);
      if (lookahead == 'C') ADVANCE(46);
      if (lookahead == 'E') ADVANCE(56);
      if (lookahead == 'N') ADVANCE(50);
      if (lookahead == 'V') ADVANCE(48);
      if (lookahead == 'Z') ADVANCE(54);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_NN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_M);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_NZ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_NE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ULE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_UGT);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ULT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_UGE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_SLE);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_SGT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SLT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_SGE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_load_token1);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_load_token1);
      if (lookahead == 'B' ||
          lookahead == 'H') ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_store_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_store_token1);
      if (lookahead == 'B' ||
          lookahead == 'H') ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_POP);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PUSH);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__alu_mnemonic);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__alu_mnemonic);
      if (lookahead == 'G') ADVANCE(33);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_register_token1);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_SP);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_SR);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_PC);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'A') ADVANCE(101);
      if (lookahead == 'M') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'B') ADVANCE(84);
      if (lookahead == 'G') ADVANCE(91);
      if (lookahead == 'H') ADVANCE(124);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(76);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'B') ADVANCE(84);
      if (lookahead == 'H') ADVANCE(124);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == 'U') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'B') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'C') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'C') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(123);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'D') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'O') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(64);
      if (lookahead == 'T') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'T') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'E') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'G') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'H') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'H') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(111);
      if (lookahead == 'U') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'O') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(36);
      if (lookahead == 'R') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(75);
      if (lookahead == 'R') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'P') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Q') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'Q') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'R') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'S') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'T') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'U') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'V') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'C' ||
          lookahead == 'D') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'L' ||
          lookahead == 'R') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_label);
      if (lookahead == 'B' ||
          lookahead == 'H' ||
          lookahead == 'S' ||
          lookahead == 'W') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(74);
      if (lookahead == '8' ||
          lookahead == '9' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead == ';') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_dec);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_bin);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_oct);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_hex_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_hex_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 27},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 27},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 27},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 27},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 27},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 27},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 27},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 27},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 7},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_ORG] = ACTIONS(1),
    [aux_sym_define_memory_token1] = ACTIONS(1),
    [anon_sym_JP] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_JR] = ACTIONS(1),
    [aux_sym_ret_token1] = ACTIONS(1),
    [anon_sym_HALT] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_C] = ACTIONS(1),
    [anon_sym_NC] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_NV] = ACTIONS(1),
    [anon_sym_N] = ACTIONS(1),
    [anon_sym_NN] = ACTIONS(1),
    [anon_sym_M] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_NZ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_NE] = ACTIONS(1),
    [anon_sym_ULE] = ACTIONS(1),
    [anon_sym_UGT] = ACTIONS(1),
    [anon_sym_ULT] = ACTIONS(1),
    [anon_sym_UGE] = ACTIONS(1),
    [anon_sym_SLE] = ACTIONS(1),
    [anon_sym_SGT] = ACTIONS(1),
    [anon_sym_SLT] = ACTIONS(1),
    [anon_sym_SGE] = ACTIONS(1),
    [aux_sym_load_token1] = ACTIONS(1),
    [aux_sym_store_token1] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym__alu_mnemonic] = ACTIONS(1),
    [aux_sym_register_token1] = ACTIONS(1),
    [anon_sym_SP] = ACTIONS(1),
    [anon_sym_SR] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_dec] = ACTIONS(1),
    [sym_bin] = ACTIONS(1),
    [sym_oct] = ACTIONS(1),
    [aux_sym_hex_token1] = ACTIONS(1),
    [aux_sym_hex_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(83),
    [sym__statement] = STATE(3),
    [sym_alu_operation] = STATE(3),
    [sym_compare] = STATE(3),
    [sym_move] = STATE(3),
    [sym__memory_operation] = STATE(3),
    [sym__control_operation] = STATE(3),
    [sym__preprocessor] = STATE(3),
    [sym_org] = STATE(3),
    [sym_define_memory] = STATE(3),
    [sym_equ] = STATE(3),
    [sym_jump] = STATE(3),
    [sym_jump_relative] = STATE(3),
    [sym_call] = STATE(3),
    [sym_ret] = STATE(3),
    [sym_halt] = STATE(3),
    [sym_load] = STATE(3),
    [sym_store] = STATE(3),
    [sym_stack_operation] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_CMP] = ACTIONS(7),
    [anon_sym_MOVE] = ACTIONS(9),
    [anon_sym_ORG] = ACTIONS(11),
    [aux_sym_define_memory_token1] = ACTIONS(13),
    [anon_sym_EQU] = ACTIONS(15),
    [anon_sym_JP] = ACTIONS(17),
    [anon_sym_JR] = ACTIONS(19),
    [anon_sym_CALL] = ACTIONS(21),
    [aux_sym_ret_token1] = ACTIONS(23),
    [anon_sym_HALT] = ACTIONS(25),
    [aux_sym_load_token1] = ACTIONS(27),
    [aux_sym_store_token1] = ACTIONS(29),
    [anon_sym_POP] = ACTIONS(31),
    [anon_sym_PUSH] = ACTIONS(31),
    [sym__alu_mnemonic] = ACTIONS(33),
    [sym_label] = ACTIONS(35),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_CMP,
    ACTIONS(42), 1,
      anon_sym_MOVE,
    ACTIONS(45), 1,
      anon_sym_ORG,
    ACTIONS(48), 1,
      aux_sym_define_memory_token1,
    ACTIONS(51), 1,
      anon_sym_EQU,
    ACTIONS(54), 1,
      anon_sym_JP,
    ACTIONS(57), 1,
      anon_sym_JR,
    ACTIONS(60), 1,
      anon_sym_CALL,
    ACTIONS(63), 1,
      aux_sym_ret_token1,
    ACTIONS(66), 1,
      anon_sym_HALT,
    ACTIONS(69), 1,
      aux_sym_load_token1,
    ACTIONS(72), 1,
      aux_sym_store_token1,
    ACTIONS(78), 1,
      sym__alu_mnemonic,
    ACTIONS(81), 1,
      sym_label,
    ACTIONS(75), 2,
      anon_sym_POP,
      anon_sym_PUSH,
    STATE(2), 19,
      sym__statement,
      sym_alu_operation,
      sym_compare,
      sym_move,
      sym__memory_operation,
      sym__control_operation,
      sym__preprocessor,
      sym_org,
      sym_define_memory,
      sym_equ,
      sym_jump,
      sym_jump_relative,
      sym_call,
      sym_ret,
      sym_halt,
      sym_load,
      sym_store,
      sym_stack_operation,
      aux_sym_source_file_repeat1,
  [74] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_CMP,
    ACTIONS(9), 1,
      anon_sym_MOVE,
    ACTIONS(11), 1,
      anon_sym_ORG,
    ACTIONS(13), 1,
      aux_sym_define_memory_token1,
    ACTIONS(15), 1,
      anon_sym_EQU,
    ACTIONS(17), 1,
      anon_sym_JP,
    ACTIONS(19), 1,
      anon_sym_JR,
    ACTIONS(21), 1,
      anon_sym_CALL,
    ACTIONS(23), 1,
      aux_sym_ret_token1,
    ACTIONS(25), 1,
      anon_sym_HALT,
    ACTIONS(27), 1,
      aux_sym_load_token1,
    ACTIONS(29), 1,
      aux_sym_store_token1,
    ACTIONS(33), 1,
      sym__alu_mnemonic,
    ACTIONS(35), 1,
      sym_label,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 2,
      anon_sym_POP,
      anon_sym_PUSH,
    STATE(2), 19,
      sym__statement,
      sym_alu_operation,
      sym_compare,
      sym_move,
      sym__memory_operation,
      sym__control_operation,
      sym__preprocessor,
      sym_org,
      sym_define_memory,
      sym_equ,
      sym_jump,
      sym_jump_relative,
      sym_call,
      sym_ret,
      sym_halt,
      sym_load,
      sym_store,
      sym_stack_operation,
      aux_sym_source_file_repeat1,
  [148] = 16,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_CMP,
    ACTIONS(9), 1,
      anon_sym_MOVE,
    ACTIONS(11), 1,
      anon_sym_ORG,
    ACTIONS(13), 1,
      aux_sym_define_memory_token1,
    ACTIONS(15), 1,
      anon_sym_EQU,
    ACTIONS(17), 1,
      anon_sym_JP,
    ACTIONS(19), 1,
      anon_sym_JR,
    ACTIONS(21), 1,
      anon_sym_CALL,
    ACTIONS(23), 1,
      aux_sym_ret_token1,
    ACTIONS(25), 1,
      anon_sym_HALT,
    ACTIONS(27), 1,
      aux_sym_load_token1,
    ACTIONS(29), 1,
      aux_sym_store_token1,
    ACTIONS(33), 1,
      sym__alu_mnemonic,
    ACTIONS(31), 2,
      anon_sym_POP,
      anon_sym_PUSH,
    STATE(33), 17,
      sym_alu_operation,
      sym_compare,
      sym_move,
      sym__memory_operation,
      sym__control_operation,
      sym__preprocessor,
      sym_org,
      sym_define_memory,
      sym_equ,
      sym_jump,
      sym_jump_relative,
      sym_call,
      sym_ret,
      sym_halt,
      sym_load,
      sym_store,
      sym_stack_operation,
  [214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_N,
    ACTIONS(86), 19,
      anon_sym_C,
      anon_sym_NC,
      anon_sym_V,
      anon_sym_NV,
      anon_sym_NN,
      anon_sym_M,
      anon_sym_P,
      anon_sym_Z,
      anon_sym_NZ,
      anon_sym_EQ,
      anon_sym_NE,
      anon_sym_ULE,
      anon_sym_UGT,
      anon_sym_ULT,
      anon_sym_UGE,
      anon_sym_SLE,
      anon_sym_SGT,
      anon_sym_SLT,
      anon_sym_SGE,
  [242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(90), 18,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_RPAREN,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_PLUS,
      anon_sym_POP,
      anon_sym_PUSH,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_N,
    ACTIONS(94), 19,
      anon_sym_C,
      anon_sym_NC,
      anon_sym_V,
      anon_sym_NV,
      anon_sym_NN,
      anon_sym_M,
      anon_sym_P,
      anon_sym_Z,
      anon_sym_NZ,
      anon_sym_EQ,
      anon_sym_NE,
      anon_sym_ULE,
      anon_sym_UGT,
      anon_sym_ULT,
      anon_sym_UGE,
      anon_sym_SLE,
      anon_sym_SGT,
      anon_sym_SLT,
      anon_sym_SGE,
  [298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym__numbers_repeat1,
    ACTIONS(103), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(98), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [329] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym__numbers_repeat1,
    ACTIONS(109), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(105), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [360] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_COMMA,
    STATE(9), 1,
      aux_sym__numbers_repeat1,
    ACTIONS(113), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(111), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [391] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    STATE(39), 1,
      sym_condition,
    ACTIONS(119), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(115), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym__,
    STATE(40), 1,
      sym_condition,
    ACTIONS(123), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [453] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(125), 17,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_RPAREN,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [480] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(129), 17,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_RPAREN,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(133), 17,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_RPAREN,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(98), 16,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [560] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(137), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [585] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(141), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(145), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [635] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(149), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(153), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(157), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [710] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(161), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [735] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(165), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(169), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(173), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(177), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(181), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [860] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(185), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [885] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(189), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(193), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(197), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [960] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(201), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [985] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(205), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(209), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [1035] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(213), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [1060] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(217), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [1085] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(221), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [1110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(225), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [1135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(229), 15,
      ts_builtin_sym_end,
      anon_sym_CMP,
      anon_sym_MOVE,
      anon_sym_ORG,
      aux_sym_define_memory_token1,
      anon_sym_EQU,
      anon_sym_JP,
      anon_sym_JR,
      anon_sym_CALL,
      aux_sym_ret_token1,
      anon_sym_HALT,
      aux_sym_load_token1,
      aux_sym_store_token1,
      anon_sym_POP,
      anon_sym_PUSH,
  [1160] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
    STATE(76), 3,
      sym__src2,
      sym_register,
      sym_immediate,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1193] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
    STATE(31), 3,
      sym__src2,
      sym_register,
      sym_immediate,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1226] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(69), 1,
      sym_register,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    STATE(77), 2,
      sym_reg_offset,
      sym_immediate,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1261] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
    STATE(74), 3,
      sym__src2,
      sym_register,
      sym_immediate,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1294] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(69), 1,
      sym_register,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    STATE(79), 2,
      sym_reg_offset,
      sym_immediate,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1329] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym__,
    ACTIONS(245), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(20), 1,
      sym_immediate,
    STATE(51), 1,
      sym_condition,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1363] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym__,
    ACTIONS(245), 1,
      sym_label,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(38), 1,
      sym_immediate,
    STATE(49), 1,
      sym_condition,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1397] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym__,
    ACTIONS(245), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(17), 1,
      sym_immediate,
    STATE(52), 1,
      sym_condition,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1428] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_label,
    ACTIONS(249), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(28), 1,
      sym_immediate,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1456] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    STATE(29), 2,
      sym__numbers,
      sym_string_literal,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1482] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_label,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(25), 1,
      sym_immediate,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1510] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(14), 1,
      sym_hex,
    STATE(19), 1,
      sym_immediate,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_hex,
    STATE(30), 1,
      sym_number,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 7,
      anon_sym_LPAREN,
      sym_label,
      sym_dec,
      sym_bin,
      sym_oct,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
  [1567] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_hex,
    STATE(85), 1,
      sym_number,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_hex,
    STATE(16), 1,
      sym_number,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1605] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(14), 1,
      sym_hex,
    STATE(27), 1,
      sym_number,
    ACTIONS(239), 2,
      aux_sym_hex_token1,
      aux_sym_hex_token2,
    ACTIONS(237), 3,
      sym_dec,
      sym_bin,
      sym_oct,
  [1624] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(70), 2,
      sym__dest,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(78), 2,
      sym__src1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 2,
      sym__src1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1666] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(22), 2,
      sym__dest,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1680] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(32), 2,
      sym__dest,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1694] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 2,
      sym__src1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1721] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(36), 1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1747] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(73), 1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1760] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(87), 1,
      sym_register,
    ACTIONS(233), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1773] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    ACTIONS(257), 1,
      anon_sym_PLUS,
  [1783] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
  [1790] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
  [1797] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
  [1804] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
  [1811] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
  [1818] = 2,
    ACTIONS(269), 1,
      sym_comment,
    ACTIONS(271), 1,
      aux_sym_string_literal_token1,
  [1825] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_COMMA,
  [1832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_RPAREN,
  [1839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
  [1846] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
  [1853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_COMMA,
  [1860] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_COMMA,
  [1867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_DQUOTE,
  [1874] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [1881] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
      anon_sym_LPAREN,
  [1888] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1895] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_LPAREN,
  [1902] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 74,
  [SMALL_STATE(4)] = 148,
  [SMALL_STATE(5)] = 214,
  [SMALL_STATE(6)] = 242,
  [SMALL_STATE(7)] = 270,
  [SMALL_STATE(8)] = 298,
  [SMALL_STATE(9)] = 329,
  [SMALL_STATE(10)] = 360,
  [SMALL_STATE(11)] = 391,
  [SMALL_STATE(12)] = 422,
  [SMALL_STATE(13)] = 453,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 507,
  [SMALL_STATE(16)] = 534,
  [SMALL_STATE(17)] = 560,
  [SMALL_STATE(18)] = 585,
  [SMALL_STATE(19)] = 610,
  [SMALL_STATE(20)] = 635,
  [SMALL_STATE(21)] = 660,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 710,
  [SMALL_STATE(24)] = 735,
  [SMALL_STATE(25)] = 760,
  [SMALL_STATE(26)] = 785,
  [SMALL_STATE(27)] = 810,
  [SMALL_STATE(28)] = 835,
  [SMALL_STATE(29)] = 860,
  [SMALL_STATE(30)] = 885,
  [SMALL_STATE(31)] = 910,
  [SMALL_STATE(32)] = 935,
  [SMALL_STATE(33)] = 960,
  [SMALL_STATE(34)] = 985,
  [SMALL_STATE(35)] = 1010,
  [SMALL_STATE(36)] = 1035,
  [SMALL_STATE(37)] = 1060,
  [SMALL_STATE(38)] = 1085,
  [SMALL_STATE(39)] = 1110,
  [SMALL_STATE(40)] = 1135,
  [SMALL_STATE(41)] = 1160,
  [SMALL_STATE(42)] = 1193,
  [SMALL_STATE(43)] = 1226,
  [SMALL_STATE(44)] = 1261,
  [SMALL_STATE(45)] = 1294,
  [SMALL_STATE(46)] = 1329,
  [SMALL_STATE(47)] = 1363,
  [SMALL_STATE(48)] = 1397,
  [SMALL_STATE(49)] = 1428,
  [SMALL_STATE(50)] = 1456,
  [SMALL_STATE(51)] = 1482,
  [SMALL_STATE(52)] = 1510,
  [SMALL_STATE(53)] = 1535,
  [SMALL_STATE(54)] = 1554,
  [SMALL_STATE(55)] = 1567,
  [SMALL_STATE(56)] = 1586,
  [SMALL_STATE(57)] = 1605,
  [SMALL_STATE(58)] = 1624,
  [SMALL_STATE(59)] = 1638,
  [SMALL_STATE(60)] = 1652,
  [SMALL_STATE(61)] = 1666,
  [SMALL_STATE(62)] = 1680,
  [SMALL_STATE(63)] = 1694,
  [SMALL_STATE(64)] = 1708,
  [SMALL_STATE(65)] = 1721,
  [SMALL_STATE(66)] = 1734,
  [SMALL_STATE(67)] = 1747,
  [SMALL_STATE(68)] = 1760,
  [SMALL_STATE(69)] = 1773,
  [SMALL_STATE(70)] = 1783,
  [SMALL_STATE(71)] = 1790,
  [SMALL_STATE(72)] = 1797,
  [SMALL_STATE(73)] = 1804,
  [SMALL_STATE(74)] = 1811,
  [SMALL_STATE(75)] = 1818,
  [SMALL_STATE(76)] = 1825,
  [SMALL_STATE(77)] = 1832,
  [SMALL_STATE(78)] = 1839,
  [SMALL_STATE(79)] = 1846,
  [SMALL_STATE(80)] = 1853,
  [SMALL_STATE(81)] = 1860,
  [SMALL_STATE(82)] = 1867,
  [SMALL_STATE(83)] = 1874,
  [SMALL_STATE(84)] = 1881,
  [SMALL_STATE(85)] = 1888,
  [SMALL_STATE(86)] = 1895,
  [SMALL_STATE(87)] = 1902,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(50),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numbers_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__numbers_repeat1, 2), SHIFT_REPEAT(56),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numbers_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numbers, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numbers, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numbers, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__numbers, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_immediate, 1),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_immediate, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hex, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hex, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_relative, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_relative, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_relative, 3),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_relative, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alu_operation, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alu_operation, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_store, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 6),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load, 6),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_org, 2),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_org, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_memory, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_memory, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equ, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equ, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compare, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_operation, 2),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_operation, 2),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_offset, 1),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [287] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_offset, 3),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_frisc(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
