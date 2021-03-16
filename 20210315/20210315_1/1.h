#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} node;

extern node *head;

void addHead(int a);
int pop(int *n);