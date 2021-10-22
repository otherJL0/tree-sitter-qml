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
        $.directory_import,
        $.js_import,
      ),

    module_import: ($) =>
      seq(
        "import",
        $.module,
        $.version,
      ),

    module: ($) =>
      seq(
        $.identifier,
        optional(seq(".", $.module)),
      ),

    version: ($) =>
      seq(
        $.number,
        ".",
        $.number,
      ),

    qualified_import: ($) =>
      seq(
        choice(
          $.module_import,
          $.directory_import,
        ),
        "as",
        $.identifier,
      ),

    directory_import: ($) => seq("import", $.path),
    js_import: ($) => seq("import", $.file, "as", $.identifier),

    path: ($) => /"([^"]\/)*[^"]+"/,
    file: ($) => /"([^"]\/)*[^"]+\.js"/,

    identifier: ($) => /\w+/,
    number: ($) => /\d+/,
  },
});
