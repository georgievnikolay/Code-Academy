#include<stdio.h>

int main(int argc, char *argv[]){
    int i;

    for(i = 1; i < argc; i++){
        ++argv;
        printf("%s ", *(argv));
    }
    printf("\n");

    return 0;
}