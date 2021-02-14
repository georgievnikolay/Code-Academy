/*Даден е едномерен масив с N елемента (вие изберете
стойност на N),напишете функция, която изчислява средната стойност на
елементите в масива, като я връща като double float.*/
#include<stdio.h>

double arrayAvg(int arr[], int n);

int main() {
    int n;
    printf("Enter an integer number for the size of the array: ");
    scanf("%d", &n);

    int arr[n], i;
    
    for(i = 0; i < n; i++){
        printf("\nEnter element at arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("The average in the array is: %.2f\n", arrayAvg(arr, n));

    return 0;
}

double arrayAvg(int arr[], int n){
    double average = 0.0;
    int i;

    for(i = 0; i < n; i++){
        average += arr[i] / (double)n;
    }

    return average;
}

