/*Сумирайте елементите на двумерен масив и намерете
средното по редове и колони. (Представете си, че са ученици в класове)*/
#include<stdio.h>

int main(){
    int n,m;

    printf("Enter the number of rows you need: ");
    scanf("%d", &n);
    printf("Enter the number of columns you need: ");
    scanf("%d", &m);

    int array[n][m], i, j;
    double rowAvg = 0.0, colAvg = 0.0;
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            printf("Enter element at array[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    //row avg
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            rowAvg += array[i][j];
        }
        printf("row %d has average: %.2f\n", i, rowAvg / m);
        rowAvg = 0.0;
    }

    for(i = m - 1; i >= 0; i--){
        for(j = 0; j < n; j++){
            colAvg += array[j][i];
        }
        printf("col %d has average: %.2f\n", i, colAvg / n);
        colAvg = 0.0;
    }
    return 0;
}