#include<stdio.h>

int main() {
    char c;
    int counter = 0;
    int counter1 = 0;
    int counter2 = 0;

    while ( (c = getchar() ) != EOF) {
        if(c == '\n') {
            counter++;
        }
        else if (c == ' ') {
            counter1++;
        }
        else if (c == '\t') {
            counter2++;
        }
    }

    printf("The number of new lines are %d\n", counter);
    printf("The number of spaces are %d\n", counter1);
    printf("The number of tabs is %d\n", counter2);

    return 0;
}