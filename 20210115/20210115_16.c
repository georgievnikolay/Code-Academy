//Да се дефинира константата Пи (3.14159...) и да се напише
//функция, която изчислява лицето на окръжност по даден радиус (Пи * R * R).
//В main() да се извика горната функция с радиуси 1, 1.5, 13
#include<stdio.h>

const float PI = 3.14159;

float areaCircle(const float PI, float R);

int main() {

    float R = 1;
    printf("Area of circle is %f\n", areaCircle(PI, R));

    R = 1.5;
    printf("Area of circle is %f\n", areaCircle(PI, R));

    R = 13;
    printf("Area of circle is %f\n", areaCircle(PI, R));

    return 0;
}

float areaCircle(const float PI, float R) {
    return PI * R * R;
}