/*Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/
#include <stdio.h>

typedef struct
{
    unsigned day : 5;
    unsigned month : 4;
    unsigned year : 12;
} bitFieldDate;

void printDate(bitFieldDate *);
int isValidDate(bitFieldDate *);
int isLeapYear(bitFieldDate *);

int main()
{
    bitFieldDate calendar;
    calendar.day = 28;
    calendar.month = 2;
    calendar.year = 2021;

    printDate(&calendar);

    return 0;
}

int isLeapYear(bitFieldDate *date)
{
    if (((date->year % 4 == 0) && (date->year % 100 == 0)) || (date->year % 400 == 0))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isValidDate(bitFieldDate *date)
{
    int calendar[2][13] = {
        {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

    if (date->day < 1 || (date->month < 1 || date->month > 12) || date->year < 1)
    {
        return 0;
    }

    if (isLeapYear(date))
    {
        if (calendar[1][date->month] < date->day)
        {
            return 0;
        }
    }
    else
    {
        if (calendar[0][date->month] < date->day)
        {
            return 0;
        }
    }

    return 1;
}
void printDate(bitFieldDate *date)
{
    if (isValidDate(date))
        printf("%d/%d/%d\n", date->day, date->month, date->year);
    else
        printf("%d/%d/%d is not a valid date\n", date->day, date->month, date->year);
}
