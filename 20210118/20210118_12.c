//Relational operators
#include<stdio.h>

int main() {
    int nX;
    printf("Enter nX ");
    scanf("%d", &nX);
    int nY;
    printf("Enter nY ");
    scanf("%d", &nY);

    if (nX == nY) {
        printf("%d and %d are equal\n", nX, nY);
    }
    else {
        printf("%d and %d are not equal\n", nX, nY);
    }

    if (nX > nY) { 
        printf("%d is greater than %d\n", nX, nY);
    }

    if (nX < nY) { 
        printf("%d is greater than %d\n", nY, nX);
    }

    return 0;
}