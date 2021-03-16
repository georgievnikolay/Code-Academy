#include "tree.h"

void insertKey(int data, tree **T)
{

    if (*T == NULL)
    {
        *T = (tree *)malloc(sizeof(tree));
        (*T)->data = data;
        (*T)->left = NULL;
        (*T)->right = NULL;
    }
    else if (data > (*T)->data)
    {
        insertKey(data, &(*T)->right);
    }
    else
    {
        insertKey(data, &(*T)->left);
    }
}

tree *search_rec(tree *t, int n){
    if(t != NULL)
        if(t->data < n)
            t = search_rec(t->right, n);
        else if(t->data > n)
            t = search_rec(t->left, n);
    return t;
}