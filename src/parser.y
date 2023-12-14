%{
#include <stdio.h>
#include "tree.h"
int yylex();
void yyerror(char *msg);
extern int lineno;
%}
%union {
    char byte;
    int num;
    char ident[64];
    char comp[3];
    Node *node;
}
%type <node> Prog DeclVars DeclFoncts Declarateurs DeclFonct EnTeteFonct Parametres
%type <node> ListTypVar Corps SuiteInstr Instr LValue Exp Arguments TB FB M E T F ListExp
%token <byte> CHARACTER ADDSUB DIVSTAR
%token <num> NUM
%token <ident> IDENT
%token <comp> ORDER EQ
%token OR
%token AND
%token TYPE
%token VOID
%token IF
%token ELSE
%token WHILE
%token RETURN
%expect 1
%%
Prog            : DeclVars DeclFoncts                   {
                                                            $$ = makeNode(prog);
                                                            addChild($$, $1);
                                                            addChild($$, $2);
                                                            printTree($$);
                                                        }
                ;
DeclVars        : DeclVars TYPE Declarateurs ';'        {
                                                            $$ = makeNode(declvars);
                                                            Node *f = makeNode(type);
                                                            addChild($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                |                                       {/*do nothing*/}
                ;
Declarateurs    : Declarateurs ',' IDENT                {
                                                            $$ = makeNode(declarateurs);
                                                            Node *f1 = makeNode(comma);
                                                            Node *f2 = makeNode(ident);
                                                            addSibling($$, $1);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                        }
                | Declarateurs ',' IDENT '[' NUM ']'    {
                                                            $$ = makeNode(declarateurs);
                                                            Node *f1 = makeNode(comma);
                                                            Node *f2 = makeNode(ident);
                                                            Node *f3 = makeNode(opsqbracket);
                                                            Node *f4 = makeNode(num);
                                                            Node *f5 = makeNode(clsqbracket);
                                                            addSibling($$, $1);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, f3);
                                                            addChild($$, f4);
                                                            addChild($$, f5);
                                                        }
                | IDENT '[' NUM ']'                     {
                                                            $$ = makeNode(declarateurs);
                                                            Node *f2 = makeNode(ident);
                                                            Node *f3 = makeNode(opsqbracket);
                                                            Node *f4 = makeNode(num);
                                                            Node *f5 = makeNode(clsqbracket);
                                                            addChild($$, f2);
                                                            addChild($$, f3);
                                                            addChild($$, f4);
                                                            addChild($$, f5);
                                                        }
                |  IDENT                                {
                                                            $$ = makeNode(declarateurs);
                                                            Node *f2 = makeNode(ident);
                                                            addChild($$, f2);
                                                        }
                ;	
DeclFoncts      : DeclFoncts DeclFonct                  {
                                                            $$ = makeNode(declfoncts);
                                                            addSibling($$, $1);
                                                            addChild($$, $2);
                                                        }
                | DeclFonct                             {
                                                            $$ = makeNode(declfoncts);
                                                            addChild($$, $1);
                                                        }
                ;
DeclFonct       : EnTeteFonct Corps                     {
                                                            $$ = makeNode(declfonct);
                                                            addChild($$, $1);
                                                            addChild($$, $2);
                                                        }
                ;
EnTeteFonct     : TYPE IDENT '(' Parametres ')'         {
                                                            $$ = makeNode(entetefonct);
                                                            Node *f1 = makeNode(type);
                                                            Node *f2 = makeNode(ident);
                                                            Node *f3 = makeNode(opParen);
                                                            Node *f4 = makeNode(clParen);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, f3);
                                                            addChild($$, $4);
                                                            addChild($$, f4);
                                                        }
                | VOID IDENT '(' Parametres ')'         {
                                                            $$ = makeNode(entetefonct);
                                                            Node *f1 = makeNode(Void);
                                                            Node *f2 = makeNode(ident);
                                                            Node *f3 = makeNode(opParen);
                                                            Node *f4 = makeNode(clParen);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, f3);
                                                            addChild($$, $4);
                                                            addChild($$, f4);
                                                        }
                ;
Parametres      : VOID                                  {
                                                            $$ = makeNode(parametres);
                                                            Node *f = makeNode(Void);
                                                            addChild($$, f);
                                                        }
                | ListTypVar                            {
                                                            $$ = makeNode(parametres);
                                                            addChild($$, $1);
                                                        }
                ;
