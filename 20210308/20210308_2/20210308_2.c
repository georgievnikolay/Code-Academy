#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pfile = NULL;
    char *filename = "test";

    pfile = fopen("test.txt", "w+");

    if (pfile == NULL)
    {
        printf("Failed to opren %s.\n", filename);
    }
    else
    {
        printf("File %s opened successfully\n", filename);
    }

    fprintf(pfile, "Hello World!\nabcd\n");

    fclose(pfile);
    pfile = NULL;

    rename("test.txt", "test_copy.txt");

    if (!rename("test.txt", "test_copy.txt"))
    {
        printf("Failed to raname the file\n");
    }
    else
    {
        printf("File renamed successfully\n");
    }

    return 0;
}