/*Напишете символ в текстов файл.
Int fputc(int ch, FILE *pfile);
Първият параметър е символът, който искаме да отпечатаме (изразен като
int, т.е. номер в ASCII таблицата), вторият е самия файл, в който ще пишем.
Ако е успешно, функцията връща това, което искаме да изпише.
При грешка функцията връща EOF.
putc () работи със същите аргументи, но е дефинирана като макрос в
стандартната библиотека.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int ch;

    if ((fp = fopen("text.txt", "w")) != NULL)
    {
        for (ch = 33; ch <= 127; ch++)
        {
            fputc(ch, fp);
        }
    }
    else
    {
        printf("Failed to open file!\n");
    }

    fclose(fp);
    fp = NULL;

    return 0;
}