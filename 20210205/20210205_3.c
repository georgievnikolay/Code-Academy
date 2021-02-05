/*Какво е грешното на този код?*/
#include<stdio.h>

void my_strcpy(char *t, char *s){
    for(; *t; t++, s++)
        *s = *t;
} /*ако стринга върху който записваме е по-дълъг, символите на местата по-големи от размера на първия стринг ще си останат във втория*/

int main() {
    char arr[] = "Nikolay";
    char arrTo[] = "Georgiev";

    my_strcpy(arr, arrTo);

    printf("%s\n", arrTo);

    return 0;
}