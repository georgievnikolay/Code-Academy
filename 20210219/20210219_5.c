/*а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/
#include <stdio.h>

#define FIELD_SIZE 15 

struct point
{
    int x;
    int y;
};

void fillField(char array[][FIELD_SIZE]);
void printField(char array[][FIELD_SIZE]);
void makeRectangle(char array[][FIELD_SIZE], struct point first, struct point second);

int main()
{
    char field[FIELD_SIZE][FIELD_SIZE] = {'-'};

    fillField(field);

    struct point a;
    a.x = 3;
    a.y = 4;

    field[a.y][a.x] = '@';

    struct point b;
    b.x = 7;
    b.y = 10;

    field[b.y][b.x] = '@';

    makeRectangle(field, a, b);
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
/*Function to make rectangle using 2 points and to fill it with '@' symbol*/
void makeRectangle(char array[][FIELD_SIZE], struct point first, struct point second)
{
    for (int i = first.y; i <= second.y; i++)
    {
        for (int j = first.x; j <= second.x; j++)
        {
            array[i][j] = '@';
        }
    }
}