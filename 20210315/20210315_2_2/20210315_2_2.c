#include "tree.h"

tree *root = NULL;

int main() {
    insertKey(15, &root);
    insertKey(22, &root);
    insertKey(2, &root);
    insertKey(6, &root);

    
    preorder(root);

    return 0;
}