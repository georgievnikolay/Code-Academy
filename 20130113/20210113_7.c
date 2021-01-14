//Дефинирайте променливи със стойност 24 212, -1 357 674, 1 357 674, -1 357
//674 000, 3 657 895 000.
//Изведете всяка променлива на екрана със printf()
#include<stdio.h>

int main() {
    short int number1 = 24212;
    printf("%hd\n", number1);

    int number2 = -1357674;
    printf("%d\n", number2);

    int number3 = 1357674;
    printf("%d\n", number3);

    long int number4 = -1357674000;
    printf("%ld\n", number4);

    unsigned long int number5 = 3657895000;
    printf("%lu\n", number5);

    return 0;
}