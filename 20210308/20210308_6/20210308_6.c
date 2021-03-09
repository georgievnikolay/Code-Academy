/*Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори;*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char *c;

    if ((fp = fopen("text.txt", "r")) != NULL)
    {
        while (1)
        {
            fscanf(fp, "%c", c);

            if (feof(fp))
                break;

            printf("%c", *c);
        }
    }
    else
    {
        perror("Failed to open file\n");
    }

    fclose(fp);
    fp = NULL;

    return 0;
}