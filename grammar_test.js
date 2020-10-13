module.exports = grammar({
    name: 'frisc',

    inline: $ => [$.condition],

    word: $ => $.label,

    extras: $ => [
        /\s/,
        $.comment,
    ],

    rules: {
        source_file: $ => repeat($._statement),

        _statement: $ => seq(
            optional($.label),
            $.jump,
        ),

        jump: $ => token(seq('JP', optional(seq('_', 'C')))),

        label: $ => /[a-zA-Z]\w*/,

        comment: $ => token(/;[^\r\n]*/),
    }
});
