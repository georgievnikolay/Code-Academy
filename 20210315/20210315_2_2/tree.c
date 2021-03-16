#include "tree.h"

void insertKey(int data, tree **T) {

    if(*T == NULL) {
        *T = (tree*)malloc(sizeof(tree));
        (*T)->data = data;
        (*T)->left = NULL;
        (*T)->right = NULL;
    } else if(data > (*T)->data) {
        insertKey(data, &(*T)->right);
    } else {
        insertKey(data, &(*T)->left);
    }
}

void preorder(tree *n){
    if(n){
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}