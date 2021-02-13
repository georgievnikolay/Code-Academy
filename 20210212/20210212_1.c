#include<stdio.h>
#include<stdlib.h>


int main(){
    unsigned uIdx = 0;
    unsigned uNumOfElem = 0;

    int *piValues = NULL;
    int iSum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &uNumOfElem);

    piValues = (int*)malloc(uNumOfElem*sizeof(int));

    for(; uIdx < uNumOfElem; uIdx++){
        printf("Enter element at %d = ", uIdx);
        scanf("%d", (piValues + uIdx));
    }

    for(uIdx = 0; uIdx < uNumOfElem; uIdx++){
        iSum += *(piValues + uIdx);
    }

    printf("The sum of all elements is: %d\n", iSum);

    return 0;
}