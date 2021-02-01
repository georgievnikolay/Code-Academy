#include<stdio.h>

int lastNumber(int barcode[]);
int testAlgorithm(int barcode[], int testNumber);

int main() {

    int upc[] = {0,1,3,8,0,0,1,5,1,7,3,5};

    if(testAlgorithm(upc, lastNumber(upc)) == 0){
        printf("No error\n");
    }
    else {
        printf("Error\n");
    }

    return 0;
}

int lastNumber(int barcode[]) {
    int number, i;
    for(i = 0; i < 12; i++) {
        number = barcode[i];
    }
    return number;
}

int testAlgorithm(int barcode[], int testNumber) {
    int flag = 0, oddNum = 0, evenNum = 0, i, total;

    for(i = 0; i < 11; i++) {
        if(i % 2 == 0){
            evenNum += barcode[i];
        }
        else {
            oddNum += barcode[i];
        }
    }

    total = (evenNum * 3) + oddNum;
    total = total - 1;
    total = total % 10;
    total = 9 - total;
    

    if(total == testNumber){
        flag = 0;
    }
    else {
        flag = 1;
    }

    return flag;
}