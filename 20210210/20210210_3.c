/*Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/
#include<stdio.h>

int main() {
    char str[16];
    int c, i = 0, flag = 0;
    char *p = str;
    
    while((c = getchar()) != '\n'){
        *p = c;
        p++;
    }

    while(*p-- != str[0]){
        if(*p != str[i]){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("It's a palindome\n");
    }
    else{
        printf("It's not a palindrome\n");
    }

    return 0;
}