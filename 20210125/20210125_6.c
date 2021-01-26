#include<stdio.h>

int main() {
    int c, countLetters = 0, countNumbers = 0;

    while ((c = getchar()) != EOF) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ) {
            countLetters++;
        }
        if ( c >= '0' && c <= '9') {
            countNumbers++;
        }
    }

    printf("The number of letters is: %d\n", countLetters);
    printf("The number of numbers is: %d\n", countNumbers);
    
    return 0;
}