/*Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“*/
#include<stdio.h>

int main(){
    char string[] = "Baba, kaka, mama";
    char *p = string;

    while (*p++ != '\0'){
        if(*p == 'a'){
            *p = 'o';
        }
    }

    printf("%s\n", string);
    
    return 0;
}