/*Напишете програма на С, която съдържа 2 функции.
1.Първата смята лице на правоъгълен триъгълник.
2.Втората използва лицето на триъгълника, за да сметне лице на
четириъгълник със същите дължини на страните, като раменете на
триъгълника.
Напишете прототипите на функциите най-отгоре, а телата им под
мейн функцията.*/
#include<stdio.h>

float triangleArea(int a, int b);
float rectangleArea(int a, int b);

int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("The area of the triangle is: %.2f\n", triangleArea(a, b));
    printf("The area of the rectangle is: %.2f\n", rectangleArea(a, b));

    return 0;
}

float triangleArea(int a, int b){
    return (a * b) / 2;
}

float rectangleArea(int a, int b) {
    return triangleArea(a, b) * 2;
}