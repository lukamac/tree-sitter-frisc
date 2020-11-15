module.exports = grammar({
    name: 'frisc',

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ => seq(
            optional($.label),
            choice(
                $.alu_operation,
                $.compare,
                $.move,
                $._memory_operation,
                $._control_operation,
                $._preprocessor
            )
        ),

        comment: $ => token(/;[^\r\n]*/),

        alu_operation: $ => seq(
            $._alu_mnemonic, $._src1, ',', $._src2, ',', $._dest
        ),

        compare: $ => seq(
            'CMP', $._src1, ',', $._src2
        ),

        move: $ => seq(
            'MOVE', $._src2, ',', $._dest
        ),

        _memory_operation: $ => choice(
            $.load,
            $.store,
            $.stack_operation
        ),

        _control_operation: $ => choice(
            $.jump,
            $.jump_relative,
            $.call,
            $.ret,
            $.halt
        ),

        _preprocessor: $ => choice(
            $.org,
            $.define_memory,
            $.equ
        ),

        org: $ => seq(
            'ORG', $.number
        ),

        define_memory: $ => seq(
            /D[WHBS]/, choice($._numbers, $.string_literal)
        ),

        equ: $ => seq(
            'EQU', $.number
        ),

        jump: $ => seq(
            'JP', optional($.condition), choice($.immediate, seq('(', $.register, ')'))
        ),

        jump_relative: $ => seq(
            'JR', optional($.condition), $.immediate
        ),

        call: $ => seq(
            'CALL', optional($.condition), choice($.immediate, seq('(', $.register, ')'))
        ),

        ret: $ => seq(
            /RET[IN]?/, optional($.condition)
        ),

        halt: $ => seq(
            'HALT', optional($.condition)
        ),

        condition: $ => seq('_', choice(
            'C', 'NC', 'V', 'NV', 'N', 'NN',
            'M', 'P', 'Z', 'NZ', 'EQ', 'NE',
            'ULE', 'UGT', 'ULT', 'UGE', 'SLE',
            'SGT', 'SLT', 'SGE'
        )),

        load: $ => seq(
            /LOAD[BH]?/, $._dest, ',', '(', choice($.immediate, $.reg_offset), ')'
        ),

        store: $ => seq(
            /STORE[BH]?/, $._src1, ',', '(', choice($.immediate, $.reg_offset), ')'
        ),

        reg_offset: $ => seq(
            $.register,
            optional(seq('+', $.number))
        ),

        stack_operation: $ => seq(
            choice('POP', 'PUSH'), $.register
        ),

        _alu_mnemonic: $ => token(choice(
            'ADD', 'ADC', 'SUB', 'SBC', 'AND', 'OR',
            'XOR', 'SHL', 'SHR', 'ASHR', 'ROTL', 'ROTR'
        )),

        _src1: $ => $.register,

        _src2: $ => choice(
            $.register,
            $.immediate
        ),

        _dest: $ => $.register,

        register: $ => choice(
            /R[0-7]/,
            'SP',
            'SR',
            'PC'
        ),

        immediate: $ => choice(
            $.label,
            $.number
        ),

        label: $ => token(prec(-1, /[a-zA-Z]\w*/)),

        _numbers: $ => seq(
            $.number, repeat(seq(',', $.number))
        ),

        number: $ => choice(
            $.dec,
            $.bin,
            $.oct,
            $.hex
        ),

        string_literal: $ => seq(
            '"',
            token.immediate(prec(1, /[^\\"\n]+/)),
            '"',
        ),

        dec: $ => /%D -?[0-9]+/,
        bin: $ => /%B -?[01]+/,
        oct: $ => /%O -?[0-7]+/,
        hex: $ => token(choice(/-?[0-9][0-9a-fA-F]*/, /%H -?[0-9a-fA-F]+/))
    }
});
