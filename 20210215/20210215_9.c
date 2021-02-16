#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a;
    printf("The address of a: %p\tThe value of a: %d\n", p, *p);

    int **p2 = &p;
    printf("The address of p: %p\tThe value of p: %d\n", p2, **p2);

    **p2 = 5;
    printf("After assigning the value 5 through the second pointer the value of a is now: %d\n", a);

    return 0;
}