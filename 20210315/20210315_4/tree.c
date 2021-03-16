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

void preorder(tree *n)
{
    if (n)
    {
        printf("%d\t", n->data);
        preorder(n->left);
        preorder(n->right);
    }
}

tree *delElement(int x,tree *T){ 

    if (T == NULL)
        return T;
    if (x < T->data)
        T->left = delElement(x,T->left);

    else if (x > T->data)
    {
        T->right = delElement(x,T->right);
    }
    else
    {
        if (T->left == NULL)
        {
            tree *temp = T->right;
            free(T);
            return temp;
        }
        else if (T->right == NULL)
        {
           tree *temp = T->left;
            free(T);
            return temp;
        }
    }
    return T;
}