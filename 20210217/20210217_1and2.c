/* Направете две функции и извикайте желаната функция с
указател към функция, съобразно знака, подаден от командния ред: а.оut
20 + 3

Задача 2. Добавете към горния код функции за умножение
и деление.*/
#include <stdio.h>
#include <stdlib.h>

int pfMinus(int nA, int nB) { return (nA - nB); }
int pfPlus(int nA, int nB) { return (nA + nB); }
int pfMulty(int nA, int nB) { return (nA * nB); }
int pfDivide(int nA, int nB) { return (nA / nB); }

int main(int argc, char *argv[])
{
    int (*pfCalc)(int, int) = NULL;

    if (argc < 4)
    {
        printf("\nUsage: %s +/- arg1 arg2 \n", argv[0]);
    }
    else if ('-' == argv[2][0])
    {
        pfCalc = pfMinus;
    }
    else if ('+' == argv[2][0])
    {
        pfCalc = pfPlus;
    }
    else if ('x' == argv[2][0])
    {
        pfCalc = pfMulty;
    }
    else if ('/' == argv[2][0])
    {
        pfCalc = pfDivide;
    }

    (NULL == pfCalc) ? 0 : printf("\nResult: %d\n", (*pfCalc)(atoi(argv[1]), atoi(argv[3])));

    return 0;
}