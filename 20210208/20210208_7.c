/*Напишете един глобален масив, който съдържа на всяка позиция броя на
дните от месеца. Направете функция, която на която се подават като
аргументи година, месец и ден. На база на това функцията трябва да върне
поредния ден от годината. Например 1 март е 60 тия ден от годината.*/
#include<stdio.h>

extern int g_array[2][13];

int dayOfTheYear(int year, int month, int day);

int main(){
    int year, month, day;

    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Enter the month: ");
    scanf("%d", &month);
    printf("Enter the day: ");
    scanf("%d", &day);

    printf("It's the %d day of the year %d\n", dayOfTheYear(year, month, day), year);

    return 0;
}

int g_array[2][13] = {
    {0, 31, 28, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 30, 31, 30, 31, 30, 31}
};

int dayOfTheYear(int year, int month, int day){
    int leapY = 0, sumOfDays = 0, i;
    
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
        leapY = 1;

    for(i = 1; i < month; i++){
        sumOfDays += g_array[leapY][i];
    }

    sumOfDays += day;

    return sumOfDays;
}