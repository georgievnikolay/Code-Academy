/*Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1. */
#include <stdio.h>

#define MAX_SIZE 20

int getFibonacciNumber(int firstPrevious, int secondPrevious);
void fillFibonacciArray(int *array);
void printArray(int *array);

int main()
{
    int fibonacciArray[MAX_SIZE] = {0, 1};
    fillFibonacciArray(fibonacciArray);
    printArray(fibonacciArray);

    return 0;
}
/*Function to produce fibonacci number*/
int getFibonacciNumber(int firstPrevious, int secondPrevious)
{
    return firstPrevious + secondPrevious;
}
/*Function to fill the array with Fibonacci numbers*/
void fillFibonacciArray(int *array)
{
    int currentFibonacciNumber;
    array += 2; /*Since we know the first 2 elements of the array we change the pointer to start from the second element of the array*/
    for (int i = 0; i < MAX_SIZE; i++, array++)
    {
        currentFibonacciNumber = getFibonacciNumber(*(array - 1), *(array - 2));
        *array = currentFibonacciNumber;
    }
}
/*Function to print the array*/
void printArray(int *array)
{
    for (int i = 0; i < MAX_SIZE; i++, array++)
    {
        printf("%d ", *array);
    }
}