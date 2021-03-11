/*Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/
#include <stdio.h>

int main()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;

    int lineCounter = 1;
    int a, b;

    if((fp1 = fopen("file1.txt", "r")) != NULL && (fp2 = fopen("file2.txt", "r")) != NULL)
    {
        while(1)
        {
            a = fgetc(fp1);
            b = fgetc(fp2);

            if(a == '\n' && b == '\n')
            {
                lineCounter++;
            }

            if(a != b)
            {
                printf("Difference in line %d\n", lineCounter);
                break;
            }

            if(feof(fp1) && feof(fp2))
                break;
        }
    }
    else
    {
        perror("Failed to open the file")
    }

    fclose(fp1);
    fp1 = NULL;
    fclose(fp2);
    fp2 = NULL;

    return 0;
}