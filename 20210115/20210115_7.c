//Запишете в осем последователни байтове в паметта
//със стойност 0xBB(1011 1011) и разпечатайте съдържанието на
//горните байтове, ако типът е: double, signed long long, unsigned
long long
#include<stdio.h>

int main() {
    double x = 0xBB;
    signed long long y = 0xBB;
    unsigned long long z = 0xBB;
    
    printf("0xAA in type double is: %f\n", x);
    printf("0xAA in type signed long long is: %lld\n", y);
    printf("0xAA in type unsigned long long is: %llu\n", z);
    return 0;
}