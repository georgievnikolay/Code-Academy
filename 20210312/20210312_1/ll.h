#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *start;

void init(void);
int add(int data);
int dellFirst(int *n);
void printlist(void);