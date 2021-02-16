#include<stdio.h>

void my_strcpy(char *t, char *s);

int main(){
    char string1[] = "A string to be copied";
    char string2[22];
    char string3[] = "I am very good at string coping";
    char string4[32];

    my_strcpy(string2, string1);
    printf("%s\n", string2);
    my_strcpy(string4, string3);
    printf("%s\n", string4);

    my_strcpy(string4, string1);
    printf("%s\n", string4);

    /*Опитайте какво ще стане, ако изпишем инкрементирането така:
    *++to= *++from
    Ще пропуснем първия символ от стринга тъй като първо ще инкрементираме и после ще присвоим стойността*/
    return 0;
}
void my_strcpy(char *t, char *s){

    while(*t++ = *s++){
        ;
    }
}