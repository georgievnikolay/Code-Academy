/*Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.*/
#include <stdio.h>

typedef union
{
    unsigned short shVar : 6;
    unsigned char cVar : 6;
} bitFieldsUnion;

int main()
{
    bitFieldsUnion test = {31, ' '};
    printf("SHORT: %d\t, CHAR: %c\n", test.shVar, test.cVar);

    return 0;
}