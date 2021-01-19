//имаме две променливи int x = 10; и int y = 10;
//създайте две променливи int true, false; На първата присвоете
//резултата от сравнението на х == у, а на втората х != у принтирайте
// printf променливите true и false.
#include<stdio.h>

int main() {
    int x = 10, y = 10;
    int true = x == y;
    int false = x != y;

    printf("True = %d\n", true);
    printf("False = %d\n", false);

    return 0;
}