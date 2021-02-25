
/*1. Дефинирайте константи PI, Е, и други с помощта на макроси. Използвайте
ги в кода.
2. Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.*/
#include<stdio.h>

#define PI 3.14
#define E 2.72
#define swap(t, x, y){ t temp = x; x = y; y = temp; }

double circleArea(int);

int main()
{
    int r = 2;
    int a = 1, b = 2;

    double area = circleArea(r);
    printf("The area of the circle is: %.2lf\n", area);
    
    printf("Before swap: a = %d and b = %d\n", a, b);
    swap(int,a,b);
    printf("After swap: a = %d and b = %d\n", a, b);
    
    return 0;
}

double circleArea(int radius){
    return PI * radius * radius;
}