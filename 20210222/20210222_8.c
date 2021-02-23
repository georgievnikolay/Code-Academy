/*Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/
#include <stdio.h>
#include <string.h>

typedef enum
{
    VALUE_INT,
    VALUE_STR
} type;

typedef union
{
    int iValue;
    char string[64];
} myVar;

void printMyValue(myVar *, type);

int main()
{
    myVar value;
    
    value.iValue = 1869310286;
    printMyValue(&value, VALUE_INT);

    strcpy(value.string, "Nikolay");
    printMyValue(&value, VALUE_STR);

    return 0;
}

void printMyValue(myVar *pValue, type pType)
{
    if (pType)
    {
        printf("STR: %s\n", pValue->string);
    }
    else if (pType == 0)
    {
        printf("INT: %d\n", pValue->iValue);
    }
}