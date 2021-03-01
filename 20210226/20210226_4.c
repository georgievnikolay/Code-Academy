/*Задача 4 Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/
#include <stdio.h>

typedef long int iValue;
void add (iValue*, iValue*);

int main()
{
    iValue var1 = 51000;
    iValue var2 = 49000;

    iValue *ptr1 = &var1;
    iValue *ptr2 = &var2;

    add(ptr1,ptr2);

    return 0;
}

void add(iValue* number1, iValue* number2){
    printf("The sum of %ld + %ld = %ld\n", *number1, *number2, *number1 + *number2);
}