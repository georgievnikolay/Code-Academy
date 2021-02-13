/* Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/
#include<stdio.h>
#include<stdlib.h>

int g_Indx;

void dynamicArr(int *ptr, int newSize);

int main(){
    int *piValue = NULL;
    unsigned uSize;
    char choice = 'y';

    printf("Enter size: ");
    scanf("%u", &uSize);

    piValue = (int*)malloc(uSize * sizeof(int));
    printf("The address of the allocated memory is: %p\n", piValue);
    if(NULL == piValue){
        printf("Allocation memory error!\n");
        exit(1);
    }

    for(g_Indx = 0; g_Indx < uSize; g_Indx++){
        printf("Enter element at %d position: ", g_Indx);
        scanf("%d", (piValue + g_Indx));
    }

    while(choice == 'y'){

        printf("The memory of the array is full do you want ot enter more elements y/n? ");
        scanf(" %c", &choice);
        
        if(choice != 'y'){
            break;
        }
        else {
            uSize *= 2;
            dynamicArr(piValue, uSize);
        }
    }

    for(g_Indx = 0; g_Indx < uSize; g_Indx++){
        printf("The number at %d position in %p memory cell is: %d \n", g_Indx, piValue + g_Indx, *(piValue + g_Indx));
    }

    free(piValue);
    piValue = NULL;
    return 0;
}

void dynamicArr(int *ptr, int newSize){
    ptr = (int*)realloc(ptr, newSize * sizeof(int));
            
    if(NULL == ptr){
        printf("Reallocation memory error!\n");
        exit(2);
    }
    else {
        printf("The address of the allocated memory is: %p\n", ptr);
        for(; g_Indx < newSize; g_Indx++){
            printf("Enter element at %d position: ", g_Indx);
            scanf("%d", (ptr + g_Indx));
        }    
    }
}
