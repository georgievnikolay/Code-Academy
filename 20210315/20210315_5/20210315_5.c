#include "tree.h"

#define SIZE 11

tree *root = NULL;

int main() {
    int arr[SIZE] = {6, 5, 3, 1, 10, 8, 7, 13, 11, 12, 14};

    for(int i = 0; i < SIZE; i++) {
        insertKey(arr[i], &root);
    }

    tree *n = search_rec(root, 11);
    printf("%d\n", n->data);

    return 0;
}