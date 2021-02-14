/*Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана.*/

#include<stdio.h>

int main(){

    int array1[3] = {1, 2, 3};
    int array2[3] = {3, 2, 1}; 
    int array3[3];

    for(int i = 0; i < 3; i++){
        array3[i] = array1[i] * array2[i];
    }

    for(int i = 0; i < 3; i++){
        printf("%d ", array3[i]);
    }

    return 0;
}