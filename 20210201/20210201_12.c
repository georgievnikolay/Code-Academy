/*напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/
#include<stdio.h>

int any(char s1[], char s2[]);

int main() {
    char s1[] = "copy";
    char s2[] = "paste";

    printf("The position is: %d\n", any(s1, s2));

    return 0;
}

int any(char s1[], char s2[]){
    int i = 0, j = 0;

    while(s2[i] != '\0') {
        while (s1[j] != '\0') {
            if(s2[i] == s1[j]) {
                return j;
            }
            else {
                j++;
            }
        }
        i++;
    }
}