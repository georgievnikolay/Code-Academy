/*Напишете програма, която да обръща всички символи в
текстов файл, с главни букви запишете резултата в друг
временен файл. След това преименувайте новия файл
с името на оригиналния файл и изтрийте временното
име. Отпечатайте съдържанието на файл на
стандартния изход с главни букви.*/
#include <stdio.h>

int isLowercase(char c)
{
    int lowercaaseBegin = 97;
    int lowercaseEnd = 122;

    if (c >= lowercaaseBegin && c <= lowercaseEnd)
    {
        return 1;
    }

    return 0;
}

int main()
{
    FILE *fp = NULL;
    FILE *fpTo = NULL;
    int lowerToUpperDifference = 32;
    char c;

    if ((fp = fopen("text.txt", "r")) != NULL && (fpTo = fopen("textUppercase.txt", "w")) != NULL)
    {
        while (1)
        {
            c = getc(fp);

            if (feof(fp))
                break;

            if (isLowercase(c))
            {
                c -= lowerToUpperDifference;
            }

            fprintf(fpTo, "%c", c);
        }
    }
    else
    {
        perror("Failed to open the file\n");
    }

    fclose(fp);
    fp = NULL;
    fclose(fpTo);
    fpTo = NULL;

    remove("text.txt");
    rename("textUppercase.txt", "text.txt");

    return 0;
}