/*Намерете позицията си във файла.
long ftell(FILE *pfile);
Функцията приема указател към файла като параметър и връща long
int, който отговаря на позицията във файла.
Дефинирате променлива
long fpos = ftell(pfile)
Променливата съхранява текущата ви позицията в байтове от
началото на файла и вие можете да се върнете на нея по всяко
време.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int fLen;

    if ((fp = fopen("text.txt", "r")) != NULL)
    {
        fseek(fp, 0, SEEK_END);
    }
    else
    {
        perror("Error opening the file");
        return (-1);
    }

    fLen = ftell(fp);
    printf("The size of the file is %d bytes\n", fLen);

    fclose(fp);
    fp = NULL;

    return 0;
}