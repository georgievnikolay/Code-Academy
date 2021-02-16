/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int array[10][10][10];
    int *p = (int*)array;
    srand(time(0));
    float avg = 0.0;

    int i, sum = 0;
    for(i = 0; i < 1000; i++){
        p[i] = rand() % 10 + 1;
        avg += p[i] / 1000.0;
        sum += p[i];
    }
    printf("The sum of all elements in the array is: %d\n", sum);
    printf("The average of the emelents is: %.2f\n", avg);

    return 0;
}