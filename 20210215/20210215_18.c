/*Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void backwardStrcpy(char *to, char *from);

int main(){
    char string1[] = "A string to be copied";
    char string2[22];
    char string3[] = "I am very good at string coping";
    char string4[32];

    backwardStrcpy(string2, string3);
    printf("%s\n", string2);
    //backwardStrcpy(string4, string3);
    //printf("%s\n", string4);
}

void backwardStrcpy(char *to, char *from){
    int lenFrom = strlen(from);
    
    from += lenFrom;
    to += lenFrom;
    
    while (lenFrom-- >= 0){
        *to-- = *from--;
    }
}