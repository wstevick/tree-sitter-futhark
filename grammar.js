module.exports = grammar({
    name: 'futhark',

    extras: ($, original) => [...original, $.comment],

    word: $ => $.name,

    precedences: $ => [
        ['call', 'neg', 'mult', 'add'],
    ],

    rules: {
        source_file: $ => repeat($._dec),
        
        _dec: $ => choice($.val_bind),

        val_bind: $ => seq('def', field('bindto', $.name), '=', field('val', $._exp)),

        _atom: $ => choice($.name, seq('(', $._exp, ')')),
        _exp: $ => choice($._atom, $.call, $.binary, $.neg),

        call: $ => prec.left('call', seq(field('func', $._exp), field('arg', $._exp))),
        binary: $ => {
            // a "level" represents a group of operators with the same precedence
            const levels = [
                ['left', 'add', ['+', '-']],
                ['left', 'mult', ['*', '/']],
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
        neg: $ => prec('neg', seq('-', field('negated', $._exp))),

        name: $ => /[a-zA-Z_][a-zA-Z0-9_']*/,
        symbol: $ => /[+\-*\/%=!><|%^][+\-*\/%=!><|%^.]*/,

        comment: $ => /--.*\n/,
    },
});
