/*Задача 8. Напишете макрос, който свързва два идентификатора в
един общ (конкатениране на идентификатори).*/
#include<stdio.h>

#define MY_CONCAT(x, y) x##y

int main()
{
    /*Concatenates print+f so we get the printf function with the string inside*/
    MY_CONCAT(print,f)("\nThis is test\n");

    return 0;
}