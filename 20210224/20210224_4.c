/*Задача 4. Използвайте предефинирани макроси*/
#include<stdio.h>

int main()
{
    printf("File: %s\n", __FILE__); /*Current file*/
    printf("Date: %s\n", __DATE__); /*Current date*/
    printf("Time: %s\n", __TIME__); /*Current time*/
    printf("Line: %d\n", __LINE__); /*Line*/
    printf("ANSI: %d\n", __STDC__); /*ANSI Standart, returns 1 to signifu that the compiler conforms to ISO standard*/

    return 0;
}