/*Използване на метода на мехурчето за сортиране на масив от
числа (виж. wiki).
Потребителят въвежда броя числа и след това въвежда всяко
едно число. Напишете програма, която трябва да сортира числата
и да ги изведе в сортиран вид, като най-малкото се извежда първо.*/
#include <stdio.h>
#include <stdlib.h>

void fillArray(int *array, unsigned size);
void bubbleSortIntArray(int *array, unsigned size);
void swap(int *a, int *b);
void printArray(int *array, int size);

int main()
{
    int *piValue = NULL;
    unsigned uSize;

    printf("Enter a size of the array: ");
    scanf("%u", &uSize);

    piValue = (int *)malloc(uSize * sizeof(int));

    fillArray(piValue, uSize);
    bubbleSortIntArray(piValue, uSize);
    printArray(piValue, uSize);

    return 0;
}
/*Function to fill the array with numbers*/
void fillArray(int *array, unsigned size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter element at %d position: ", i);
        scanf("%d", (array + i));
    }
}
/*Function to swap 2 numbers*/
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*Implement of the bubblesort algorithm*/
void bubbleSortIntArray(int *array, unsigned size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                swap(&array[j], &array[j + 1]);
            }
        }
    }
}
/*Function to print an array*/
void printArray(int *array, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(array + i));
    }
}