ListTypVar      : ListTypVar ',' TYPE IDENT             {
                                                            $$ = makeNode(listtypvar);
                                                            Node *f1 = makeNode(comma);
                                                            Node *f2 = makeNode(type);
                                                            Node *f3 = makeNode(ident);
                                                            addSibling($$, $1);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, f3);
                                                        }
                | ListTypVar ',' TYPE IDENT '[' ']'     {
                                                            $$ = makeNode(listtypvar);
                                                            Node *f1 = makeNode(comma);
                                                            Node *f2 = makeNode(type);
                                                            Node *f3 = makeNode(ident);
                                                            Node *f4 = makeNode(opsqbracket);
                                                            Node *f5 = makeNode(clsqbracket);
                                                            addSibling($$, $1);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, f3);
                                                            addChild($$, f4);
                                                            addChild($$, f5);
                                                        }
                | TYPE IDENT                            {
                                                            $$ = makeNode(listtypvar);
                                                            Node *f1 = makeNode(type);
                                                            Node *f2 = makeNode(ident);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                        }
                | TYPE IDENT '[' ']'                    {
                                                            $$ = makeNode(listtypvar);
                                                            Node *f1 = makeNode(type);
                                                            Node *f2 = makeNode(ident);
                                                            Node *f3 = makeNode(opsqbracket);
                                                            Node *f4 = makeNode(clsqbracket);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, f3);
                                                            addChild($$, f4);
                                                        }
                ;                                       
Corps           : '{' DeclVars SuiteInstr '}'           {
                                                            $$ = makeNode(corps);
                                                            Node *f1 = makeNode(opbracket);
                                                            Node *f2 = makeNode(clbracket);
                                                            addChild($$, f1);
                                                            addChild($$, $2);
                                                            addChild($$, $3);
                                                            addChild($$, f2);
                                                        }
                ;
SuiteInstr      : SuiteInstr Instr                      {
                                                            $$ = makeNode(suiteinstr);
                                                            addSibling($$, $1);
                                                            addChild($$, $2);
                                                        }
                |                                       {/*do nothing*/}
                ;
Instr           : LValue '=' Exp ';'                    {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(equal);
                                                            Node *f2 = makeNode(semicolon);
                                                            addChild($$, $1);
                                                            addChild($$, f1);
                                                            addChild($$, $3);
                                                            addChild($$, f2);
                                                        }
                | IF '(' Exp ')' Instr                  {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(opParen);
                                                            Node *f2 = makeNode(clParen);
                                                            Node *f3 = makeNode(If);
                                                            addSibling($$, $5);
                                                            addChild($$, f3);
                                                            addChild($$, f1);
                                                            addChild($$, $3);
                                                            addChild($$, f2);
                                                        }
                | IF '(' Exp ')' Instr ELSE Instr       {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(opParen);
                                                            Node *f2 = makeNode(clParen);
                                                            Node *f3 = makeNode(If);
                                                            Node *f4 = makeNode(Else);
                                                            addSibling($$, $5);
                                                            addSibling($$, $7);
                                                            addChild($$, f3);
                                                            addChild($$, f1);
                                                            addChild($$, $3);
                                                            addChild($$, f2);
                                                            addChild($$, f4);
                                                        }
                | WHILE '(' Exp ')' Instr               {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(opParen);
                                                            Node *f2 = makeNode(clParen);
                                                            Node *f3 = makeNode(While);
                                                            addChild($$, f3);
                                                            addChild($$, f1);
                                                            addChild($$, $3);
                                                            addChild($$, f2);
                                                            addSibling($$, $5);
                                                        }
                | IDENT '(' Arguments  ')' ';'          {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(ident);
                                                            Node *f2 = makeNode(opParen);
                                                            Node *f3 = makeNode(clParen);
                                                            Node *f4 = makeNode(semicolon);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, $3);
                                                            addChild($$, f3);
                                                            addChild($$, f4);
                                                        }
                | RETURN Exp ';'                        {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(Return);
                                                            Node *f2 = makeNode(semicolon);
                                                            addChild($$, f1);
                                                            addChild($$, $2);
                                                            addChild($$, f2);
                                                        }
                | RETURN ';'                            {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(Return);
                                                            Node *f2 = makeNode(semicolon);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                        }
                | '{' SuiteInstr '}'                    {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(opbracket);
                                                            Node *f2 = makeNode(clbracket);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, $2);
                                                        }
                | ';'                                   {
                                                            $$ = makeNode(instr);
                                                            Node *f1 = makeNode(semicolon);
                                                            addChild($$, f1);
                                                        }
                ;
