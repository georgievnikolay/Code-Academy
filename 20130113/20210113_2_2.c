//Да съберем пак две числа от тип char 255 + 10, да използваме функцията
//за представяне на числата в двоичен вид:
#include<stdio.h>

long long int decimalToBinary(int number);
int main() {

    unsigned char x = 255;

    printf("%lld\n", decimalToBinary(x));

    x = x + 10;
    
    printf("%lld\n", decimalToBinary(x));
    

    return 0;
}

long long int decimalToBinary(int number)
{
    int reminder, i = 1;
    long long int binary = 0;

    while (number != 0)
    {
        binary = (number % 2) * i + binary;
        number /= 2;
        i *= 10;
    }

    return binary;
}