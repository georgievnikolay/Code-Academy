/*Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/
#include<stdlib.h>
#include<stdio.h>


int main(){
    char *buffer = NULL;
    unsigned uSize = 2, initialSize = 2, uIndx = 0;
    int c;

    while ((c = getchar()) != '\n'){
        if(uSize > 1){
            buffer = (char*)realloc(buffer, uSize*sizeof(char));
            if(NULL == buffer){
                printf("Reallocation error!\n");
                exit(1);
            }    
            *(buffer + uIndx) = putchar(c);
            uSize++;
        }
        else {
            *(buffer + uIndx) = putchar(c);
        }
        uIndx++;
    }
    printf("\n");
    for(uIndx = 0; uIndx < uSize - initialSize; uIndx++){
        printf("%c", *(buffer + uIndx));
    }

    free(buffer);
    buffer = NULL;

    return 0;
}

/*Когато условието на цикъла ми е да приключва при натискане на Enter всичко работи, 
а когато условието е с EOF ми принтира само 1вия елемент. Ще съм благодарен ако ми разясните 
защо се получава така*/
 