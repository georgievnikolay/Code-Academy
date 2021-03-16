#include "tree.h"

tree *root, *z;

#define SIZE 11
#define DEL_SIZE 4

int main() {
    int arr[SIZE] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 14, 12};

    for(int i = 0; i < SIZE; i++) {
        insertKey(arr[i], &root);
    }

    z = root;
    printf("ORIGINAL TREE: \n");
    preorder(z);
    printf("\n");

    
    int delarr[DEL_SIZE] = {1, 7, 12, 14};

    for(int i = 0; i < DEL_SIZE; i++) {
        printf("TREE AFTER REMOVING %d\n", delarr[i]);
        delElement(delarr[i], root);
        preorder(z);
        printf("\n");
    }

    return 0;
}