/*Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/
#include <stdio.h>

char array[] = "This is a string to test my idea for search in a char and ....";

int main()
{
    char symbol = 'a';
    printf("The symbol \"%c\" is used %d times in the string\n", symbol, countSymbol(array, symbol));

    return 0;
}
/*Function to count a given symbol*/
int countSymbol(char *array, char symbol)
{
    int count = 0;
    while (*array++ != '\0')
    {
        if (*array == symbol)
        {
            count++;
        }
    }
    return count;
}
