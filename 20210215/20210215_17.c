/*Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.*/
#include<string.h>
#include<stdio.h>
#include<stdlib.h>

void backwardStrcpy(char *to, char *from);

int main(){
    char string1[] = "A string to be copied";
    char string2[22] =  " ";
    char string3[] = "I am very good at string coping";
    char string4[32] = " ";

    memset(string2, '0', 21);
    printf("%s\n", string2);
    
    backwardStrcpy(string2, string1);
    printf("%s\n", string2);
    
    memset(string4, '0', 31);
    printf("%s\n", string4);
    
    backwardStrcpy(string4, string3);
    printf("%s\n", string4);
}

void backwardStrcpy(char *to, char *from){
    int lenFrom = strlen(from);
    
    from += lenFrom;
    to += lenFrom;
    
    while (lenFrom-- >= 0){
        *to-- = *from--;
    }
}