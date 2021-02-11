/*Пренапишете функцията за сумиране елементите на масив
използвайки пойнтер аритметика вместо инкрементиращa променливa i:*/
#include<stdio.h>

const int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

int sum_array(const int *a, int n);

int main(){

    printf("%d\n", sum_array(array, 8));

    return 0;
}

int sum_array(const int *a, int n){
    int sum = 0;

    while(n > 0){
        sum += *a;
        a++, n--;
    }

    return sum;
}