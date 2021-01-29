/*Напишете прототипите на разгледаните досега функции int
add(int a, int b) и int incr(int c) във файла f.h, a телата на функциите във
файла f.c. и използвайте тези функции във файла m.c, където е разписано
тялото на функцията main() . Компилирайте програмата по показания погоре начин.*/
#include<stdio.h>
#include "f.h"

int main() {
    int a = 1, b = 2;
    int rez;
    rez = add(a,b);
    printf("%d\n", rez);

    rez = incr(rez);
    printf("%d\n", rez);

    return 0;
}