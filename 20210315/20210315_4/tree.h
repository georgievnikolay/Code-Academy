#include <stdlib.h>
#include <stdio.h>

typedef struct tree {
    int data;
    struct tree *left;
    struct tree *right;
} tree;

extern tree* root;

void insertKey(int data, tree **T);
void preorder(tree *n);
tree *delElement(int x,tree *T);