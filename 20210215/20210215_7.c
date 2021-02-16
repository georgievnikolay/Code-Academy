/*Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана.*/
#include<stdio.h>

int main(){
    int a = 5;
    int *p = &a;

    a = *p + 5;

    printf("The value of 'a' after assigning to it it's pointer value + 5 is now: %d\n", a);

    return 0;
}