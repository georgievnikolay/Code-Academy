/*Опишете времето: часове:минути:секунди като структура
tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
добавяне на секунди, добавяне на минути. добавяне на часове към дадена
променлива от тип struct tagTMyTime. Напишете следните функции:
връщане на броя секунди за дадена променлива от въведения
тип и обратна функция от секундите да се генерира променлива
tagTMyTime. Напишете две функции, които изваждат и събират две
променливи от тип struct tagMyTime и връщат променлива от същия тип.
Използвайте тези функции, за да се уверите, че работят коректно.
*/
#include <stdio.h>
#include "header.h"

int main()
{
    struct tagTMyTime clock1 = {12, 30, 44};
    struct tagTMyTime *ptr = &clock1;
    struct tagTMyTime clock2 = {2, 1, 0};
    struct tagTMyTime *ptr2 = &clock2;
    struct tagTMyTime clock3;

    /*Check the 3 adding functions*/
    addSeconds(ptr, 50);  /*add 50s to 12:30:44 => 12:31:34*/
    addMinnutes(ptr, 30); /*add 30m to 12:31:34 => 13:1:34*/
    addHours(ptr, 12);    /*add 12h to 12:1:34 => 1:1:34*/
    printf("%d:%d:%d\n", clock1.hours, clock1.minutes, clock1.seconds);


    printf("%d\n", seconds(ptr2)); /* print how many seconds there are in clock2*/


    clock3 = secondsIntoTime(8274); /*we convert given seconds to a new time structure*/
    printf("%d:%d:%d\n", clock3.hours, clock3.minutes, clock3.seconds);

    clock1.hours = 12, clock1.minutes = 30, clock1.seconds = 44;
    clock2.hours = 13, clock2.minutes = 21, clock2.seconds = 30;
    clock3 = addTwoTimers(ptr, ptr2); /*we add the two timers together and assign them to a new one 12:30:44 + 13:21:30 => 1:51:14*/
    printf("%d:%d:%d\n", clock3.hours, clock3.minutes, clock3.seconds);

    return 0;
}
