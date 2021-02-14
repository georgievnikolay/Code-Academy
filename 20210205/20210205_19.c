/*Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана.
Вариация: Модифицирайте така, че да извежда резултат от целочислено
деление. (Каква проверка трябва да направите?)*/
#include<stdio.h>

int main(){

    int array1[10] = {1, 5, 8, 12, 17, 5, 3, 6, 13, 19};
    int array2[10] = {3, 7, 1, 7, 19, 0, 15, 2, 5, 13}; 
    int array3[10];

    for(int i = 0; i < 10; i++){
        array3[i] = array1[i] * array2[i];
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", array3[i]);
    }

    for(int i = 0; i < 10; i++){

        if (array2[i] == 0){
            printf("\n %d / %d is undefinied\n", array1[i], array2[i]);
        }
        else{
            array3[i] = array1[i] / array2[i];
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", array3[i]);
    }

    return 0;
}