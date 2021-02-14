/*Напишете програма за умножение на два тримерни
масива, елемент по елемент*/
#include<stdio.h>

int main(){

    int array1[2][2][3] = {
        { {1, 2, 3}, {4, 5, 6} },
        { {6, 5, 4}, {3, 2, 1} }
    };

    int array2[2][2][3] = {
        { {6, 5, 4}, {3, 2, 1} },
        { {1, 2, 3}, {4, 5, 6} }
    }; 
    int array3[2][2][3];

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                array3[i][j][k] = array1[i][j][k] * array2[i][j][k];
            }
        }
        
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                printf("%d ", array3[i][j][k]);
            }
        }
    }

    return 0;
}