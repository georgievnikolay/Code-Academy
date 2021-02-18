/*Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randGenerator();
void fillArrayWithRand(int array[][5], unsigned arrSize);
void printArray(int array[][5], unsigned arrSize);
int *findValue(int number);
void printElements(int array[][5], unsigned arrSize);

int i, j;

int main()
{
    int arr[5][5];

    srand(time(0));
    fillArrayWithRand(arr, 5);
    printArray(arr, 5);
    printElements(arr, 5);

    return 0;
}

/*Function to generate and return random numbers*/
int randGenerator()
{
    short upperLimit = 11;

    return rand() % upperLimit;
}
/*Function to print our array*/
void printArray(int array[][5], unsigned arrSize)
{
    for (i = 0; i < arrSize; i++)
    {
        for (j = 0; j < arrSize; j++)
        {
            printf("%d\t", array[i][j]);
        }
        printf("\n");
    }
}
/*Function to fill the array with the random generated numbers*/
void fillArrayWithRand(int array[][5], unsigned arrSize)
{
    for (i = 0; i < arrSize; i++)
    {
        for (j = 0; j < arrSize; j++)
        {
            array[i][j] = randGenerator();
        }
    }
}
/*Funtion to find the numbers between 1 and 5 in the array and return a pointer to them*/
int *findValue(int number)
{
    int *pi = NULL;
    if (number >= 1 && number <= 5)
    {
        pi = &number;
    }

    return pi;
}
/*Function to print the elements found*/
void printElements(int array[][5], unsigned arrSize)
{
    for (i = 0; i < arrSize; i++)
    {
        for (j = 0; j < arrSize; j++)
        {
            if (NULL != findValue(array[i][j]))
            {
                printf("Value of array[%d][%d] is: %d\n", i, j, *findValue(array[i][j]));
            }
        }
    }
}