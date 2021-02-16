/*Дефинирайте променлива „а“, дeфинирайте пойнтер към
нея, присвоете му адреса на променливата. През пойнтера
задайте нова стойност = 5 на променливата „а“. Каква е
стойността на “а”?*/
#include<stdio.h>

int main(){
    int a;
    int *p = &a;

    *p = 5;

    printf("After assigning 5 to the variable a through a pointer it's value is: %d\n", a);
    
    return 0;
    
}