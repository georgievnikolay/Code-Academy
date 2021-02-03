/*принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double*/
#include<stdio.h>

int main() {
    char arrCh[4] = "abc";
    int arrIn[3] = {1, 2, 3};
    double arrD[3] = {1.1, 1.2, 1.3};

    printf("The first element of the char array is: %c\n", arrCh[0]);
    printf("The second element of the int array is: %d\n", arrIn[1]);
    printf("The third element of the double array is: %lf\n", arrD[2]);

    return 0;
}