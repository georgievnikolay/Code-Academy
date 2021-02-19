/*Направете по подобен начин триъгълник:*/
#include <stdio.h>

#define FIELD_SIZE 10

struct point
{
    int x;
    int y;
};

void fillField(char array[][FIELD_SIZE]);
void printField(char array[][FIELD_SIZE]);
void drawTriangle(char array[][FIELD_SIZE], struct point first, struct point second);

int main()
{

    char field[FIELD_SIZE][FIELD_SIZE];
    fillField(field);

    struct point a = {3, 4};
    struct point b = {7, 8};

    field[a.y][a.x] = '@';
    field[b.y][b.x] = '@';

    drawTriangle(field, a, b);
    printField(field);

    return 0;
}

/*Function to fill our field with '-' chars*/
void fillField(char array[][FIELD_SIZE])
{
    for (int i = 0; i < FIELD_SIZE; i++)
    {
        for (int j = 0; j < FIELD_SIZE; j++)
        {
            array[i][j] = '-';
        }
    }
}
/*Function to print the field when we need*/
void printField(char array[][FIELD_SIZE])
{
    for (int i = 0; i < FIELD_SIZE; i++)
    {
        for (int j = 0; j < FIELD_SIZE; j++)
        {
            printf("%c ", array[i][j]);
        }
        printf("\n");
    }
}
/*Function to draw a triangle given a two points*/
void drawTriangle(char array[][FIELD_SIZE], struct point first, struct point second)
{
    int i, j, count = 0; /*Using counter to increase the '@' on every row*/
    for (i = first.y; i <= second.y; i++)
    {
        for (j = first.x; j <= first.x + count; j++)
        {
            array[i][j] = '@';
        }
        count++;
    }
}