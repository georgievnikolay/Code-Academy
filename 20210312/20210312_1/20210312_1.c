/*Задача 1. Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък:*/
#include "ll.h"

extern node* start;

int main() {

    init();
    add(15);
    add(20);

    for(int i = 5; i <= 40; i += 5) {
        add(i);
    }

    printlist();
    
    int x;
    dellFirst(&x);

    printf("The deleted element is: %d\n", x);

    printf("The remaining elements in the list are: \n");
    printlist();

    return 0;
}