/*Как работи? Дефинираме променлива “а“, дефинираме
пойнтер, но още не му задаваме стойност. Отпечатайте
адреса на “а”. След това присвояваме стойност на
пойнтера, като внимаваме типовете на пойнтера и
променливата да са от един и същи тип. Отпечатваме
на екрана стойността на пойнтера с %р, стойността на
„а“ с %d, стойността на *ptr с %d.*/
#include<stdio.h>

int main(){
    int a = 10;
    int *ptr;

    printf("The address of a is: %p\n", &a);

    ptr = &a;

    printf("The value of the pointer: %p\n", ptr);
    printf("The value of a is: %d\n", a);
    printf("The value of the pointer: %d\n", *ptr);

    return 0;
}