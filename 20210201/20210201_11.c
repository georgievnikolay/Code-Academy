/*напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include<stdio.h>
#include<string.h>

void squeeze(char s[], int c);

int main() {
    char str[] = "abcdefg";

    squeeze(str, 'c');

    printf("%s", str);

    return 0;
}

void squeeze(char s[], int c) {
    int sym, i = 0, j;

    while(s[i] != '\0') {
        if(s[i] == c) {
            j = i;
            for (; j < strlen(s) - 1; j++) {
                s[j] = s[j + 1];
            }
            s[strlen(s) - 1] = '\0';
            i++;
        }
        else {
            i++;
        }
    }

    return;
}