Exp             : Exp OR TB                             {
                                                            $$ = makeNode(exp);
                                                            Node *f = makeNode(or);
                                                            addSibling($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                | TB                                    {
                                                            $$ = makeNode(exp);
                                                            addChild($$, $1);
                                                        }
                ;
TB              : TB AND FB                             {
                                                            $$ = makeNode(TB);
                                                            Node *f = makeNode(and);
                                                            addSibling($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                | FB                                    {
                                                            $$ = makeNode(TB);
                                                            addChild($$, $1);
                                                        }
                ;   
FB              : FB EQ M                               {
                                                            $$ = makeNode(FB);
                                                            Node *f = makeNode(EQ);
                                                            addSibling($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                | M                                     {
                                                            $$ = makeNode(FB);
                                                            addChild($$, $1);
                                                        }
                ;
M               : M ORDER E                             {
                                                            $$ = makeNode(M);
                                                            Node *f = makeNode(order);
                                                            addSibling($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                | E                                     {
                                                            $$ = makeNode(M);
                                                            addChild($$, $1);
                                                        }
                ;
E               : E ADDSUB T                            {
                                                            $$ = makeNode(E);
                                                            Node *f = makeNode(addsub);
                                                            addSibling($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                | T                                     {
                                                            $$ = makeNode(E);
                                                            addChild($$, $1);
                                                        }
                ;    
T               : T DIVSTAR F                           {
                                                            $$ = makeNode(T);
                                                            Node *f = makeNode(divstar);
                                                            addSibling($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                | F                                     {
                                                            $$ = makeNode(T);
                                                            addChild($$, $1);
                                                        }
                ;
F               : ADDSUB F                              {
                                                            $$ = makeNode(F);
                                                            Node *f = makeNode(addsub);
                                                            addChild($$, f);
                                                            addSibling($$, $2);
                                                        }   
                | '!' F                                 {
                                                            $$ = makeNode(F);
                                                            Node *f = makeNode(different);
                                                            addChild($$, f);
                                                            addSibling($$, $2);
                                                        }
                | '(' Exp ')'                           {
                                                            $$ = makeNode(F);
                                                            Node *f1 = makeNode(opParen);
                                                            Node *f2 = makeNode(clParen);
                                                            addChild($$, f1);
                                                            addChild($$, $2);
                                                            addChild($$, f2);
                                                        }
                | NUM                                   {
                                                            $$ = makeNode(F);
                                                            Node *f = makeNode(num);
                                                            addChild($$, f);
                                                        }
                | CHARACTER                             {
                                                            $$ = makeNode(F);
                                                            Node *f = makeNode(character);
                                                            addChild($$, f);
                                                        }
                | LValue                                {
                                                            $$ = makeNode(F);
                                                            addChild($$, $1);
                                                        }
                | IDENT '(' Arguments  ')'              {
                                                            $$ = makeNode(F);
                                                            Node *f1 = makeNode(ident);
                                                            Node *f2 = makeNode(opParen);
                                                            Node *f3 = makeNode(clParen);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, $3);
                                                            addChild($$, f3);
                                                        }
                ;
LValue          : IDENT                                 {
                                                            $$ = makeNode(lvalue);
                                                            Node *f = makeNode(ident);
                                                            addChild($$, f);
                                                        }
                | IDENT '[' Exp ']'                     {
                                                            $$ = makeNode(lvalue);
                                                            Node *f1 = makeNode(ident);
                                                            Node *f2 = makeNode(opsqbracket);
                                                            Node *f3 = makeNode(clsqbracket);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, $3);
                                                            addChild($$, f3);
                                                        }
                ;
Arguments       : ListExp                               {
                                                            $$ = makeNode(arguments);
                                                            addChild($$, $1);
                                                        }
                |                                       {/*do nothing*/}
                ;                                       
ListExp         : ListExp ',' Exp                       {
                                                            $$ = makeNode(listexp);
                                                            Node *f = makeNode(comma);
                                                            addSibling($$, $1);
                                                            addChild($$, f);
                                                            addChild($$, $3);
                                                        }
                |  Exp                                  {
                                                            $$ = makeNode(listexp);
                                                            addChild($$, $1);
                                                        }
                ;
%%

int main(int argc, char **argv) {
  return yyparse();
}

 void yyerror (char *s) {
   fprintf (stderr, "line %d: %s\n", lineno, s);
 }