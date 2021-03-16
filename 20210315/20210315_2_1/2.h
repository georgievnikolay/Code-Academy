#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

extern node *first;
extern node *last;

int write(int n);
int read(int *n);