/*Напишете функция, която връща резултат (а+в)*4*/
#include<stdio.h>

float mathFunction();

int main() {

    printf("The result of the function is: %.2f\n", mathFunction());

    return 0;
}

float mathFunction() {
    float a = 4.0, b = 3.0;
    return (a + b) * 4;
}