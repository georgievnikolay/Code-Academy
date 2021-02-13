/*Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/
#include<stdlib.h>
#include<stdio.h>
#include<alloca.h>

int main(){
    int *piValue = NULL;
    unsigned uSize;
    int i;

    printf("Enter the number of elements: ");
    scanf("%u", &uSize);

    piValue = (int*)alloca(uSize * sizeof(int));
    if(NULL == piValue){
        printf("Allocation memory error!\n");
        exit(1);
    }

    for(i = 0; i < uSize; i++){
        printf("Enter element at %d position: ", i);
        scanf("%d", (piValue + i));
    }

    for(i = 0; i < uSize; i++){
        printf("The value of element in %d position is: %d\n", i, *(piValue + i));
    }

    return 0;
}