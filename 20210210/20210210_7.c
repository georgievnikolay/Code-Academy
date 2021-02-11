/*Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/
#include<stdio.h>

const int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

int linear_search(const int *a, int n, int key);

int main(){
    printf("%d\n", linear_search(array, 8, 6));

    return 0;
}

int linear_search(const int *a, int n, int key){
    int i;

    for(i = 0; i < n; i++){
        if(*(a + i) == key){
            return i;
        }
    }

    return -1;
}