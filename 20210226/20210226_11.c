#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node* ptr;

} t_node;

int main()
{
    t_node *begin;
    begin = (t_node*)malloc(sizeof(t_node));

    for(int i = 0; i < 4; i++, begin++){
        begin->data = i;
        printf(" %d", begin->data);
    }

    printf("\nThe size of node is: %d\n", sizeof(t_node));
    free(begin);
    begin = NULL;

    return 0;
}