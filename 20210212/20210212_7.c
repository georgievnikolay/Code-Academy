/*Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/
#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array = NULL;
    unsigned arrSize, i;

    printf("Enter the number of elements: ");
    scanf("%u", &arrSize);

    array = (int*)calloc(arrSize, sizeof(int));
    
    if(NULL == array){
        printf("Allocaton memory error!\n");
        exit(1);
    }

    for(i = 0; i < arrSize; i++){
        printf("%d ", *(array + i));
    }

    free(array);

    return 0;
}
