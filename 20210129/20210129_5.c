/*Напишете програма на С, която чрез функция проверява
дали дадено число е четно или не.*/
#include<stdio.h>

int isEven(int number);

int main() {
    int n;
    printf("Enter a number to see if it's even or not: ");
    scanf("%d", &n);

    if(isEven(n) == 0) {
        printf("The number is even\n");
    }
    else {
        printf("The number is odd\n");
    }
}

int isEven(int number) {
    int flag = 0;

    if (number % 2 != 0) {
        flag = 1;
    }

    return flag;
}