#include "2.h"

int write(int n) {
    node *p = last;
    last = (node*)malloc(sizeof(node));
    if(!last) {
        return 1;
    }
    last->data = n;
    last->next = NULL;

    if(p != NULL) {
        p->next = last;
    }
    if(first == NULL) {
        first = last;
    }

    return 0;
}

int read(int *n) {
    if(first) {
        *n = first->data;
        node *p = first;
        first = first->next;
        free(p);
        return 1;
    }
    else {
        return 0;
    }
}