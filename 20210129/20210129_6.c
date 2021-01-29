/*Напишете програма на С, която чрез функция да обръща
десетични числа в двоични.*/
#include<stdio.h>

void decToBin(int number);

int main() {
    int n;
    printf("Enter an integer number up to 65, 535 to convert to binary:");
    scanf("%d", &n);

    decToBin(n);
    
    return 0;
}

void decToBin(int number) {
    unsigned int mask = 0xFFFF;
    while (mask > 0) {
        if((number & mask) == 0){
            putchar('0');
        }
        else {
            putchar('1');
        }
        mask >>= 1;
        //printf("%d\n", number);
    }
    
    return;
}