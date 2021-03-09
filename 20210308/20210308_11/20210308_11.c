/*Направете същото ползвайки fgetpos().
int fgetpos(FILE *pfile, fpos_t *position);
Първият параметър е указател към файла, вторият параметър е
указател към стандартен параметър дефиниран в stdio.h
Типа fpos_t може да запише всяка позиция във файла.
Функцията връща 0 при успех и различно от 0 при грешка.
Дефинирайте променлива за fpos_t.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    fpos_t fLen;

    if ((fp = fopen("text.txt", "r")) != NULL)
    {
        fseek(fp, 0, SEEK_END);
        fgetpos(fp, &fLen);
    }
    else
    {
        perror("Failed to open the file");
    }

    printf("The file lenght is %d bytes\n", fLen);

    fclose(fp);
    fp = NULL;

    return 0;
}