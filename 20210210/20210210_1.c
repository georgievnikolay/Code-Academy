/*Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.*/
#include<stdio.h>

int main(){

    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int i, sum = 0;
    int *p = arr;

    for(i = 0; i < 10; i++){
        if(i % 2 != 0){
            sum += *p;
        }
        p++;
    }

    printf("%d\n", sum);

    return 0;
}
