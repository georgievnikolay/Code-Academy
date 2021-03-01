/*Задача 5 Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/
#include <stdio.h>

#define SIZE 10

int main()
{
    typedef long long int array[SIZE];
    array numbers;

    for(int i = 0; i < SIZE; i++)
    {
        numbers[i] = i;
        printf("%d ", numbers[i]);
    }

    return 0;
}