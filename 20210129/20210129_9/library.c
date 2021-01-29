#include<stdio.h>

/*f1*/
void reminder(int a, int b) {
    printf("The reminder that remains after %d i divided by %d is: %d\n", a, b, a % b);
    multiply(a, b);

    return;
}

/*f2*/
void multiply(int a, int b) {
    printf("The multiplication of %d and %d is equal to: %d\n", a, b, a * b);
    divide(a,b);
    return;
}

/*f3*/
void divide(int a, int b) {
    printf("The division of %d and %d is equal to: %.2f\n", a, b, (float)a / b);

    return;
}

