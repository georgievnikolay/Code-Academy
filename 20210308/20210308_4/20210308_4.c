/*Прочетете стринг от създадения файл.
char *fgets(char * str, int nchars, FILE *stream)
 първият параметър е стринг, вторият параметър е брой символи, който
искаме да прочетем, освен ако не стигне терминиращия символ за край
на реда \n или \0 първо, третият е пойнтер към файла*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pf = NULL;
    char str[20];

    if ((pf = fopen("text.txt", "rt")) == NULL)
    {
        perror("Failed to open file");
        exit(-1);
    }

    if (fgets(str, 20, pf) != NULL)
    {
        printf("%s\n", str);
    }

    fclose(pf);
    pf = NULL;

    return 0;
}