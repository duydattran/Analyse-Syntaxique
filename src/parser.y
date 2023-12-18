%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
int yylex();
void yyerror(char *msg);
extern int lineno;
%}
%union {
    char value[64];
    Node *node;
}
%type <node> Prog DeclVars DeclFoncts Declarateurs DeclFonct EnTeteFonct Parametres
%type <node> ListTypVar Corps SuiteInstr Instr LValue Exp Arguments TB FB M E T F ListExp
%token <value> CHARACTER ADDSUB DIVSTAR
%token <value> NUM
%token <value> IDENT
%token <value> TYPE
%token <value> ORDER EQ
%token OR
%token AND
%token VOID
%token IF
%token ELSE
%token WHILE
%token RETURN
%expect 1
%%
Prog            : DeclVars DeclFoncts                   {
                                                            $$ = makeNode(Program, NULL);
                                                            addChild($$, $1);
                                                            addSibling($1, $2);
                                                            printTree($$);
                                                        }
                ;
DeclVars        : DeclVars TYPE Declarateurs ';'        {           
                                                            Node *f = makeNode(Type, $2);
                                                            addChild(f, $3);
                                                            addChild($1, f);
                                                            $$ = $1;
                                                        }
                |                                       {
                                                            $$ = makeNode(Declarations, NULL);
                                                        }
                ;
Declarateurs    : Declarateurs ',' IDENT                {
                                                            Node *f = makeNode(Ident, $3);
                                                            addSibling($1, f);
                                                            $$ = $1;
                                                        }
                | Declarateurs ',' IDENT '[' NUM ']'    {
                                                            Node *f = makeNode(Ident, $3);
                                                            addChild(f, makeNode(num, $5));
                                                            addSibling($1, f);
                                                            $$ = $1;
                                                        }
                | IDENT '[' NUM ']'                     {
                                                            $$ = makeNode(Ident, $1);
                                                            Node *f = makeNode(num, $3);
                                                            addChild($$, f);
                                                        }
                |  IDENT                                {
                                                            $$ = makeNode(Ident, $1);
                                                        }
                ;	
DeclFoncts      : DeclFoncts DeclFonct                  {
                                                            addChild($1, $2);
                                                            $$ = $1;
                                                        }
                | DeclFonct                             {
                                                            $$ = makeNode(Functions, NULL);
                                                            addChild($$, $1);
                                                        }
                ;
DeclFonct       : EnTeteFonct Corps                     {
                                                            $$ = makeNode(Function, NULL);
                                                            addChild($$, $1);
                                                            addSibling($1, $2);
                                                        }
                ;
EnTeteFonct     : TYPE IDENT '(' Parametres ')'         {
                                                            $$ = makeNode(Header, NULL);
                                                            Node *f1 = makeNode(Type, $1);
                                                            Node *f2 = makeNode(Ident, $2);
                                                            addChild($$, f1);
                                                            addSibling(f1, f2);
                                                            addSibling(f1, $4);
                                                        }
                | VOID IDENT '(' Parametres ')'         {
                                                            $$ = makeNode(Header, NULL);
                                                            Node *f1 = makeNode(Void, NULL);
                                                            Node *f2 = makeNode(Ident, $2);
                                                            addChild($$, f1);
                                                            addChild($$, f2);
                                                            addChild($$, $4);
                                                        }
                ;
Parametres      : VOID                                  {
                                                            $$ = makeNode(Parametres, NULL);
                                                            Node *f = makeNode(Void, NULL);
                                                            addChild($$, f);
                                                        }
                | ListTypVar                            {
                                                            $$ = makeNode(Parametres, NULL);
                                                            addChild($$, $1);
                                                        }
                ;
ListTypVar      : ListTypVar ',' TYPE IDENT             {
                                                            $$ = makeNode(Type, $3);
                                                            addChild($$, makeNode(Ident, $4));
                                                            addSibling($$, $1);
                                                        }
                | ListTypVar ',' TYPE IDENT '[' ']'     {
                                                            $$ = makeNode(Type, $3);
                                                            addChild($$, makeNode(Ident, $4));
                                                            addSibling($$, $1);
                                                        }
                | TYPE IDENT                            {
                                                            $$ = makeNode(Type, $1);
                                                            Node *f1 = makeNode(Ident, $2);
                                                            addChild($$, f1);
                                                        }
                | TYPE IDENT '[' ']'                    {
                                                            $$ = makeNode(Type, $1);
                                                            Node *f1 = makeNode(Ident, $2);
                                                            addChild($$, f1);
                                                        }
                ;                                       
Corps           : '{' DeclVars SuiteInstr '}'           {
                                                            $$ = makeNode(Body, NULL);
                                                            addChild($$, $2);
                                                            addChild($$, $3);
                                                        }
                ;
