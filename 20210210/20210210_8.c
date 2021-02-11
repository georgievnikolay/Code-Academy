/*Разгледайте и имплементирайте quicksort алгоритъма.*/
#include<stdio.h>

void swap(int *a, int *b);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);

int main(){
    int arr[] = {10, 30, 50, 20, 70, 40, 90, 60};
    quickSort(arr, 0, 7);

    int i;
    for(i = 0; i < 8; i++){
        printf(" %d ", arr[i]);
    }

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int array[], int low, int high){

    int pivot = array[high];
    int i = low - 1;
    int j = low;
    
    for(; j < high; j++){
        if(array[j] < pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }

    swap(&array[i + 1], &array[high]);

    return i + 1;
}

void quickSort(int array[], int low, int high){
    if(low < high){

        int p = partition(array, low, high);

        quickSort(array, low, p - 1);
        quickSort(array, p + 1, high);
    }
}