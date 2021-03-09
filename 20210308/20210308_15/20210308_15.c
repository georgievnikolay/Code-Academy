/*Напишете програма, която печата съдържанието на файл в обратен
ред.
Използвайте fseek функцията, за да отидете накрая на файла.
Използвайте ftell функцията, за да намерите позицията на пойнтера.
Покажете на екран файла, обърнат в обратен ред.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    int i = 0;
    int position;

    if ((fp = fopen("text.txt", "r")) != NULL)
    {
        fseek(fp, 0, SEEK_END);
        position = ftell(fp);

        while (i <= position)
        {
            printf("%c", fgetc(fp));

            i++;

            fseek(fp, -i, SEEK_END);
        }
    }
    else
    {
        perror("Failed to open file");
    }

    fclose(fp);
    fp = NULL;

    return 0;
}