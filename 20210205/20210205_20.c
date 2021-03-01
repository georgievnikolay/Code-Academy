/*Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак.*/
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
    int sum1 = 0, sum2 = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            for(int k = 0; k < 3; k++){
                sum1 += array1[i][j][k];
                sum2 += array2[i][j][k];
            }
        }
        
    }

    if(sum1 == sum2){
        printf("Array1 and array2 have equal sums\n");
    }
    else{
        printf("Array1 and array2 do NOT have equal sums\n");
    }

    return 0;
}