/*Задача 1. За да направи една етажерка, дърводелец се нуждае от следните
компоненти: 4 дълги дъски, 6 къси дъски, 12 малки скоби, 2 големи скоби и 14 винта.
Дърводелецът има на склад А дълги дъски, В къси дъски, С малки скоби, D големи скоби и E
винта. Колко етажерки може да направи дърводелецът?
Изход:
С наличните на склад материали (33 дълги дъски, 55 къси дъски, 88 малки скоби, 22 големи
скоби и 99 винта) дърводелецът може да направи 7 етажерки. */
#include <stdio.h>
#include <stdlib.h>

#define MATERIALS 5

const int oneShelf[] = {4, 6, 12, 2, 14};

void menu(int *array);
int calculateShelves(int *inStockMaterials);

int main()
{
    int *inStockMaterials = (int*)malloc(MATERIALS * sizeof(int));

    menu(inStockMaterials);
    printf("%d\n", calculateShelves(inStockMaterials));

    free(inStockMaterials);
    inStockMaterials = NULL;

    return 0;
}

void menu(int *array)
{
    printf("Enter the number of long planks in stock: ");
    scanf("%d", &array[0]);
    printf("Enter the number of short planks in stock: ");
    scanf("%d", &array[1]);
    printf("Enter the number of short staples in stock: ");
    scanf("%d", &array[2]);
    printf("Enter the number of long staples in stock: ");
    scanf("%d", &array[3]);
    printf("Enter the number of screws in stock: ");
    scanf("%d", &array[4]);
}

int calculateShelves(int *inStockMaterials)
{
    int enoughShelves = 0, result;

    for(int i = 0; i < MATERIALS; i++)
    {
        result = inStockMaterials[i] / oneShelf[i];

        if(result <= enoughShelves)
        {
            enoughShelves = result;
        }
    }

    return result;
}