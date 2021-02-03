/*Напишете функцията int linSearch(int a[], int l, int d),
която получава като първи аргумент началото на масив а, втория
аргумент е дължината на масива, а третия аргумент е числото,
което търсим. Претърсете масива елемент по елемент и ако
някой елемент съвпада с търсеното число върнете позицията на
която се намира този елемент. В противен случай върнете – 1.*/
#include<stdio.h>

int linSearch(int a[], int l, int d);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 8, 9, 0};
    
    linSearch(arr, 9, 5);

    return 0;
}

int linSearch(int a[], int l, int d){
    int i, flag = 1;

    for(i = 0; i < l; i++){
        if(a[i] == d){
            flag = 0;
            printf("The element %d is found on %d position\n", d, i);
        }
    }

    if (flag == 1){
        return -1;
    }
    else {
        return 0;
    }
}