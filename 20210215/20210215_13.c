/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length());*/
#include<stdio.h>

int main(){
    char string[] = "Nikolay";
    char *ptr = string;
    int count = 0;

    while (*ptr++ != '\0'){
        count++;
    }

    printf("The lenght of the string is: %d\n", count);

    return 0;
    
}