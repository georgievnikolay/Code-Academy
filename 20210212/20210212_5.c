/*5 Разширяване на заделена памет с realloc*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *piValue = NULL;
    unsigned uSize, uMoreElem;
    unsigned uIdx;

    printf("Enter the number of elements: ");
    scanf("%u", &uSize);

    piValue = (int*)malloc(uSize * sizeof(int));
    if(NULL == piValue){
        printf("Allocation memory error!\n");
        exit(1);
    }

    for(uIdx = 0; uIdx < uSize; uIdx++){
        printf("Enter the %d element:", uIdx);
        scanf("%d", (piValue + uIdx));
    }

    printf("The array is full\n Type how many more elements you want to add: ");
    scanf("%u", &uMoreElem);

    piValue = (int*)realloc(piValue, uSize + uMoreElem);
    if(NULL == piValue){
        printf("Reallocation memory error!\n");
        exit(2);
    }

    for(; uIdx < uSize + uMoreElem; uIdx++){
        printf("Enter the %d element:", uIdx);
        scanf("%d", (piValue + uIdx));
    }

    for(uIdx = 0; uIdx < uSize + uMoreElem; uIdx++){
        printf("\nThe element at the %u position in %p memory cell is: %d\n", uIdx, piValue + uIdx, *(piValue + uIdx));
    }
    free(piValue);
    piValue = NULL;

    return 0;
}
