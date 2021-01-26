#include<stdio.h>

int main() {
    int c, count = 0;

    while ( (c = getchar()) != EOF) {
        
        if(c == ' ' ) {
            count++;
            if ( (c == ' ') && (count > 1) ) {
                continue;
            }
        }
        else {
            count = 0;
        }
        putchar(c);
    }
    return 0;
}