/*Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура*/
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

typedef struct
{
    type m_type;
    myVar m_var;
} myValue;

void printValue(myValue *);

int main()
{
    myValue value = {VALUE_INT, 16961};
    printValue(&value);

    value.m_type = VALUE_STR;
    printValue(&value);

    return 0;
}

void printValue(myValue *pValue)
{
    if (VALUE_INT == pValue->m_type)
    {
        printf("INT: %d\n", pValue->m_var.iValue);
    }
    else if (VALUE_STR == pValue->m_type)
    {
        printf("STR: %s\n", pValue->m_var.string);
    }
}