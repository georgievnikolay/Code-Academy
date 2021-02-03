/*Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b). */
#include<stdio.h>

void my_swap(int *a, int *b);

int main() {
    int number1 = 5, number2 = 10; /*задаваме стойности на двете променливи*/

    int *pNumber1 = &number1; /*дефинираме пойнтър който сочи към паметта на първата променлива*/
    int *pNumber2 = &number2; /*дефинираме пойнтър който сочи към паметта на втората променлива*/

    printf("Before the swap: number1 = %d number2 = %d\n", number1, number2);
    my_swap(pNumber1, pNumber2); /*използваме пойнтърите за да достъпим директно паметтна на променливите при размяната на стойностите им*/
    printf("After the swap number1 = %d number2 = %d\n", number1, number2);

    return 0;
}

void my_swap(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;

    return;
}