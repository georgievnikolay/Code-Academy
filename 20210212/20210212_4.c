/*Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/
#include<stdlib.h>
#include<stdio.h>

int main(){
    int *piValue = NULL;
    unsigned uSize;
    int i;

    printf("Enter the number of elements: ");
    scanf("%u", &uSize);

    piValue = (int*)malloc(uSize * sizeof(int));

    for(i = 0; i < uSize; i++){
        printf("Enter element at %d position: ", i);
        scanf("%d", (piValue + i));
    }

    for(i = 0; i < uSize; i++){
        printf("\nThe number at %d position in %p memory cell is: %d \n", i, piValue + i, *(piValue + i));
    }

    free(piValue);
    printf("\nThe memory is freed because now the cell %p has %d value\n", piValue, *piValue);
    piValue = NULL;
    
    return 0;
}