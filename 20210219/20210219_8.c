/*Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета.*/
#include <stdio.h>

struct point
{
    int x;
    int y;
};

struct rect
{
    struct point first;
    struct point second;
};

struct point makePoint(int x, int y);

int main()
{
    struct rect pointA;
    struct rect pointB;

    pointA.first = makePoint(0, 0);
    pointB.second = makePoint(15, 15);

    for (int i = pointA.first.y; i < pointB.second.y; i++)
    {
        for (int j = pointA.first.x; j < pointB.second.x; j++)
        {
            printf("- ");
        }
        printf("\n");
    }

    return 0;
}

struct point makePoint(int x, int y)
{
    struct point newPoint = {x, y};
    return newPoint;
}