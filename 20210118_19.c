//Докажете опитно теоремите на Де Морган: 
#include<stdio.h>

int main() {
    int A, B;

    A = 0;
    B = 0;
    printf("When A= %d, B= %d the result of the first solution is: %d\n", A, B, !( A && B ) == ! A || ! B ? 1 : 0);
    printf("When A= %d, B= %d the result of the second solution is: %d\n", A, B, !( A || B ) == ! A && ! B ? 1 : 0 );

    A = 1;
    B = 0;
    printf("When A= %d, B= %d the result of the first solution is: %d\n", A, B, !( A && B ) == ! A || ! B ? 1 : 0);
    printf("When A= %d, B= %d the result of the second solution is: %d\n", A, B, !( A || B ) == ! A && ! B ? 1 : 0 );

    A = 0;
    B = 1;
    printf("When A= %d, B= %d the result of the first solution is: %d\n", A, B, !( A && B ) == ! A || ! B ? 1 : 0);
    printf("When A= %d, B= %d the result of the second solution is: %d\n", A, B, !( A || B ) == ! A && ! B ? 1 : 0 );

    A = 1;
    B = 1;
    printf("When A= %d, B= %d the result of the first solution is: %d\n", A, B, !( A && B ) == ! A || ! B ? 1 : 0);
    printf("When A= %d, B= %d the result of the second solution is: %d\n", A, B, !( A || B ) == ! A && ! B ? 1 : 0 );
}