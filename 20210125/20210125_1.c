#include<stdio.h>

int main() {
    int c, counter = 0;
    c = getchar();

    while(c != EOF) {
        c = getchar();
        counter++;

    }
    printf("%d\n", counter);
    
    return 0;
}