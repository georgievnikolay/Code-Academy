//Условен оператор (?:)
#include<stdio.h>

int main() {
    int nA = 1;
    int nB = ( nA == 1 ? 2 : 0); //сравнява число

    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    return 0;

}