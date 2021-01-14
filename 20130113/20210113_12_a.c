//Напишете програма PrintPatterns, която отпечата следните текстови графики
//на екрана. Графиките една под друга:
#include<stdio.h>

int main() {
    char sym = '#';

//1st line
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c\n", sym);

//2nd line
    printf(" ");
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf(" \n");

//3rd line
    printf(" ");
    printf(" ");
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf(" ");
    printf(" \n");

//4th line
    printf(" ");
    printf(" ");
    printf(" ");
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf(" ");
    printf(" ");
    printf(" \n");

//5th line
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf("%c", sym);
    printf("%c", sym);
    printf("%c", sym);
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" \n");

//6th line
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf("%c", sym);
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" ");
    printf(" \n");

    return 0;
}