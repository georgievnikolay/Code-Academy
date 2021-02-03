/*декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);*/
#include<stdio.h>

int main() {
    char arrCh[3];
    int arrIn[3];
    double arrD[3];

    printf("The size of the char array is: %d\n", sizeof(arrCh));
    printf("The size of the int array is: %d\n", sizeof(arrIn));
    printf("The size of the double array is: %d\n", sizeof(arrD));

    return 0;
}