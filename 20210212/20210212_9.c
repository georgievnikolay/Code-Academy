/*Разширяване на заделена памет с realloc
Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.*/
#include<stdio.h>
#include<stdlib.h>

void newSize(int *array, unsigned currSize);

int main(){
    int *piValue = NULL;
    unsigned uSize, uNewSize;
    int i;

    printf("Enter number of elements: ");
    scanf("%u", &uSize);

    piValue = (int*)malloc(uSize * sizeof(int));

    for(i = 0; i < uSize; i++){
        printf("Enter element at %d position: ", i);
        scanf("%d", (piValue + i));
    }

    printf("The elements in the array are:\n");
    for(i = 0; i < uSize; i++){
        printf("%d ", *(piValue + i));
    }

    newSize(piValue, uSize);

    free(piValue);
    return 0;
}

void newSize(int *array, unsigned currSize){
    unsigned uNewSize;

    printf("\nEnter new size: ");
    scanf("%u", &uNewSize);

    array = (int*)realloc(array, uNewSize * sizeof(int));
    if(NULL == array){
        printf("Reallocation memory error!\n");
        exit(2);
    }

    for(; currSize < uNewSize; currSize++){
        printf("Enter element at %d position: ", currSize);
        scanf("%d", (array + currSize));
    }

    int i;
    printf("The elements of the array are:\n");
    for(i = 0; i < uNewSize; i++){
        printf("%d ", *(array + i));
    }
}