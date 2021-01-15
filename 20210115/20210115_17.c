//Към задача 16 да се добави втора функция, която изчислява
//лицето на елипса по зададени два параметъра ( Пи * A * B)
#include<stdio.h>

const float PI = 3.14159;

float areaElipse(const float PI, float A, float B);
float areaCircle(const float PI, float R);

int main() {

    float R = 1;
    printf("Area of circle is %f\n", areaCircle(PI, R));
    R = 1.5;
    printf("Area of circle is %f\n", areaCircle(PI, R));
    R = 13;
    printf("Area of circle is %f\n", areaCircle(PI, R));
    
    float A = 1;
    float B = 1;
    printf("Area of elipse is %f\n", areaElipse(PI, A, B));

    return 0;
}

float areaCircle(const float PI, float R) {
    return PI * R * R;
}

float areaElipse(const float PI, float A, float B) {
    return PI * A * B;
}