#include<stdio.h>

int main() {
    int x = 10, y = 10;
    
    int true = x && y & x << 1;
    //първо ще се шифтне Х-а с 1 бит, после идва ред на побитовото 'и', и накрая на логическото 'и'
    printf("True = %d\n", true);

    true = x && y ^ x << 1;
    //първо ще се шифтне Х-а с 1 бит, после идва ред на побитовото 'или', и накрая на логическото 'и'
    printf("True = %d\n", true);

    return 0;
}