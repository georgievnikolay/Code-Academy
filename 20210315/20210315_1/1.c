#include "1.h"

node *head;

void addHead(int a) {
    node *new = head;
    head = (node*)malloc(sizeof(node));
    if(!head) {
        exit(1);
    }
    head->data = a;
    head->next = new;
}

int pop(int *n) {
    if(head) {
        *n = head->data;
        node *p = head;
        head = head->next;
        free(p);
        return 1;
    }

    return 0;
}