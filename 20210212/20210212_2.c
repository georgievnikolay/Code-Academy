#include<stdio.h>
#include<stdlib.h>

int main() {
    int *piValue = NULL;
    unsigned uSize = 0;

    printf("\nEnter size: ");
    scanf("%u", &uSize);

    piValue = (int*)malloc(uSize * sizeof(int));
    
    if(NULL == piValue){
        printf("Allocation memory errof!\n");
        exit(1);
    }

    printf("Address of the allocated memory is: %p\n", piValue);

    printf("Enter the new size: ");
    scanf("%d", &uSize);

    piValue = (int*)realloc(piValue, uSize * sizeof(int));

    if(NULL == piValue){
        printf("Reallocation memory error!\n");
        exit(2);
    }

    printf("The address of the reallocated memory is: %p\n", piValue);
    free(piValue);

    return 0;
}