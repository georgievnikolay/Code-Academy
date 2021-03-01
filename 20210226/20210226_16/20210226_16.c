/*_  _  _  _  _  _  _  _
  9 10 11 12 13 14 15 16
  1 2 3 4 5 6 7 8
Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/
#include <stdio.h>
#include "header.h"

int array[ROW][COLUMN] = {
    {'-', '-', ' -', '-', '-', '-', '-', '-'},
    {9, 10, 11, 12, 13, 14, 15, 16},
    {1, 2, 3, 4, 5, 6, 7, 8}};

int pullNumber, pullNumberI, pullNumberJ;
int numberExpelled;
int menuChoice, lastChoice;

int main()
{
    while (1)
    {

        printBoard(array);

        printf("Enter a pull number you want to move: ");
        scanf("%d", &pullNumber);

        pullNumberI = getPullNumberRow(array, pullNumber);
        pullNumberJ = getPullNumberColumn(array, pullNumber);

        menu();
        lastChoice = menuChoice;
        printf("Enter: ");
        scanf("%d", &menuChoice);

        switch (menuChoice)
        {
        case 1:
            moveUp();
            break;
        case 2:
            moveDown();
            break;
        case 3:
            moveLeft();
            break;
        case 4:
            moveRight();
            break;
        case 5:
            if (lastChoice == 1)
                redoUp();

            if (lastChoice == 2)
                redoDown();

            if (lastChoice == 3)
                redoLeft();

            if (lastChoice == 4)
                redoRight();
        default:
            break;
        }
    }

    return 0;
}

void printBoard(int array[ROW][COLUMN])
{
    printf("#########################################################################\n");
    for (int i = 0; i < ROW; i++)
    {
        printf("#\t");
        for (int j = 0; j < COLUMN; j++)
        {
            if (array[i][j] == DASH)
            {
                printf("%c\t", array[i][j]);
            }
            else
            {
                printf("%d\t", array[i][j]);
            }
        }
        printf("#\n");
    }
    printf("#########################################################################\n");
}

void menu()
{
    printf("In wich direction you want to move?\n");
    printf("Type 1 for up\n");
    printf("Type 2 for down\n");
    printf("Type 3 for left\n");
    printf("Type 4 for right\n");
    printf("Type 5 to redo your move\n");
}
/*Returns the X position of our number*/
int getPullNumberRow(int array[ROW][COLUMN], int pullNumber)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if (array[i][j] == pullNumber)
            {
                return i;
            }
        }
    }
}
/*Returns the Y position of our number*/
int getPullNumberColumn(int array[ROW][COLUMN], int pullNumber)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if (array[i][j] == pullNumber)
            {
                return j;
            }
        }
    }
}

/*Moving functions use the array coordinates to move the pulls and to expell the ones who got jupmed over
moveUp means we have to decrement I index and moveDown means we increment it. At the same time we save the expelled number
so we can use it if the user want to redo the move he made.
Same logic is implemented for Left & Right moves and J index*/
void moveUp()
{
    if (array[pullNumberI - 2][pullNumberJ] == DASH)
    {
        array[pullNumberI - 2][pullNumberJ] = pullNumber;
        numberExpelled = array[pullNumberI - 1][pullNumberJ];

        array[pullNumberI - 1][pullNumberJ] = DASH;
        array[pullNumberI][pullNumberJ] = DASH;
    }
}
void moveDown()
{
    if (array[pullNumberI + 2][pullNumberJ] == DASH)
    {
        array[pullNumberI + 2][pullNumberJ] = pullNumber;
        numberExpelled = array[pullNumberI + 1][pullNumberJ];
        array[pullNumberI + 1][pullNumberJ] = DASH;
        array[pullNumberI][pullNumberJ] = DASH;
    }
}
void moveLeft()
{
    if (array[pullNumberI][pullNumberJ - 2] == DASH)
    {
        array[pullNumberI][pullNumberJ - 2] = pullNumber;
        numberExpelled = array[pullNumberI][pullNumberJ - 1];
        array[pullNumberI][pullNumberJ - 1] = DASH;
        array[pullNumberI][pullNumberJ] = DASH;
    }
}
void moveRight()
{
    if (array[pullNumberI][pullNumberJ + 2] == DASH)
    {
        array[pullNumberI][pullNumberJ + 2] = pullNumber;
        numberExpelled = array[pullNumberI][pullNumberJ + 1];
        array[pullNumberI][pullNumberJ + 1] = DASH;
        array[pullNumberI][pullNumberJ] = DASH;
    }
}

/*Redo functions are pretty much backward move functions using the expelled number inbetween*/
void redoUp()
{
    array[pullNumberI][pullNumberJ] = DASH;
    array[pullNumberI + 1][pullNumberJ] = numberExpelled;
    array[pullNumberI + 2][pullNumberJ] = pullNumber;
}
void redoDown()
{
    array[pullNumberI][pullNumberJ] = DASH;
    array[pullNumberI - 1][pullNumberJ] = numberExpelled;
    array[pullNumberI - 2][pullNumberJ] = pullNumber;
}
void redoLeft()
{
    array[pullNumberI][pullNumberJ] = DASH;
    array[pullNumberI][pullNumberJ + 1] = numberExpelled;
    array[pullNumberI][pullNumberJ + 2] = pullNumber;
}
void redoRight()
{
    array[pullNumberI][pullNumberJ] = DASH;
    array[pullNumberI][pullNumberJ - 1] = numberExpelled;
    array[pullNumberI][pullNumberJ - 2] = pullNumber;
}