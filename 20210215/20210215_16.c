/*Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема.*/
#include<stdio.h>
#include<string.h>

int main(){
    char string1[] = "A string to be copied";
    char string2[22] = " ";
    char string3[] = "I am very good at string coping";
    char string4[32] = " ";

    strcpy(string2, string1);
    printf("%s\n", string2);
    strcpy(string4, string3);
    printf("%s\n", string4);

    strcpy(string4, string1);
    printf("%s\n", string4);

    return 0;
}