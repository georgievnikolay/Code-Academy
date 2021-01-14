//Използвайте функцията sizeof(),за да проверите размера
//на типа на вашата машина. Типове за проверка- integer, float,
//short int, unsigned long int
#include<stdio.h>

int main () {

    int intType;
    float floatType;
    short int shortIntType;
    unsigned long int uLongIntType;
    
    printf("the size of int is %zu bytes\n", sizeof(intType));
    printf("the size of float is %zu bytes\n", sizeof(floatType));
    printf("the size of short int is %zu bytes\n", sizeof(shortIntType));
    printf("the size of unsigned long int is %zu bytes\n", sizeof(uLongIntType));

    return 0;
}