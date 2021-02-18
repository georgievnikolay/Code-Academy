/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.*/
#include <stdio.h>

#define MAX_NUMBER 1000
#define MAX_ARRAY_SIZE 168

int isPrime(int number);
void fillArrayWithPrimeNumbers(int *array);
void printArray(int *array);

int main()
{
    int primeNumArray[MAX_ARRAY_SIZE];

    fillArrayWithPrimeNumbers(primeNumArray);
    printArray(primeNumArray);
    return 0;
}
/*Function to check if a given number is prime*/
int isPrime(int number)
{
    int flag = 1;
    if (number == 1)
    { /*If a number is 1 it's automatically not prime*/
        return 0;
    }

    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        { /*If a number divided by a lower number has a 0 reminder => its not a prime*/
            flag = 0;
            break;
        }
    }
    return flag;
}
/*Function to fill the array with only prime numbers*/
void fillArrayWithPrimeNumbers(int *array)
{
    int i = 0;
    while (i++ <= MAX_NUMBER)
    {
        if (isPrime(i))
        {
            *array = i;
            array++;
        }
    }
}
/*Function to print the array NOTE: it prints 168 elements since thats how many prime numbers are from 0-1000*/
void printArray(int *array)
{
    int i;
    for (i = 0; i < MAX_ARRAY_SIZE; i++)
    {
        printf("%d\n", array[i]);
    }
}
