/*Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/
#include<stdio.h>

int main(){
    char string[] = "I am a poor programmer";
    char subStr[] = "great";
    char *p = string;
    char *ps = subStr;

    while(*p++ != '\0'){
        if(*p == 'p'){
            while (*ps){
                *p = *ps;
                p++, ps++;
            }
            break;
        }
    }

    printf("%s\n", string);

    return 0;
}