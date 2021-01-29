/*Напишете функция area() без параметри. Поискайте от
потребителя да въведе радиуса с помощта на функциите :
printf("Enter a radius\n");
scanf("%lf", &r);
Използвайте горната функция 1.за изчисляване на площта на кръг,
която написахме преди малко за да изчислите площта на кръга с този
радиус и върнете резултата: */
#include<stdio.h>

extern float g_PI;

float areaOfCircle(float radius);
float area();

int main() {

    printf("%.2f\n", area());

    return 0;
}

float areaOfCircle(float radius) {
    return g_PI * radius * radius;
}

float area() {
    float r;
    printf("Enter radius\n");
    scanf("%f", &r);

    return areaOfCircle(r);
}

float g_PI = 3.14;