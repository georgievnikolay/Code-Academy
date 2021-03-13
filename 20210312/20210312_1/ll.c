#include "ll.h"

void init(void) {
    start = NULL;
}

int add(int data) {
    node *p = start;
    start = (node*)malloc(sizeof(node)); 

    if(!start) return -1;
    start->data = data;
    start->next = p;

    return 0; 
}

int dellFirst(int *n) {
    node *p = start;
    if(start) {
        *n = start->data;
        start = start->next;
        free(p);
        return 1;
    } else {
        return 0; /*Списъка е празен*/
    }
}
void printlist(void)
{
    node* p = start;
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}