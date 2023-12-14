%option nounput
%option noinput
%{
#include "parser.h"
int lineno = 1;
%}
%option nounput
%option noyywrap
%x comment
%%
"if" {  printf("if\n");
        return IF;}
"else" return ELSE;
"return" return RETURN;
"while" return WHILE;
"int"|"char"             {printf("type : %s\n", yytext); 
                         return TYPE;}
"void" return VOID;
[a-zA-Z_][a-zA-Z_0-9]*   {printf("identifier %s\n", yytext);
                         return IDENT;}
[0-9]+                   {printf("num %s\n", yytext);
                         return NUM;}
[+-] return ADDSUB;
[*/] return DIVSTAR;
"=="|"!=" return EQ;
"<"|"<="|">"|">=" return ORDER;
"||" return OR;
"&&" return AND;
"/*" BEGIN(comment);
<comment>.
<comment>\n ++lineno;
<comment>"*/" {BEGIN(INITIAL);}
\/\/.* ;
[ \t] ;
\n lineno++;
'.'                     {printf("yytext %c\n",yytext[0]);
                        return CHARACTER;}
.                       {printf("yytext %c\n",yytext[0]);
                        return yytext[0];}
%%
