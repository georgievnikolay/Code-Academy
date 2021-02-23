/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина.*/
#include <stdio.h>

typedef struct
{
    char day;
    char month;
    short year;
} date;

int main()
{

    /*1 начин за инициализация*/
    date contractdate = {22, 02, 2021};

    /*2 начин за инициализация*/
    contractdate.day = 22;
    contractdate.month = 2;
    contractdate.year = 2021;

    /*3 начин за инициализация*/
    date contractdate1 = {.day = 23, .month = 3, .year = 2021};

    printf("\n%d/%d/%d\n", contractdate.day, contractdate.month, contractdate.year);
    printf("\n%d/%d/%d\n\n", contractdate1.day, contractdate1.month, contractdate1.year);

    return 0;
}
