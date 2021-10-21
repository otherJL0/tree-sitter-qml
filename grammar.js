module.exports = grammar({
  name: "qml",

  rules: {
    document: ($) => repeat($._statement),

    _statement: ($) =>
      choice(
        $.import_statement,
      ),

    import_statement: ($) =>
      choice(
        $.module_import,
        $.qualified_import,
      ),

    module_import: ($) =>
      seq(
        "import",
        $.identifier,
        $.version,
      ),

    version: ($) =>
      seq(
        $.number,
        ".",
        $.number,
      ),
    qualified_import: ($) =>
      seq(
        $.module_import,
        "as",
        $.identifier,
      ),

    identifier: ($) => /\w+/,
    number: ($) => /\d+/,
  },
});
