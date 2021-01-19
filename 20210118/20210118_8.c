//Напишете функция int isLetter(char c), която проверява дали подадения параметър е 
//буква или не е буква от ASCII таблицата. 
//Използвайте я в main(), заедно с функцията getchar().
#include<stdio.h>

int isLetter(char c);

int main() {
    char c = getchar();
    
    printf("Is it the character a letter? %d \n", isLetter(c));
}

int isLetter(char c) {
    int true = 1, false = 0;

    return (c > 64 && c < 91) || (c > 96 && c < 123) ? true : false;
}