/*Напишете програма, която премахва от файл номер на ред и
премахва този ред от файла. (Hint: Не трийте от оригиналния файл, а
запишете съдържанието на файла без конкретния ред в друг файл).*/
#include <stdio.h>

int main()
{
    int lineToBeRemoved = 2;
    int currentLine = 0;
    char c;
    FILE *fp = NULL;
    FILE *nfp = NULL;

    if ((fp = fopen("text.txt", "r")) != NULL && (nfp = fopen("newText.txt", "w")) != NULL)
    {
        while (1)
        {
            c = fgetc(fp);

            if (c == '\n')
                currentLine++;

            if (currentLine == lineToBeRemoved)
                continue;

            if (feof(fp))
                break;

            fprintf(nfp, "%c", c);
        }
    }
    else
    {
        perror("Failed to open the file");
    }

    printf("%d", currentLine);

    fclose(fp);
    fp = NULL;
    fclose(nfp);
    nfp = NULL;

    return 0;
}