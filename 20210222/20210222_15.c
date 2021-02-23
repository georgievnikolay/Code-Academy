/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/
#include <stdio.h>

#define MAX_SIZE 2

typedef enum
{
    ONE = 1,
    TWO,
    TREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    ELEVEN,
    TWELVE,
    THIRTEEN,
    FOURTEEN,
    FIFTEEN,
    SIXTEEN,
    SEVENTEEN,
    EIGHTEEN,
    NINETEEN,
    TWENTY
} number;

typedef struct
{
    int facultyNumber;
    char firstName[10];
    double rate;
    number numberInList;
} student;

void enterData(student *);
void printData(student *);

int main()
{
    student list[MAX_SIZE];

    for (int i = 0; i < MAX_SIZE; i++)
    {
        list[i].numberInList = i + 1;
        enterData(&list[i]);
    }

    printData(list);

    return 0;
}

void enterData(student *currStudentData)
{
    printf("Enter student first name: ");
    scanf("%s", currStudentData->firstName);
    printf("Enter student rate: ");
    scanf("%lf", &currStudentData->rate);
    printf("Enter student faculty number: ");
    scanf("%d", &currStudentData->facultyNumber);
}

void printData(student *studentlist)
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        printf("%d,%s,%.2lf,%d\n",
               studentlist[i].numberInList, studentlist[i].firstName,
               studentlist[i].rate, studentlist[i].facultyNumber);
    }
}