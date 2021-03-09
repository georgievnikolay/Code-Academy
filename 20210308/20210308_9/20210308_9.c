/*Напишете текст с форматиращ параметър.
int fprint(FILE* stream, const char *forma…);
Първият параметър е файл стрийм, вторият е
форматиращият знак, следван от броя му и т.н.
Форматиращият знак може да е спейс, спецификатор и
т. н.
При успешно изпълнение функцията връща броя на
записаните символи, при грешка връща негативна
стойност.*/
#include <stdio.h>

int main()
{
    FILE *fp = NULL;
    char *string = "Hello World in C!\n";

    if ((fp = fopen("text.txt", "w")) != NULL)
    {
        fprintf(fp, "%s", string);
    }
    else
    {
        printf("Failed to open the file!\n");
    }

    fclose(fp);
    fp = NULL;

    return 0;
}
