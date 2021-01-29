/*Направете глобална константа pi = 3.14, както правихме в
предишния урок. Напишете функция, която изчислява площта на кръг, на
която като параметър подаваме радиуса и връщаме площта на кръга.
Използвайте глобалната константа pi, за да извършите изчисленията.
Извикайте функцията в main() и покажете резултата.*/
#include<stdio.h>

extern float g_PI;

float areaOfCircle(float radius);

int main() {

    float r = 2.0;
    float area;

    area = areaOfCircle(r);
    printf("%.2f\n", area);
    return 0;
}

float areaOfCircle(float radius) {
    return g_PI * radius * radius;
}
float g_PI = 3.14;