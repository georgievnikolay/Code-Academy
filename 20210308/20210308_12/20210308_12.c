/*Изместете позицията си във файла 7 байта след началото, ползвайки fseek.
int fseek(FILE *pfile, long offset, int original);
Първият параметър е указател към файла, вторият и третият параметър
оказват къде точно искаме да отидем във файла.
Референтни точки с предварително дефинирани имена:
SEEK_SET- началото на файла
SEEK_CUR- текуща позиция
fseek(fp, -10L, SEEK_CUR); връща на зад от текупата 10 bytes.
SEEK_END- края на файла
fseek(fp,0L, SEEK_END);
При текстови файлове, вторият аргумент трябва да е стойността върната от
ftell()
За текстови файлови третият аргумент трябва да е SEEK_SET, за бинарни
файлове и просто число в байтове.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int offset = 7;
    char c;

    if ((fp = fopen("text.txt", "r")) != NULL)
    {
        fseek(fp, offset, SEEK_SET);
        c = fgetc(fp);
    }
    else
    {
        perror("Failed to open the file");
    }

    printf("%c\n", c);

    fclose(fp);
    fp = NULL;

    return 0;
}