/*Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include<stdio.h>

int main() {
    int arr[5][5];
    int i, j;

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            printf("\nEnter element in arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    return 0;
}