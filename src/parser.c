#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 53
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
  sym_hex = 52,
  sym_source_file = 53,
  sym__statement = 54,
  sym_alu_operation = 55,
  sym_compare = 56,
  sym_move = 57,
  sym__memory_operation = 58,
  sym__control_operation = 59,
  sym__preprocessor = 60,
  sym_org = 61,
  sym_define_memory = 62,
  sym_equ = 63,
  sym_jump = 64,
  sym_jump_relative = 65,
  sym_call = 66,
  sym_ret = 67,
  sym_halt = 68,
  sym_condition = 69,
  sym_load = 70,
  sym_store = 71,
  sym_reg_offset = 72,
  sym_stack_operation = 73,
  sym__src1 = 74,
  sym__src2 = 75,
  sym__dest = 76,
  sym_register = 77,
  sym_immediate = 78,
  sym__numbers = 79,
  sym_number = 80,
  sym_string_literal = 81,
  aux_sym_source_file_repeat1 = 82,
  aux_sym__numbers_repeat1 = 83,
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
  [sym_hex] = "hex",
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
  [sym_hex] = sym_hex,
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
  [sym_hex] = {
    .visible = true,
    .named = true,
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
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
      ACCEPT_TOKEN(sym_hex);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
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
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 7},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 7},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 7},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 7},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
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
    [sym_hex] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(82),
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
    STATE(19), 17,
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
    STATE(17), 1,
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
    STATE(39), 1,
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
  [533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      sym__alu_mnemonic,
      sym_label,
    ACTIONS(133), 15,
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
  [558] = 3,
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
  [583] = 3,
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
  [608] = 3,
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
  [633] = 3,
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
  [658] = 3,
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
  [683] = 3,
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
  [708] = 3,
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
  [733] = 3,
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
  [758] = 3,
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
  [783] = 3,
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
  [808] = 3,
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
  [833] = 3,
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
  [858] = 3,
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
  [883] = 3,
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
  [908] = 3,
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
  [933] = 3,
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
  [958] = 3,
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
  [983] = 3,
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
  [1008] = 3,
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
  [1033] = 3,
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
  [1058] = 3,
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
  [1083] = 3,
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
  [1108] = 3,
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
  [1133] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(68), 1,
      sym_register,
    STATE(76), 2,
      sym_reg_offset,
      sym_immediate,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1162] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(68), 1,
      sym_register,
    STATE(78), 2,
      sym_reg_offset,
      sym_immediate,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1191] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(75), 3,
      sym__src2,
      sym_register,
      sym_immediate,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1218] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(18), 3,
      sym__src2,
      sym_register,
      sym_immediate,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1245] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(73), 3,
      sym__src2,
      sym_register,
      sym_immediate,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1272] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      anon_sym_LPAREN,
    ACTIONS(237), 1,
      anon_sym__,
    ACTIONS(239), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(32), 1,
      sym_immediate,
    STATE(49), 1,
      sym_condition,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1300] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym__,
    ACTIONS(239), 1,
      sym_label,
    ACTIONS(241), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_number,
    STATE(37), 1,
      sym_immediate,
    STATE(50), 1,
      sym_condition,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1328] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym__,
    ACTIONS(239), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(34), 1,
      sym_immediate,
    STATE(51), 1,
      sym_condition,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1353] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_number,
    STATE(28), 2,
      sym__numbers,
      sym_string_literal,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1373] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_label,
    ACTIONS(245), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_number,
    STATE(33), 1,
      sym_immediate,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1395] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_label,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(13), 1,
      sym_number,
    STATE(38), 1,
      sym_immediate,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1417] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_label,
    STATE(13), 1,
      sym_number,
    STATE(36), 1,
      sym_immediate,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(72), 2,
      sym__dest,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1450] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(77), 2,
      sym__src1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1464] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(79), 2,
      sym__src1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1478] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(21), 2,
      sym__dest,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(16), 2,
      sym__dest,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1506] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(80), 2,
      sym__src1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 6,
      anon_sym_LPAREN,
      sym_label,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(86), 1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(69), 1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(30), 1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(70), 1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1584] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_number,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1597] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_number,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(29), 1,
      sym_number,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1623] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(26), 1,
      sym_number,
    ACTIONS(233), 4,
      sym_dec,
      sym_bin,
      sym_oct,
      sym_hex,
  [1636] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym_register,
    ACTIONS(229), 4,
      aux_sym_register_token1,
      anon_sym_SP,
      anon_sym_SR,
      anon_sym_PC,
  [1649] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_PLUS,
  [1659] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
  [1666] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
  [1673] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
  [1680] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_COMMA,
  [1687] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_COMMA,
  [1694] = 2,
    ACTIONS(263), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_string_literal_token1,
  [1701] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(267), 1,
      anon_sym_COMMA,
  [1708] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
  [1715] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(271), 1,
      anon_sym_COMMA,
  [1722] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
  [1729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(275), 1,
      anon_sym_COMMA,
  [1736] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(277), 1,
      anon_sym_COMMA,
  [1743] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(279), 1,
      anon_sym_DQUOTE,
  [1750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      ts_builtin_sym_end,
  [1757] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      anon_sym_LPAREN,
  [1764] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
  [1778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 1,
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
  [SMALL_STATE(16)] = 533,
  [SMALL_STATE(17)] = 558,
  [SMALL_STATE(18)] = 583,
  [SMALL_STATE(19)] = 608,
  [SMALL_STATE(20)] = 633,
  [SMALL_STATE(21)] = 658,
  [SMALL_STATE(22)] = 683,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 733,
  [SMALL_STATE(25)] = 758,
  [SMALL_STATE(26)] = 783,
  [SMALL_STATE(27)] = 808,
  [SMALL_STATE(28)] = 833,
  [SMALL_STATE(29)] = 858,
  [SMALL_STATE(30)] = 883,
  [SMALL_STATE(31)] = 908,
  [SMALL_STATE(32)] = 933,
  [SMALL_STATE(33)] = 958,
  [SMALL_STATE(34)] = 983,
  [SMALL_STATE(35)] = 1008,
  [SMALL_STATE(36)] = 1033,
  [SMALL_STATE(37)] = 1058,
  [SMALL_STATE(38)] = 1083,
  [SMALL_STATE(39)] = 1108,
  [SMALL_STATE(40)] = 1133,
  [SMALL_STATE(41)] = 1162,
  [SMALL_STATE(42)] = 1191,
  [SMALL_STATE(43)] = 1218,
  [SMALL_STATE(44)] = 1245,
  [SMALL_STATE(45)] = 1272,
  [SMALL_STATE(46)] = 1300,
  [SMALL_STATE(47)] = 1328,
  [SMALL_STATE(48)] = 1353,
  [SMALL_STATE(49)] = 1373,
  [SMALL_STATE(50)] = 1395,
  [SMALL_STATE(51)] = 1417,
  [SMALL_STATE(52)] = 1436,
  [SMALL_STATE(53)] = 1450,
  [SMALL_STATE(54)] = 1464,
  [SMALL_STATE(55)] = 1478,
  [SMALL_STATE(56)] = 1492,
  [SMALL_STATE(57)] = 1506,
  [SMALL_STATE(58)] = 1520,
  [SMALL_STATE(59)] = 1532,
  [SMALL_STATE(60)] = 1545,
  [SMALL_STATE(61)] = 1558,
  [SMALL_STATE(62)] = 1571,
  [SMALL_STATE(63)] = 1584,
  [SMALL_STATE(64)] = 1597,
  [SMALL_STATE(65)] = 1610,
  [SMALL_STATE(66)] = 1623,
  [SMALL_STATE(67)] = 1636,
  [SMALL_STATE(68)] = 1649,
  [SMALL_STATE(69)] = 1659,
  [SMALL_STATE(70)] = 1666,
  [SMALL_STATE(71)] = 1673,
  [SMALL_STATE(72)] = 1680,
  [SMALL_STATE(73)] = 1687,
  [SMALL_STATE(74)] = 1694,
  [SMALL_STATE(75)] = 1701,
  [SMALL_STATE(76)] = 1708,
  [SMALL_STATE(77)] = 1715,
  [SMALL_STATE(78)] = 1722,
  [SMALL_STATE(79)] = 1729,
  [SMALL_STATE(80)] = 1736,
  [SMALL_STATE(81)] = 1743,
  [SMALL_STATE(82)] = 1750,
  [SMALL_STATE(83)] = 1757,
  [SMALL_STATE(84)] = 1764,
  [SMALL_STATE(85)] = 1771,
  [SMALL_STATE(86)] = 1778,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(57),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(11),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_register, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_register, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__numbers_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__numbers_repeat1, 2), SHIFT_REPEAT(63),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__numbers_repeat1, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__numbers, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_move, 4),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_move, 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ret, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ret, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compare, 4),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compare, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_condition, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_condition, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alu_operation, 6),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_alu_operation, 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_store, 6),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_store, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_load, 6),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_load, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 5),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 5),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 5),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_org, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_org, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_memory, 2),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_memory, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_equ, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_equ, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stack_operation, 2),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stack_operation, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 4),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 2),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump, 3),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_relative, 2),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_relative, 2),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump_relative, 3),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jump_relative, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 2),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_halt, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_halt, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_offset, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [281] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reg_offset, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
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
