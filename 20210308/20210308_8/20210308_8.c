/*Напишете стринг в текстов файл.
int fputs (const char *str, FILE *pfile);
Първият параметър е указател към стринга, който искаме да
запишем, вторият параметър е указател към файла, в който ще
пишем.
Функцията ще записва символи от стринга догато достигне
терминиращ символ \0, но не го пише в новия файл.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char *string = "Nikolay Georgiev";

    if ((fp = fopen("text.txt", "w")) != NULL)
    {
        fputs(string, fp);
        fputs("\nI am happy to do this", fp);
    }
    else
    {
        printf("Failed to open the file!\n");
    }

    fclose(fp);
    fp = NULL;

    return 0;
}