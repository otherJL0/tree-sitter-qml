module.exports = grammar({
  name: "qml",

  rules: {
    identifier: ($) => /[A-Za-z]+/,

    number: ($) => /\d+/,

    import_statement: ($) =>
      seq(
        "import",
        $._module_identifier,
        $._version_number,
        optional(seq("as", $.identifier)),
      ),

    _module_identifier: ($) =>
      seq(
        $.identifier,
        optional("."),
      ),

    _version_number: ($) =>
      seq(
        $.number,
        ".",
        $.number,
      ),
  },
});
