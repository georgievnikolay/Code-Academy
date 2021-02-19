#include<stdio.h>
#include"header.h"

/*Function to fix the time when seconds minutes of hours are overflowing*/
void fixTime(struct tagTMyTime *variable){
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
}
/*Function to add given seconds to a timer*/
void addSeconds(struct tagTMyTime *variable, int seconds)
{
    variable->seconds += seconds;
    fixTime(variable);
}
/*Function to add given minutes to a timer*/
void addMinnutes(struct tagTMyTime *variable, int minutes){
    variable->minutes += minutes;
    fixTime(variable);
}
/*Function to add given hours to a timer*/
void addHours(struct tagTMyTime *variable, int hours){
    variable->hours += hours;
    fixTime(variable);
}
/*Function to return how many seconds there are in a timer*/
int seconds(struct tagTMyTime *variable){
    int sumSeconds = 0;
    sumSeconds += variable->seconds;
    sumSeconds += variable->minutes * 60;
    sumSeconds += variable->hours * 3600;

    return sumSeconds;
}
/*Function to return a timer by given seconds*/
struct tagTMyTime secondsIntoTime(int seconds){
    struct tagTMyTime clock;
    int h, m, s;
    
    h = seconds / 3600;
    m = (seconds - (3600)*h) / 60;
    s = (seconds -(3600*h)-(m*60));

    clock.hours = h;
    clock.minutes = m;
    clock.seconds = s;

    return clock;
}
/*Function to add two timers together into a new one*/
struct tagTMyTime addTwoTimers(struct tagTMyTime *variable1, struct tagTMyTime *variable2){
    struct tagTMyTime newClock;

    newClock.seconds = variable1->seconds + variable2->seconds;
    fixTime(&newClock);
    newClock.minutes = variable1->minutes + variable2->minutes;
    fixTime(&newClock);
    newClock.hours = variable1->hours + variable2->hours;
    fixTime(&newClock);

    return newClock;
}