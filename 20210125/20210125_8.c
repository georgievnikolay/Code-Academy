#include<stdio.h>

int main() {
    int c, count = 0;

    while ( (c = getchar()) != EOF) {
        if( (c == ' ') || (c == '\t') ){
            continue;
        }
        else {
            putchar(c);
        }
    }
    return 0;
}