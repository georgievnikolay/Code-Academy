/*Създайте test1.txt файл в избрана от вас директория. Сложете някакви
данни в него на латиница - име, поздрав, брой. Отворете за четене.
Използвайте fgetc() , която взема само един char от файла. Направете
while цикъл, за да изпишете всички символи, проверявайте за край на
файл с EOF. Проверявайте дали файловият пойнтер не е NULL, ако е
NULL, изпишете грешка.*/
#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *pf = NULL;

    pf = fopen("test1.txt", "r");

    if (pf == NULL)
    {
        printf("Failed to open file!\n");
        exit(1);
    }

    char c;

    while ((c = fgetc(pf)) != EOF)
    {
        printf("%c", c);
    }

    fclose(pf);
    pf = NULL;

    return 0;
}