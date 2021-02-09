/* Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях.*/
#include<stdio.h>

int highest(int *arr);

int main() {
    int array[5] = {0, 21, 33, 1, 23};

    printf("%d\n", highest(array));

    return 0;
}

int highest(int *arr){
    long long int size_t = sizeof(arr);
    int temp = 0, i;

    for(i = 0; i <= size_t; i++){
        if(temp <= *arr){
            temp = *arr;
        }
        arr++;
    }

    return temp;
}