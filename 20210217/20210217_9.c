/*Напишете по 2 тройни цикъла (един и същи код) за масивите.
Хайде да го изнесем във функция.*/
#include <stdio.h>

#define MAX_SIZE 3

int i, j, k;
void fill3DArray(int (*array)[MAX_SIZE][MAX_SIZE]);
void print3DArray(int (*array)[MAX_SIZE][MAX_SIZE]);

int main()
{
    int array[MAX_SIZE][MAX_SIZE][MAX_SIZE];

    fill3DArray(array);
    printf("\n---------------Now we print the array---------------\n");
    print3DArray(array);

    return 0;
}

void fill3DArray(int (*array)[MAX_SIZE][MAX_SIZE])
{
    for (i = 0; i < MAX_SIZE; i++)
    {
        for (j = 0; j < MAX_SIZE; j++)
        {
            for (k = 0; k < MAX_SIZE; k++)
            {
                printf("Enter element at array[%d][%d][%d]:  ", i, j, k);
                scanf("%d", &array[i][j][k]);
            }
        }
    }
}

void print3DArray(int (*array)[MAX_SIZE][MAX_SIZE])
{
    for (i = 0; i < MAX_SIZE; i++)
    {
        for (j = 0; j < MAX_SIZE; j++)
        {
            for (k = 0; k < MAX_SIZE; k++)
            {
                printf("The element at array[%d][%d][%d] = %d\n", i, j, k, array[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}