/*Напишете стандартната програма за Linux cat , която приема като
аргументи от командния ред имена на файлове и изкарва съдържанието
им на стандартния изход. Ако на програмата не са подадени никакви
аргументи, то тя да изкара съдържанието подадено от стандартния вход
на стандартния изход.*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp = NULL;

    if (argc < 2)
    {
        printf("\nUsage:\n > %s filename.txt\n", argv[0]);
    }
    else
    {
        fp = fopen(argv[1], "r");
    }

    if (fp != NULL)
    {
        char c;

        while (1)
        {
            c = fgetc(fp);
            printf("%c", c);

            if (feof(fp))
                break;
        }
    }

    fclose(fp);
    fp = NULL;

    return 0;
}