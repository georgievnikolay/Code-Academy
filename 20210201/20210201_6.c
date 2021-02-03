/*Напишете функция, която изчислява произведението на
числата от 1 до 30.*/
#include<stdio.h>

long int multiply1To30();

int main() {
    printf("The sum is: %ld\n", multiply1To30());

    return 0;
}

long int multiply1To30() {
    int x = 1; 
    long int rez = 1;

    while (x <= 30) {
        rez *=  x;
        x++;
    }
    
    return rez;
}