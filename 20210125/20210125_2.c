#include<stdio.h>

int main() {
    int c, counter = 0;
    c = getchar();

    while (c != EOF) {
        c = getchar();

        if (c == '\n') {
            counter = counter + 1;
        }

    }
    printf("%d\n", counter);
    return 0;
}