/*Напишете функция, която прави същото, както в задача
6, но е рекурсивна.*/
#include<stdio.h>

long int multiply1To30(int x);

int main() {
    printf("The sum is: %ld\n", multiply1To30(1));

    return 0;
}

long int multiply1To30(int x) {

    if(x < 30) {
        return x * multiply1To30(x + 1);
    }
    else {
        return 30;
    }
    
}