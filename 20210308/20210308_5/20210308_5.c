/*Напишете програма, която чете числа от един текстов файл и ги записва
в друг текстов файл*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *pfIn = NULL;
    FILE *pfOut = NULL;

    if (argc < 3)
    {
        printf("\nUsage: \n > %s infile.txt outfile.txt\n\n", argv[0]);
    }
    else
    {
        pfIn = fopen(argv[1], "r");
        pfOut = fopen(argv[2], "w");
    }

    if (pfIn != NULL && pfOut != NULL)
    {
        int nValue = 0;
        for (;;)
        {

            fscanf(pfIn, "%d", &nValue);

            fprintf(pfOut, "%d ", nValue);

            if (feof(pfIn))
                break;
        }
    }
    else if (argc >= 3)
    {
        fprintf(stderr, "\nFailed to open IN/OUT files\n");
    }

    if (NULL != pfIn)
        fclose(pfIn);
    if (NULL != pfOut)
        fclose(pfOut);

    return 0;
}
