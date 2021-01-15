//Запишете в четири последователни байтове в паметта със
//стойност 0xAA(10101010) и разпечатайте съдържанието на горните байтове,
//ако типът е: float, signed int, unsigned int
#include<stdio.h>

int main() {
    float x = 0xAA;
    signed int y = 0xAA;
    unsigned int z = 0xAA;
    
    printf("0xAA in type float is: %f\n", x);
    printf("0xAA in type signed int is: %d\n", y);
    printf("0xAA in type unsigned int is: %u\n", z);
    return 0;
}