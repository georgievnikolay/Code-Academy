/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    int quantity;
    float price;
    char name[128];
} product;

int main()
{
    product chocolate;

    chocolate.quantity = 50;
    chocolate.price = 2.50;
    strcpy(chocolate.name, "Chocolate");

    printf("Product: %s\tPrice: %d\tQuantity:%d\n", chocolate.name, chocolate.price, chocolate.quantity);

    return 0;
}