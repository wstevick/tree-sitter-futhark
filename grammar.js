module.exports = grammar({
    name: 'futhark',

    extras: ($, original) => [...original, $.comment],

    word: $ => $.name,

    precedences: $ => [
        ['call', 'multiplication', 'addition'],
    ],

    rules: {
        source_file: $ => seq('def', 'a', '=', $._exp),

        _atom: $ => choice($.name, seq('(', $._exp, ')')),
        _exp: $ => choice($._atom, $.call, $.binary),

        call: $ => prec.left('call', seq(field('func', $._exp), field('arg', $._exp))),
        binary: $ => {
            const levels = [
                ['left', 'addition', ['+', '-']],
                ['left', 'multiplication', ['*', '/']],
            ];
            const rules = levels.map(level => {
                const assoc = level[0];
                const precName = level[1];
                const ops = level[2];
                return prec[assoc](precName,
                    seq(field('lhs', $._exp),
                        field('op', alias(choice(...ops), $.symbol)),
                        field('rhs', $._exp)));
            });
            return choice(...rules);
        },

        name: $ => /[a-zA-Z_][a-zA-Z0-9_']*/,
        symbol: $ => /[+\-*\/%=!><|%^][+\-*\/%=!><|%^.]*/,

        comment: $ => /--.*\n/,
    },
});
