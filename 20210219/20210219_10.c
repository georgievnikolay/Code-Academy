/*Направете два триъгълника с отместване.*/
#include <stdio.h>
#include <stdlib.h>

struct point
{
    int x;
    int y;
};

int main()
{
    struct point a = {2, 3};
    struct point b = {7, 8};

    unsigned uHight = abs(b.y - a.y);
    unsigned uLenght = abs(b.x - a.x);

    int i, j;

    for (i = 0; i < uHight; i++)
    {
        for (j = 0; j < uLenght; j++)
        {
            if (j < uLenght - i)
            {
                printf("- ");
            }
            else
            {
                printf("  ");
            }
        }
        for (j = 0; j < uLenght - i; j++)
        {
            printf("- ");
        }
        printf("\n");
    }

    return 0;
}
