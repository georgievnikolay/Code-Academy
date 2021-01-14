//Съберете char (255 + 10).

#include<stdio.h>

int main() {

    unsigned char x = 255;
    x = x + 10;

    printf("%d\n", x); 
    return 0;
}