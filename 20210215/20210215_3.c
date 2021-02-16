/*Дефинирайте и инициализирайте три пойнтера, тип int, тип
float, тип char.*/
#include<stdio.h>

int main(){
    int a = 10;
    float b = 3.14;
    char c = 'N';

    int *pA = &a;
    float *pB = &b;
    char *pC = &c;

    printf("The value of a is: %d\t The address of a is: %p\n", *pA, pA);
    printf("The value of b is: %.2f\t The address of a is: %p\n", *pB, pB);
    printf("The value of b is: %c\t The address of a is: %p\n", *pC, pC);

    return 0;
}
