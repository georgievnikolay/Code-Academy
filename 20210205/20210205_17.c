/*Напишете програма за умножение на два двумерни
масиви, елемент по елемент*/
#include<stdio.h>

int main(){

    int array1[2][3] = { {1, 2, 3}, {4, 5, 6} };
    int array2[2][3] = { {6, 5, 4}, {3, 2, 1} }; 
    int array3[2][3];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            array3[i][j] = array1[i][j] * array2[i][j];
        }
        
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", array3[i][j]);
        }
    }

    return 0;
}