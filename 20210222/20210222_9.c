/*Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача*/
#include <string.h>
#include <stdio.h>

typedef enum
{
    VALUE_INT,
    VALUE_STR
} convertInto;

typedef union
{
    int iValue;
    char string[64];
} myVar;

void convert(myVar *, convertInto);

int main()
{
    myVar value;

    strcpy(value.string, "AB");
    convert(&value, VALUE_INT);

    value.iValue = 16961;
    convert(&value, VALUE_STR);

    return 0;
}

void convert(myVar *pValue, convertInto type)
{
    if (type == VALUE_INT)
    {
        printf("INT: %d\n", pValue->iValue);
    }
    else if (type == VALUE_STR)
    {
        printf("STR: %s\n", pValue->string);
    }
}