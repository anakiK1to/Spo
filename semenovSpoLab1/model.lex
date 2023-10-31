//
// Created by k1toWorkDevice1 on 31.10.2023.
//

identifier: "[a-zA-Z_][a-zA-Z_0-9]*"; // идентификатор
str: "\"[^\"\\]*(?:\\.[^\"\\]*)*\""; // строка, окруженная двойными кавычками
char: "'[^']'";
// одиночный символ в одинарных кавычках
hex: "0[xX][0-9A-Fa-f]+";
// шестнадцатеричный литерал
bits: "0[bB][01]+";
// битовый литерал
dec: "[0-9]+";
// десятичный литерал
bool: 'true'|'false';
// булевский литерал
list<item>: (item (',' item)*)?; // список элементов, разделённых запятыми



source: sourceItem*;
typeRef: {
|builtin: 'bool'|'byte'|'int'|'uint'|'long'|'ulong'|'char'|'string';
|custom: identifier;
|array: typeRef 'array' '[' dec ']'; // число - размерность
};
funcSignature: identifier '(' list<arg> ')' ('of' typeRef)? {
arg: identifier ('of' typeRef)?;
};
sourceItem: {
|funcDef: 'def' funcSignature (statement* 'end')?;
};
statement: { // присваивание через '='
|if: 'if' expr 'then' statement ('else' statement)?;
|loop: ('while'|'until') expr statement* 'end';
|repeat: statement ('while'|'until') expr ';';
|break: 'break' ';';
|expression: expr ';';
|block: ('begin'|'{') (statement|sourceItem)* ('end'|'}');
};
expr: {
|binary: expr binOp expr; // где binOp - символ бинарного оператора
|unary: unOp expr; // где unOp - символ унарного оператора
|braces: '(' expr ')';
|call: expr '(' list<expr> ')';
|slice: expr '[' list<range> ']' { // индексация или срез массива
ranges: expr ('..' expr)?; // from index, to
};
|place: identifier;
|literal: bool|str|char|hex|bits|dec;
};