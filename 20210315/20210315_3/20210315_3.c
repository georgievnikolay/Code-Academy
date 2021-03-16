#include "tree.h"

#define SIZE 13

treeNode *root, *x;

int main() {
    int arr[SIZE] = {81, 65, 64, 61, 42, 35, 28, 18, 14, 13, 12, 7, 4};

    for(int i = 0; i < SIZE; i++) {
        insert(arr[i]);
    }

    x = root;
    preorder(x);

    return 0;
}