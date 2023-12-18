/* tree.h */
#ifndef TREE_H
#define TREE_H

#define FOREACH_LABEL(LABEL) \
        LABEL(declfonct) \
        LABEL(Else) \
        LABEL(While) \
        LABEL(instr) \
        LABEL(F) \
        LABEL(Instructions) \
        LABEL(Instruction) \
        LABEL(lvalue) \
        LABEL(Parametres) \
        LABEL(declfoncts) \
        LABEL(TB) \
        LABEL(And) \
        LABEL(declarateurs) \
        LABEL(Program) \
        LABEL(E) \
        LABEL(exp) \
        LABEL(Body) \
        LABEL(listtypvar) \
        LABEL(num) \
        LABEL(DivStar) \
        LABEL(Character) \
        LABEL(M) \
        LABEL(Void) \
        LABEL(Order) \
        LABEL(T) \
        LABEL(Or) \
        LABEL(AddSub) \
        LABEL(If) \
        LABEL(ListExp) \
        LABEL(FB) \
        LABEL(comma) \
        LABEL(Declaration) \
        LABEL(Declarations) \
        LABEL(Functions) \
        LABEL(Function) \
        LABEL(Eq) \
        LABEL(Header) \
        LABEL(Type) \
        LABEL(Return) \
        LABEL(not) \
        LABEL(Ident) \
        LABEL(Arguments) \
        LABEL(Assign) \
        LABEL(Not) \

#define GENERATE_ENUM(ENUM) ENUM,
#define GENERATE_STRING(STRING) #STRING,

typedef enum {
  FOREACH_LABEL(GENERATE_ENUM)
} label_t;

typedef struct Node {
  label_t label;
  char value[64];
  struct Node *firstChild, *nextSibling;
  int lineno;
} Node;

Node *makeNode(label_t label, char *str);
void addSibling(Node *node, Node *sibling);
void addChild(Node *parent, Node *child);
void deleteTree(Node*node);
void printTree(Node *node);

#define FIRSTCHILD(node) node->firstChild
#define SECONDCHILD(node) node->firstChild->nextSibling
#define THIRDCHILD(node) node->firstChild->nextSibling->nextSibling

#endif