module.exports = grammar({
    name: 'frisc',

    word: $ => $.label,

    rules: {
        source_file: $ => repeat(choice($.comment, $._statement)),

        _statement: $ => seq(
            optional($.label),
            choice(
                $.binary_operation,
                $.compare,
                $.move,
                $.memory_operation,
                $.control_operation,
                $._preprocessor
            )
        ),

        comment: $ => /;.*/,

        binary_operation: $ => seq(
            $.alu_mnemonic, $.src1, ',', $.src2, ',', $.dest
        ),

        compare: $ => seq(
            'CMP', $.src1, ',', $.src2
        ),

        move: $ => seq(
            'MOVE', $.src2, ',', $.dest
        ),

        memory_operation: $ => choice(
            $.load_operation,
            $.store_operation,
            $.stack_operation
        ),

        control_operation: $ => choice(
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
            /D[WHBS]/, $.numbers
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

        condition: $ => choice(
            '_C', '_NC', '_V', '_NV', '_N', '_NN',
            '_M', '_P', '_Z', '_NZ', '_EQ', '_NE',
            '_ULE', '_UGT', '_ULT', '_UGE', '_SLE',
            '_SGT', '_SLT', '_SGE'
        ),

        load_operation: $ => seq(
            /LOAD[BH]?/, $.dest, ',', '(', choice($.immediate, $.reg_offset), ')'
        ),

        store_operation: $ => seq(
            /STORE[BH]?/, $.src1, ',', '(', choice($.immediate, $.reg_offset), ')'
        ),

        reg_offset: $ => seq(
            $.register,
            optional(seq('+', $.number))
        ),

        stack_operation: $ => seq(
            choice('POP', 'PUSH'), $.register
        ),

        alu_mnemonic: $ => choice(
            'ADD', 'ADC', 'SUB', 'SBC', 'AND', 'OR',
            'XOR', 'SHL', 'SHR', 'ASHR', 'ROTL', 'ROTR'
        ),

        src1: $ => $.register,

        src2: $ => choice(
            prec(1, $.register),
            $.immediate
        ),

        dest: $ => $.register,

        register: $ => choice(
            /R[0-7]/,
            'SP',
            'SR',
            'PC'
        ),

        immediate: $ => choice(
            $.label,
            prec(1, $.number)
        ),

        label: $ => /[a-zA-Z][a-zA-Z0-9]*/,

        numbers: $ => seq(
            $.number, repeat(seq(',', $.number))
        ),

        number: $ => choice(
            $.dec,
            $.bin,
            $.oct,
            $.hex
        ),

        dec: $ => /%D -?[0-9]+/,
        bin: $ => /%B -?[01]+/,
        oct: $ => /%O -?[0-7]+/,
        hex: $ => /-?[0-9][0-9a-fA-F]*/
    }
});
