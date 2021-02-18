/*Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx'*/
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
void reverse(char *str);
int main()
{
    char string[MAX_SIZE];

    printf("Enter a string: ");
    fgets(string, MAX_SIZE, stdin);

    reverse(string);
    printf("%s\n", string);

    return 0;
}

void reverse(char *str)
{
    int stringLen = strlen(str) - 1;
    char *temp;
    char *p = str;
    p += stringLen - 1;

    for (int i = 0; i < stringLen / 2; i++)
    {
        *temp = *str;
        *str = *p;
        *p = *temp;
        str++, p--;
    }
}
