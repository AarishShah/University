%{
#include <stdio.h>
%}

%%
[a-zA-Z]+   { printf("WORD: %s\n", yytext); }
[0-9]+      { printf("NUMBER: %s\n", yytext); }
[\n]        { /* Ignore newlines */ }
.           { printf("CHARACTER: %c\n", yytext[0]); }
%%

int yywrap() {
    return 1;
}

int main() {
    yylex();
    return 0;
}
