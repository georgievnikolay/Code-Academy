/*Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.*/
#include<stdio.h>

void my_strncat(char *s, char *t, int n);

int main() {
    char arrS[16] = "Nikolay";
    char arrT[] = " Antonov";

    my_strncat(arrS, arrT, 6);
    printf("%s\n", arrS);

    return 0;
}

void my_strncat(char *s, char *t, int n){

    for(; *s != '\0'; s++);

    while(n-- != 0){
        *s = *t;
        s++, t++;
    }
    return;
}