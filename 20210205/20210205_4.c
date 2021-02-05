/*Напишете финкцията int our_strcmp(char *s, char *t), която
сравнява низовете s и t и връща нула 0 ако двата низа са равни. Ако
елемента в който се различават s[i] е по-малък от t[i] връща стойност помалка от нула < 0. Ako s[i] е по-голям от t[i] връща стойност по-голяма от
нула > 0*/
#include<stdio.h>

int our_strcmp(char *s, char *t);

int main() {
    char arr1[] = "Nikolay";
    char arr2[] = "Nikolay";

    printf("The result of the comparison is: %d\n", our_strcmp(arr1, arr2));

    return 0;
}

int our_strcmp(char *s, char *t){
    int i = 0;

    while( (s[i] != '\0') || (t[i] != '\0')){
        if(s[i] < t[i]){
            return -1;
        }
        else if (s[i] > t[i]) {
            return 1;
        }
        
        printf("%c and %c\n", s[i], t[i]);
        i++;
    } 
    
    return 0;
}