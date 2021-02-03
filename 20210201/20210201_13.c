/*напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/
#include<stdio.h>

void lower(char s[]);

int main() {
    char str[] = "NikolaY";
    lower(str);

    printf("%s\n", str);

    return 0;
}

void lower(char s[]){
    int i = 0;
    while(s[i] != '\0') {
        if(s[i] > 'A' && s[i] < 'Z') {
            s[i] = s[i] + 32;
        }
        i++;
    }
    return;
}