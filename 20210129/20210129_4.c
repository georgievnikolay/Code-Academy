/*Напишете функция, която връща резултат a*2 + b*c.*/
#include<stdio.h>

float mathFunction();

int main() {
    printf("the result of the function is: %.2f\n", mathFunction());

    return 0;
}

float mathFunction() {
    float a = 3.0, b = 4.0, c = 5.0;
    return a * 2 + b * c;
}