SuiteInstr      : SuiteInstr Instr                      {
                                                            addChild($1, $2);
                                                            $$ = $1;
                                                        }
                |                                       {
                                                            $$ = makeNode(Instructions, NULL);
                                                        }
                ;
Instr           : LValue '=' Exp ';'                    {
                                                            $$ = makeNode(Assign, "=");
                                                            addChild($$, $1);
                                                            addChild($$, $3);
                                                        }
                | IF '(' Exp ')' Instr                  {
                                                            $$ = makeNode(If, NULL);
                                                            addChild($$, $3);
                                                            addSibling($3, $5);
                                                        }
                | IF '(' Exp ')' Instr ELSE Instr       {
                                                            $$ = makeNode(If, NULL);
                                                            Node *f = makeNode(Else, NULL);
                                                            addChild($$, $3);
                                                            addSibling($3, $5);
                                                            addChild(f, $7);
                                                            addSibling($$, f);
                                                        }
                | WHILE '(' Exp ')' Instr               {
                                                            $$ = makeNode(While, NULL);
                                                            addChild($$, $3);
                                                            addSibling($3, $5);
                                                        }
                | IDENT '(' Arguments  ')' ';'          {
                                                            $$ = makeNode(Ident, NULL);
                                                            addChild($$, $3);
                                                        }
                | RETURN Exp ';'                        {
                                                            $$ = makeNode(Return, NULL);
                                                            addChild($$, $2);
                                                        }
                | RETURN ';'                            {
                                                            $$ = makeNode(Return, NULL);
                                                        }
                | '{' SuiteInstr '}'                    {
                                                            $$ = $2;
                                                        }
                | ';'                                   {
                                                            $$ = makeNode(Instruction, NULL);
                                                        }
                ;
Exp             : Exp OR TB                             {
                                                            $$ = makeNode(Or, "||");
                                                            addChild($$, $1);
                                                            addSibling($1, $3);
                                                        }
                | TB                                    {
                                                            $$ = $1;
                                                        }
                ;
TB              : TB AND FB                             {
                                                            $$ = makeNode(And, "&&");
                                                            addChild($$, $1);
                                                            addChild($$, $3);
                                                        }
                | FB                                    {
                                                            $$ = $1;
                                                        }
                ;   
FB              : FB EQ M                               {
                                                            $$ = makeNode(Eq, $2);
                                                            addChild($$, $1);
                                                            addChild($$, $3);
                                                        }
                | M                                     {
                                                            $$ = $1;
                                                        }
                ;
M               : M ORDER E                             {
                                                            $$ = makeNode(Order, $2);
                                                            addChild($$, $1);
                                                            addChild($$, $3);
                                                        }
                | E                                     {
                                                            $$ = $1;
                                                        }
                ;
E               : E ADDSUB T                            {
                                                            $$ = makeNode(AddSub, $2);
                                                            addChild($$, $1);
                                                            addChild($$, $3);
                                                        }
                | T                                     {
                                                            $$ = $1;
                                                        }
                ;    
T               : T DIVSTAR F                           {
                                                            $$ = makeNode(DivStar, $2);
                                                            addChild($$, $1);
                                                            addChild($$, $3);
                                                        }
                | F                                     {
                                                            $$ = $1;
                                                        }
                ;
F               : ADDSUB F                              {
                                                            $$ = makeNode(AddSub, $1);
                                                            addChild($$, $2);
                                                        }   
                | '!' F                                 {
                                                            $$ = makeNode(Not, "!");
                                                            addChild($$, $2);
                                                        }
                | '(' Exp ')'                           {
                                                            $$ = $2;
                                                        }
                | NUM                                   {
                                                            $$ = makeNode(num, $1);
                                                        }
                | CHARACTER                             {
                                                            $$ = makeNode(Character, $1);
                                                        }
                | LValue                                {
                                                            $$ = $1;
                                                        }
                | IDENT '(' Arguments  ')'              {
                                                            $$ = makeNode(Ident, $1);
                                                            addChild($$, $3);
                                                        }
                ;
LValue          : IDENT                                 {
                                                            $$ = makeNode(Ident, $1);
                                                        }
                | IDENT '[' Exp ']'                     {
                                                            $$ = makeNode(Ident, $1);
                                                            addChild($$, $3);
                                                        }
                ;
Arguments       : ListExp                               {
                                                            $$ = $1;
                                                        }
                |                                       {
                                                            $$ = makeNode(Arguments, NULL);
                                                        }
                ;                                       
ListExp         : ListExp ',' Exp                       {
                                                            $$ = makeNode(ListExp, NULL);
                                                            addSibling($3, $1);
                                                            addChild($$, $3);
                                                        }
                |  Exp                                  {
                                                            $$ = $1;
                                                        }
                ;
%%

int main(int argc, char **argv) {
  return yyparse();
}

void yyerror (char *s) {
    fprintf (stderr, "line %d: %s\n", lineno, s);
}