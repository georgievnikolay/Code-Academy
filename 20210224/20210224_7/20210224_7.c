/*Задача 7. Напишете заглавен файл с декларации на функции и
сложете гардове. Този начин намалява времето за компилиране на
големи проекти.
Прочетете за директивата #pragma once. Отговорете
дали тази директива е еквивалентна на гарда в упражнение 4*/
#include<stdio.h>
#include "circleArea.h"

int main()
{
    int radius = 5;
    double area = circleArea(radius);
    double perimeter = circlePerimeter(radius);

    printf("Circle area is: %.2lf\n", area);
    printf("Circle perimeter is: %.2lf\n", perimeter);

    return 0;
}