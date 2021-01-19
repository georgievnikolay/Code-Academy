//Направете генератор на случайни числа по следния
//алгоритъм (xorshift):
#include <stdio.h>

int main() {

    long long int A = 1;

    for (int i = 2; i < 6; i++) {
        A ^= A << 2 * i;
        printf("%d\n", A);
    }

    return 0;
}