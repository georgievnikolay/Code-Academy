/*Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край*/
#include<stdio.h>

int printArr(int a[], int l);

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    printArr(arr, 5);

    return 0;
}

int printArr(int a[], int l) {
    int i;

    for(i = 0; i < l; i++){
        printf("%d\n", a[i]);
    }

    return 0;
}