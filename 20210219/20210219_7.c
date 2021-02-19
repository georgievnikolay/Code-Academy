/*Направете функция struct point makepoint(int x, int y), която
създава две точки.*/
#include<stdio.h>

struct point{
    int x;
    int y;
};

struct point makePoint(int x, int y);

int main(){
    int firstCoordinate;
    int secondCoordinate;

    printf("Please enter the first coordinate for A: ");
    scanf("%d", &firstCoordinate);
    printf("Please enter the second coordinate for A: ");
    scanf("%d", &secondCoordinate);

    struct point A = makePoint(firstCoordinate, secondCoordinate);
    struct point B = makePoint(7, 8);

    printf("Point A has coordinates (%d, %d)\n", A.x, A.y);
    printf("Point B has coordinates (%d, %d)\n", B.x, B.y); 

    return 0; 
}

struct point makePoint(int x, int y){
    struct point newPoint = {x, y};
    return newPoint;  
}