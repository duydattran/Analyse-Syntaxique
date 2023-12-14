/* tree.h */
#ifndef TREE_H
#define TREE_H

#define FOREACH_LABEL(LABEL) \
        LABEL(declfonct) \
        LABEL(Else) \
        LABEL(While) \
        LABEL(instr) \
        LABEL(F) \
        LABEL(opParen) \
        LABEL(suiteinstr) \
        LABEL(lvalue) \
        LABEL(parametres) \
        LABEL(declfoncts) \
        LABEL(TB) \
        LABEL(and) \
        LABEL(declarateurs) \
        LABEL(prog) \
        LABEL(clParen) \
        LABEL(E) \
        LABEL(exp) \
        LABEL(semicolon) \
        LABEL(corps) \
        LABEL(listtypvar) \
        LABEL(num) \
        LABEL(divstar) \
        LABEL(character) \
        LABEL(M) \
        LABEL(Void) \
        LABEL(order) \
        LABEL(T) \
        LABEL(or) \
        LABEL(addsub) \
        LABEL(clbracket) \
        LABEL(If) \
        LABEL(listexp) \
        LABEL(clsqbracket) \
        LABEL(opsqbracket) \
        LABEL(opbracket) \
        LABEL(FB) \
        LABEL(comma) \
        LABEL(declvars) \
        LABEL(Eq) \
        LABEL(entetefonct) \
        LABEL(type) \
        LABEL(Return) \
        LABEL(not) \
        LABEL(ident) \
        LABEL(arguments) \
        LABEL(equal) \
        LABEL(different) \

#define GENERATE_ENUM(ENUM) ENUM,
#define GENERATE_STRING(STRING) #STRING,

typedef enum {
  FOREACH_LABEL(GENERATE_ENUM)
} label_t;

typedef struct Node {
  label_t label;
  struct Node *firstChild, *nextSibling;
  int lineno;
} Node;

Node *makeNode(label_t label);
void addSibling(Node *node, Node *sibling);
void addChild(Node *parent, Node *child);
void deleteTree(Node*node);
void printTree(Node *node);

#define FIRSTCHILD(node) node->firstChild
#define SECONDCHILD(node) node->firstChild->nextSibling
#define THIRDCHILD(node) node->firstChild->nextSibling->nextSibling

#endif