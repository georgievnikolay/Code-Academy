/*Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/
#include <string.h>
#include <stdio.h>

typedef union
{
    int var1;
    int var2;
    char str[64];
} test;

int main()
{
    test value;

    value.var1 = -7;
    printf("INT1: %d\n", value.var1);

    value.var2 = 10;
    printf("INT2: %d\n", value.var2);

    strcpy(value.str, "c");
    printf("STR: %s\n", value.str);

    test initValue;
    initValue.var1 = -7;
    initValue.var2 = 10;
    strcpy(initValue.str, "c");
    printf("INT1: %d\n", value.var1);
    printf("INT2: %d\n", value.var2);
    printf("STR: %s\n", value.str);

    return 0;
}