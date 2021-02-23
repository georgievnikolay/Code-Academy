/*Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор*/
#include <stdio.h>

typedef struct
{
    char day;
    char month;
    short year;
} date;

#define MAX_DATES 5

void addDates(date *);
void printCalendar(date *);

int main()
{

    date calendar[MAX_DATES];

    addDates(calendar);
    printCalendar(calendar);

    return 0;
}

void addDates(date *array)
{
    for (int i = 0; i < MAX_DATES; i++)
    {
        printf("\nEnter date in the format - day/month/year:");
        scanf("%d/%d/%d", &array[i].day, &array[i].month, &array[i].year);
    }
}

void printCalendar(date *calendar)
{
    for (int i = 0; i < MAX_DATES; i++)
    {
        printf("\n%d/%d/%d\n", calendar[i].day, calendar[i].month, calendar[i].year);
    }
}