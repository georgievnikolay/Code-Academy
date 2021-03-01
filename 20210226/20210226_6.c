/*Задача 6. Напишете структура с потребителски тип key_t, която
съдържа символен низ и число.*/
#include <stdio.h>

typedef struct
{
    char key[11];
    int number;
} t_key;

int main()
{
    t_key activate = {"HA2AG-G6KD", 1};

    printf("#%d Key is :\"%s\"\n", activate.number, activate.key);

    return 0;
}