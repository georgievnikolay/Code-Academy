/*Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива.*/
#include<stdio.h>

int binarySearch(int a[], int n, int x);

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("%d position\n", binarySearch(arr, 8, 5));

    return 0;
}

int binarySearch(int a[], int n, int x) {
    int i;
    
    if(x > a[n/2]){
        for(i = n/2; i < n; i++){
            if(a[i] == x){
                return i;
            }
        }
    }
    else{
        for(i = n/2; i >= 0; i--){
            if(a[i] == x){
                return i;
            }
        }
    }
    return -1;
}
