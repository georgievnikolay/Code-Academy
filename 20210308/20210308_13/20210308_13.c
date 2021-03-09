/*Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int countLines = 0;
    char c;

    if ((fp = fopen("text.txt", "r")) != NULL)
    {
        while (1)
        {
            if (c = fgetc(fp) == '\n')
            {
                countLines++;
            }

            if (feof(fp))
            {
                countLines++;
                break;
            }
        }
    }

    printf("the file has %d lines\n", countLines);

    fclose(fp);
    fp = NULL;

    return 0;
}