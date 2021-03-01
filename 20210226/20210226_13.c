/*Задача 13.Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към
дадена променлива от тип struct tagTMyTime. Напишете следните
функции: връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно. В
решението трябва да се използва динамично заделяне на памет и typedef.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int hours;
    int minutes;
    int seconds;
} tagTMyTime;

void fixTime(tagTMyTime *variable);
void addSeconds(tagTMyTime *variable, int seconds);
void addMinnutes(tagTMyTime *variable, int minutes);
void addHours(tagTMyTime *variable, int hours);
int seconds(tagTMyTime *variable);

tagTMyTime *secondsIntoTime(int seconds);
tagTMyTime *addTwoTimers(tagTMyTime *variable1, tagTMyTime *variable2);
tagTMyTime *substractTwoTimers(tagTMyTime *variable1, tagTMyTime *variable2);

int main()
{
    tagTMyTime *clock1 = NULL;
    clock1 = (tagTMyTime *)malloc(sizeof(tagTMyTime));
    clock1->hours = 12;
    clock1->minutes = 30;
    clock1->seconds = 44;

    addSeconds(clock1, 50);  /*add 50s to 12:30:44 => 12:31:34*/
    addMinnutes(clock1, 30); /*add 30m to 12:31:34 => 13:01:34*/
    addHours(clock1, 12);    /*add 12h to 12:1:34 => 01:01:34*/
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds);

    clock1->hours = 2;
    clock1->minutes = 1;
    clock1->seconds = 0;
    printf("%d\n", seconds(clock1)); /* print how many seconds there are in clock1*/

    clock1 = secondsIntoTime(8274); /*we convert given seconds to a new time structure*/
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds);

    tagTMyTime *clock2 = (tagTMyTime *)malloc(sizeof(tagTMyTime));
    tagTMyTime *clock3 = (tagTMyTime *)malloc(sizeof(tagTMyTime));

    clock1->hours = 12, clock1->minutes = 30, clock1->seconds = 44;
    clock2->hours = 13, clock2->minutes = 21, clock2->seconds = 30;
    clock3 = addTwoTimers(clock1, clock2); /*we add the two timers together and assign them to a new one 12:30:44 + 13:21:30 => 1:51:14*/
    printf("%.2d:%.2d:%.2d\n", clock3->hours, clock3->minutes, clock3->seconds);

    clock1 = substractTwoTimers(clock3, clock2);
    printf("%.2d:%.2d:%.2d\n", clock1->hours, clock1->minutes, clock1->seconds); /*we substract clock2 from clock1 and see if we get clock1 back*/

    free(clock1);
    free(clock2);
    free(clock3);

    return 0;
}

/*Function to fix the time when seconds minutes of hours are overflowing*/
void fixTime(tagTMyTime *variable)
{
    if (variable->seconds >= 60)
    {
        variable->minutes++;
        variable->seconds = variable->seconds - 60;
    }
    if (variable->minutes >= 60)
    {
        variable->hours++;
        variable->minutes = variable->minutes - 60;
    }
    if (variable->hours >= 24)
    {
        variable->hours = variable->hours - 24;
    }

    if (variable->seconds < 0)
    {
        variable->minutes--;
        variable->seconds = variable->seconds + 60;
    }
    if (variable->minutes < 0)
    {
        variable->hours--;
        variable->minutes = variable->minutes + 60;
    }
    if (variable->hours < 0)
    {
        variable->hours = variable->hours + 24;
    }
}

/*Function to add given seconds to a timer*/
void addSeconds(tagTMyTime *variable, int seconds)
{
    variable->seconds += seconds;
    fixTime(variable);
}

/*Function to add given minutes to a timer*/
void addMinnutes(tagTMyTime *variable, int minutes)
{
    variable->minutes += minutes;
    fixTime(variable);
}

/*Function to add given hours to a timer*/
void addHours(tagTMyTime *variable, int hours)
{
    variable->hours += hours;
    fixTime(variable);
}

/*Function to return how many seconds there are in a timer*/
int seconds(tagTMyTime *variable)
{
    int sumSeconds = 0;
    sumSeconds += variable->seconds;
    sumSeconds += variable->minutes * 60;
    sumSeconds += variable->hours * 3600;

    return sumSeconds;
}
/*Function to return a timer by given seconds*/
tagTMyTime *secondsIntoTime(int seconds)
{
    tagTMyTime *clock = (tagTMyTime *)malloc(sizeof(tagTMyTime));
    int h, m, s;

    h = seconds / 3600;
    m = (seconds - (3600 * h)) / 60;
    s = (seconds - (3600 * h) - (m * 60));

    clock->hours = h;
    clock->minutes = m;
    clock->seconds = s;

    return clock;
}

/*Function to add two timers together into a new one*/
tagTMyTime *addTwoTimers(tagTMyTime *variable1, tagTMyTime *variable2)
{
    tagTMyTime *newClock = (tagTMyTime *)malloc(sizeof(tagTMyTime));

    newClock->seconds = variable1->seconds + variable2->seconds;
    fixTime(newClock);
    newClock->minutes = variable1->minutes + variable2->minutes;
    fixTime(newClock);
    newClock->hours = variable1->hours + variable2->hours;
    fixTime(newClock);

    return newClock;
}

tagTMyTime *substractTwoTimers(tagTMyTime *variable1, tagTMyTime *variable2)
{
    tagTMyTime *newClock = (tagTMyTime *)malloc(sizeof(tagTMyTime));

    newClock->seconds = variable1->seconds - variable2->seconds;
    fixTime(newClock);
    newClock->minutes = variable1->minutes - variable2->minutes;
    fixTime(newClock);
    newClock->hours = variable1->hours - variable2->hours;
    fixTime(newClock);

    return newClock;
}