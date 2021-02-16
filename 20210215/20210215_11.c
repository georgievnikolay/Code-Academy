/*Напишете програма, която умножава 2 числа, като
използва пойнтер-и.
Пойнтер-ите не са страшни. Дефинират се като
тип *Х и се използват като *Х. Както променливите,
но със * отпред (и 1 наум!).
Продължение: Опитайте да умножите 2 променливи от
различен тип, използвайки пойнтери.*/
#include<stdio.h>

int main(){
    int a = 5, b = 6;
    int *pA = &a;
    int *pB = &b;

    printf("The result of multiplying the values of a and b through pointers is: %d\n", *pA * *pB);

    int c = 3;
    float d = 3.5;
    int *pC = &c;
    float *pD = &d;

    printf("The result of multiplying the values of c and d through pointers is: %f\n", *pC * *pD);
    return 0;
}