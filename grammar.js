const NAME = /[a-zA-Z_][a-zA-Z0-9_']*/;
const SYMSTARTCHAR = /[+\-*\/%=!><|%^]/;
const SYMCHAR = choice(SYMSTARTCHAR, ".");
const SYMBOL = seq(SYMCHAR, repeat(SYMSTARTCHAR));
const QUALS = repeat(seq(NAME, "."));
const QUALNAME = seq(QUALS, NAME);
const BACKTICKED = seq("`", QUALNAME, "`");
const QUALSYMBOL = choice(seq(QUALS, SYMBOL), BACKTICKED);

module.exports = grammar({
  name: "futhark",

  extras: ($, original) => [...original, $._comment],

  word: ($) => $.name,

  precedences: () => [
    ["neg", "mult", "add", "trailing_exp"],
  ],

  rules: {
    source_file: ($) => repeat($._dec),

    _dec: ($) => choice($.val_bind, $.entry_point),

    val_bind: ($) => seq(choice("def", "let"), $._simple_bind),
    entry_point: ($) => seq("entry", $._simple_bind),
    _simple_bind: ($) =>
      seq(field("bindto", $.name), "=", field("val", $._exp)),

    _atom: ($) => choice($.name, seq("(", $._exp, ")")),
    _exp: ($) => choice($._atom, $.apply, $.binary, $.neg, $.if),

    apply: ($) => seq($._atom, repeat1($._atom)),

    binary: ($) => {
      // a "level" represents a group of operators with the same precedence
      const levels = [
        ["left", "add", ["+", "-"]],
        ["left", "mult", ["*", "/"]],
      ];
      const rules = levels.map((level) => {
        const assoc = level[0];
        const precName = level[1];
        const ops = level[2];
        return prec[assoc](
          precName,
          seq(
            $._exp,
            alias(token(seq(QUALS, choice(...ops))), $.qualsymbol),
            $._exp,
          ),
        );
      });
      return choice(...rules);
    },

    neg: ($) => prec("neg", seq("-", $._exp)),

    if: ($) =>
      prec(
        "trailing_exp",
        seq(
          "if",
          $._exp,
          "then",
          $._exp,
          "else",
          $._exp,
        ),
      ),

    name: () => token(NAME),
    symbol: () => token(SYMBOL),
    qualname: () => token(QUALNAME),
    qualsymbol: () => token(QUALSYMBOL),

    _comment: () => /--.*\n/,
  },
});
