//Да се състави програма, която заделя памет за данни от тип: char, int, long, float, double,
//инициализира по време на компилация съответните променливи съответно
//в: a=‘a’, b=102, c=50000, d=6, e=-48.907. Програмата да извежда на екрана съдържанието на заделената за данни
//памет, форматирано в съответствие с типа на отделните елементи данни.
#include<stdio.h>

int main() {
    char a = 'a';
    char b = 107;
    unsigned short int c = 50000;
    char d = 6;
    float e = -48.907;

    printf("%c\n", a);
    printf("%d\n", b);
    printf("%hu\n", c);
    printf("%d\n", d);
    printf("%.3f\n", e);

    return 0;
}

