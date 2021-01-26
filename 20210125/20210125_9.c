#include<stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if(c >= 'A' && c <= 'Z') {
            c = c + 32;
        }
        putchar(c);
    }
    return 0;
}