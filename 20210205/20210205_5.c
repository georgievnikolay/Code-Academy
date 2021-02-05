/* Напишете функцията void our_strcat(char *s, char *t), която
добавя (конкатенира) стринга t в края на стринга s. С един фор цикъл трябва
да се стигне до края на низа s и след това на всяка следваща трябва да се
копират елементите на низа t. Функцията strcat() предполага, че има
достатъчно в s за да се копират всички стойности на низа t, защото иначе
оператор за присвояване може да работи извън размера на масива и да
имаме грешка. Но не сме разгледали динамичното заделяне на памет с
malloc.*/
#include<stdio.h>

void our_strcat(char *s, char *t);

int main() {
    
    char arrTo[16] = "Nikolay";
    char arr[] = " Antonov";

    our_strcat(arrTo, arr);

    printf("%s\n", arrTo);

    return 0; 
}

void our_strcat(char *s, char *t) {
    int i, j = 0;
    
    for(i = 0; s[i] != '\0'; i++);
    
    while(t[j] != '\0'){
        s[i++] = t[j++];
    }

    return;
}