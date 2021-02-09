/*Напишете програма, която генерира “случайна разходка” из
елементите на двумерен масив от тип char с размер 10 х 10. Преди разходката
всички елементи на масива съдържат символа ‘.’ и след като елемента е
посетен в него се записва поредната буква от латинската азбука т.е. на първия
посетен елемент се записва буквата ‘А’, а нз последния буквата ‘Z’. Програмата
трябва да се разхожда от елемент на елемент в следната последователност:
от елемента, на който е в момента може да се премести един елемент на горе,
на долу, на ляво или на дясно. Не може да се премества на произволна
позиция. Преди всяко преместване проверете дали няма да излезете извън
масива и дали позицията вече не е заета от някоя буква т.е. елемента да е
посетен вече. Ако горните условия са изпълнени се преместете в желатана
посока. Ако всичките 4 дестинации са блокирани вашата програм трябва да
спре.
Подсказка: Използвайте функциите srand() и rand() за да генерирате случайните числа. Използвайте int n = rand() % 4; за да генерирате числа от 1 до 4*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main() {
    char array[10][10];
    int i, j, letterCount = 0;
    int destination, flag = 1, upFlag = 0, downFlag = 0, leftFlag = 0, rightFlag = 0;
    bool cont = true;

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            array[i][j] = '.';
        }
    }

    i = 0, j = 0;
    for(; letterCount < 26; letterCount++){
        upFlag = 0, downFlag = 0, leftFlag = 0, rightFlag = 0;

        while (cont){
            destination = rand() % 4;
           
            if(destination == 0){ /*Up*/
                i -= 1;
                if(i < 0 || (array[i][j] >= 'A' && array[i][j] <= 'Z') || upFlag == 0){
                    i += 1;
                    upFlag = 1;
                    continue;
                }
                else{
                    array[i][j] = 'A' + letterCount;
                    break;
                }
            }
            else if(destination == 1){ /*Down*/
                i += 1;
                if(i > 9 || (array[i][j] >= 'A' && array[i][j] <= 'Z') || downFlag == 0){
                    i -= 1;
                    downFlag = 1;
                    continue;
                }
                else{
                    array[i][j] = 'A' + letterCount;
                    break;
                }
            }
            else if(destination == 2){ /*Left*/
                j -= 1;
                if(j < 0 || (array[i][j] >= 'A' && array[i][j] <= 'Z') || leftFlag == 0){
                    j += 1;
                    leftFlag = 1;
                    continue;
                }
                else{
                    array[i][j] = 'A' + letterCount;
                    break;
                }
            }
            else { /*Right*/
                j += 1;
                if(j > 9 || (array[i][j] >= 'A' && array[i][j] <= 'Z') || rightFlag == 0){
                    j -= 1;
                    rightFlag = 1;
                    continue;
                }
                else{
                    array[i][j] = 'A' + letterCount;
                    break;
                }
            }

            if (upFlag == 1 && downFlag == 1 && leftFlag == 1 && rightFlag == 1){
                cont = false;
            }
        }
        if (!cont){
            break;
        }
    }

    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            printf("%c", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}