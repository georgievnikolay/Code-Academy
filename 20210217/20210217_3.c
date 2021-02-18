#include <stdio.h>
#include <stdlib.h>

int pfMinus(int nA, int nB) { return (nA - nB); }
int pfPlus(int nA, int nB) { return (nA + nB); }
int pfMulty(int nA, int nB) { return (nA * nB); }
int pfDivide(int nA, int nB) { return (nA / nB); }

int (*pfCalc[4])() = {pfMinus, pfPlus, pfMulty, pfDivide};

int main(int argc, char *argv[])
{
    char c;
    int x, y, num;

    printf("What operation you want to use? +/-/x/: ");
    scanf("%c", &c);

    printf("Type the first number: ");
    scanf("%d", &x);
    printf("Type the second number: ");
    scanf("%d", &y);

    switch (c)
    {
    case '+':
        num = 1;
        break;
    case '-':
        num = 0;
        break;
    case 'x':
        num = 2;
        break;
    case ':':
        if (y == 0)
        {
            printf("Invalid operation\n");
            exit(1);
        }
        num = 3;
        break;
    default:
        break;
    }

    printf("\nResult: %d\n", (*pfCalc[num])(x, y));

    return 0;
}