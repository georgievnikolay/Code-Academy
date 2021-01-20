#include<stdio.h>

int main() {
    char c;
    int i, br, total = 0;
    br = 0; // number of numbers

    while ((c = getchar()) != EOF) {
        total++;
        if (c < '0' || c > '9') 
            continue;
        br++;
    }
    printf("symbols total is %d\n", total);
    printf("Number of digits =%d\n", br);
    return 0;
}