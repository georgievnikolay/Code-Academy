/*Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .*/
#include<stdio.h>

void my_strncpy(char *s, char *t, int n);

int main() {
    char arrS[10] = "\0";
    char arrT[] = "Nikolay";

    my_strncpy(arrS, arrT, 4);
    printf("%s\n", arrS);

    return 0;
}

void my_strncpy(char *s, char *t, int n){
    while(n-- != 0){
        *s = *t;
        s++, t++;
    }

    return;
}