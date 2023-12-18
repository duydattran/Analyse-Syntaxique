%option nounput
%option noinput
%{
#include "tree.h"
#include "parser.h"
int lineno = 1;
%}
%option nounput
%option noyywrap
%x comment
%%
"if"                            return IF;
"else"                          return ELSE;
"return"                        return RETURN;
"while"                         return WHILE;
"int"|"char"                    {
                                    strcpy(yylval.value, yytext);
                                    return TYPE;
                                }
"void"                          return VOID;
[a-zA-Z_][a-zA-Z_0-9]*          {
                                    strcpy(yylval.value, yytext);
                                    return IDENT;
                                }
                                
[0-9]+                          {
                                    strcpy(yylval.value, yytext);
                                    return NUM;
                                }  
[+-]                            {
                                    strcpy(yylval.value, yytext);
                                    return ADDSUB;
                                }
[*/%]                           {
                                    strcpy(yylval.value, yytext);
                                    return DIVSTAR;
                                }
"=="|"!="                       {    
                                    strcpy(yylval.value, yytext);
                                    return EQ;
                                }
"<"|"<="|">"|">="               {
                                    strcpy(yylval.value, yytext);
                                    return ORDER;
                                }
"||"                            return OR;
"&&"                            return AND;
"/*"                            BEGIN(comment);
<comment>.
<comment>\n                     ++lineno;
<comment>"*/"                   BEGIN(INITIAL);
\/\/.*                          ;
"/*"([^*]|(\*+[^*/]))*\*+\/     ;
[ \t]                           ;
'\\n'|'\\t'                     return CHARACTER;
\n                              ++lineno;
'.'                             return CHARACTER;
.                               return yytext[0];
%%
