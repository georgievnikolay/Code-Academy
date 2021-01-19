//Логически оператори
#include<stdio.h>

int main() {
    int nA, nB, nX, nY;
    printf("Enter nA: ");
    scanf("%d", &nA);

    printf("Enter nB: ");
    scanf("%d", &nB);

    printf("Enter nX: ");
    scanf("%d", &nX);

    printf("Enter nY: ");
    scanf("%d", &nY);

    if ( nA > nB && nA != 0) {
        printf("&& Operator: Both conditions are true\n");
    }

    if (nA > nY || nY != 20) {
        printf("|| Operator: Only one condition is true\n");
    }

    if( ! (nA > nB && nB !=0) ) {
        printf(" ! Operator: Only one condition is true\n");
    }
    else {
        printf("Both conditions are true\n");
    }

    return 0;
}
