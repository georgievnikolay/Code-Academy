/*Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

float line(struct point first, struct point second);

int main()
{
    struct point a = {3,4};
    struct point b = {2,2};

    printf("The lenght of the line between points A(%d,%d) and B(%d,%d) is: %.2f\n", a.x, a.y, b.x, b.y, line(a,b));
}

float line(struct point first, struct point second)
{
    float lenght = abs(second.x - first.x);
    float height = abs(second.y - first.y);

    return sqrt(pow(lenght, 2) + pow(height, 2));
}