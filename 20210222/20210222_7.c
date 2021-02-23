/*Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана.*/
#include <stdio.h>
#include <string.h>

typedef union
{
    int iValue;
    float fValue;
    char string[10];
} uTest;

int main()
{
    uTest init;

    init.iValue = 10;
    printf("\nInteger value: %d\t Float value:%f\t String: %s", init.iValue, init.fValue, init.string);

    init.fValue = 15.5;
    printf("\nInteger value: %d\t Float value:%f\t String: %s\n", init.iValue, init.fValue, init.string);

    strcpy(init.string, "Nikolay");
    printf("\nInteger value: %d\t Float value:%f\t String: %s\n", init.iValue, init.fValue, init.string);

    return 0;
}