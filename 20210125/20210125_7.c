#include<stdio.h>
#include<string.h>

int countChars(int c);

int main() {
    int c, i = 0, j = 0;
    char str[200];

    while ((c = getchar()) != EOF) {
        str[i] = c;
        i++;
        if(c == '\n') {
            if(strlen(str) > 80) {
                printf("%s\n", str);
            }
            for(; i > 0; i--) {
                str[i] = '\0';
            }
        }

    }
    return 0;
}
