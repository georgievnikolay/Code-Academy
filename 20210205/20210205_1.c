#include<stdio.h>

void printStr(char *s);

int main() {
    char arr[] = "Nikolay";

    printStr(arr);

    return 0;
}

void printStr(char *s){
    int i;

    for(i = 0; s[i] != '\0'; i++){
        printf("%c", s[i]);
    }

    return;
}