/*Дефинирайте и инициализирайте едномерен масив с 5
елемента. Следкато сте готови, направете въвеждане на данните в масива,
като четете от потребителя със scanf.*/
#include<stdio.h>

int main(){
    int arr[5], i;

    for(i = 0; i < 5; i++){
        printf("\nEnter element in arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    return 0;
}