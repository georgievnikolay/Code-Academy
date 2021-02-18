/*Напишете програма аналог на спортния тотализатор.
Използвайте функции.
Насоки:
1. Давате право на избор на играча да избере тотализатор, в който
ще си пробва късмета: (5 от 35), (6 от 42) или (6 от 49)
2. При всяко завъртане програмата изписва 1 произволно число,
което не е извадено до момента.
3. Програмата вади числата, нужни за избраната игра (5 или 6).*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LARGE 6 /*for the 6/42 and 6/49 arrays*/
#define SMALL 5 /*for the 5/35 array*/

int isInArray(int array[], int number, int arraySize);
void printArray(int array[], int arraySize);
void toto5of35();
void toto6of42();
void toto6of49();
int invalidChoice(int choice);

void menu();

int main()
{
    srand(time(0));
    menu();

    return 0;
}
/*Check if a given number is already existing in the array*/
int isInArray(int array[], int number, int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == number)
        {
            return 1;
        }
    }
    return 0;
}
/*Function to print an array*/
void printArray(int array[], int arraySize)
{
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}
/*Function for storing and printing the numbers from the 5 of 35 toto game*/
void toto5of35()
{
    int arrayForRandNumbers[SMALL] = {0};
    int maxNumber = 35, minNumber = 1, count = 0;
    int randomNumber;

    while (count < 5)
    {

        randomNumber = rand() % ((maxNumber + 1) - minNumber) + minNumber; /*Formula from the internet to start generating random numbers from 1 not from 0*/

        if (isInArray(arrayForRandNumbers, randomNumber, SMALL))
        {
            continue;
        }
        else
        {
            arrayForRandNumbers[count] = randomNumber;
            count++;
        }
    }
    printArray(arrayForRandNumbers, SMALL);
}
/*Function for storing and printing the numbers from the 6 of 42 toto game*/
void toto6of42()
{
    int arrayForRandNumbers[LARGE] = {0};
    int maxNumber = 42, minNumber = 1, count = 0;
    int randomNumber;

    while (count < 6)
    {

        randomNumber = rand() % ((maxNumber + 1) - minNumber) + minNumber;

        if (isInArray(arrayForRandNumbers, randomNumber, LARGE))
        {
            continue;
        }
        else
        {
            arrayForRandNumbers[count] = randomNumber;
            count++;
        }
    }
    printArray(arrayForRandNumbers, LARGE);
}
/*Function for storing and printing the numbers from the 6 of 49 toto game*/
void toto6of49()
{
    int arrayForRandNumbers[LARGE] = {0};
    int maxNumber = 49, minNumber = 1, count = 0;
    int randomNumber;

    while (count < 6)
    {

        randomNumber = rand() % ((maxNumber + 1) - minNumber) + minNumber;

        if (isInArray(arrayForRandNumbers, randomNumber, LARGE))
        {
            continue;
        }
        else
        {
            arrayForRandNumbers[count] = randomNumber;
            count++;
        }
    }
    printArray(arrayForRandNumbers, LARGE);
}
/*Function to check if the choice from the menu is invalid one*/
int invalidChoice(int choice)
{
    if (choice < 1 || choice > 3)
    {
        return 1;
    }
    return 0;
}
/*Menu from witch to choose a game*/
void menu()
{
    int choice;
    do
    {
        printf("Enter a toto game you wish to play:\n");
        printf("For 5 of 35 enter 1\n");
        printf("For 6 of 42 enter 2\n");
        printf("for 6 of 49 enter 3\n");
        scanf("%d", &choice);
        fflush(stdin);

    } while (invalidChoice(choice));

    switch (choice)
    {
    case 1:
        toto5of35();
        break;
    case 2:
        toto6of42();
        break;
    case 3:
        toto6of49();
    default:
        break;
    }
}