/* Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.*/
#include<stdio.h>

void our_strcat(char *s, char *t);

int main(){
    char arrTo[16] = "Nikolay";
    char arr[] = " Antonov";

    our_strcat(arrTo, arr);

    printf("%s\n", arrTo);

    return 0; 
}

void our_strcat(char *s, char *t){

    for(;*s != '\0';s++);

    while(*t != '\0'){
        *s = *t;
        s++, t++;
    }

    return;
}