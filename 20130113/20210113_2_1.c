//Да направим функция, която ще принтира числата от
//десетичен в бинарен вид:
#include<stdio.h>

long long int decimalToBinary(int number);
int main() {

    int number;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("%lld", decimalToBinary(number));

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