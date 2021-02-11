/*Пренапишете алгоритъма за сортиране без да използвате
инкрементиращи променливи.*/
#include<stdio.h>

void sort(int *a, int n);

int main(){
    int array[] = {5, 2, 4, 8, 1, 3};

    sort(array, 6);

    int i;
    for(i = 0; i < 6; i++){
        printf(" %d ", array[i]);
    }
    return 0;
}

void sort(int a[], int n){
    int i, j, temp;
    int *b;

    for(i = 0; i < n - 1; i++){
        b = a + 1;
        for(j = i + 1; j < n; j++){
            if(*a > *b){
                temp = *a;
                *a = *b;
                *b = temp;
            }
            b++;
        }
        a++;
    }
    return;
}