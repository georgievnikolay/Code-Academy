//Дефинирайте променливи със стойност -127, 255, 6 237 498, 4 294 967 292, -9
//000 000 000 000 775 845.
//Изведете всяка променлива на екрана със printf()
#include<stdio.h>

int main () {
    char number1 = -127;
    printf("%d\n", number1);

    unsigned char number2 = 255;
    printf("%u\n", number2);

    int number3 = 6237498;
    printf("%d\n", number3);

    unsigned int number4 = 4294967292;
    printf("%u\n", number4);

    long long int number5 = -9000000000000775845;
    printf("%lld\n", number5);

    return 0;
}