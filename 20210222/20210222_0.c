#include <stdio.h>

typedef struct
{
    char letter;
    short position;
    int number;
    double number2;
} /*__attribute__((packed))*/ alphabet; /*packed пакетира структурата и размера й става равен на точния брой байтове на променливите, което спестява памет
 ноот своя страна може да забави работата на процесора*/

typedef union
{
    int _iNum;
    float m_fRate;
    union tagUTest *puniNext;
} tagUTest;

typedef enum
{
    true,
    false
} bool;

int main()
{
    
    printf("---------Experimenting with struct, packed and union--------\n");
    
    alphabet english;
    tagUTest test;

    printf("Size of Alphabet struct: %d\n", sizeof(english));
    
    printf("Size of tagUTest union: %d\n", sizeof(test));

    printf("---------Experimenting with enum--------\n");
    
    bool a = true;
    if (a)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}