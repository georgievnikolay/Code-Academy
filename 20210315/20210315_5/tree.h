#include <stdio.h>
#include <stdlib.h>

typedef struct tree {
    int data;
    struct tree *left;
    struct tree *right; 
} tree;

extern tree *root;

void insertKey(int data, tree **T);
tree *search_rec(tree *t, int n);