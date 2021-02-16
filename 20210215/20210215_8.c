/*Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/
#include<stdio.h>

int main(){
    int a = 10;
    int *p = &a;

    printf("The address of the pointer is: %p\n", &p);
    

    return 0;
}