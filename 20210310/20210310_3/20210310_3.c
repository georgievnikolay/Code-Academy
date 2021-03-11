/*Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.*/
#include <stdio.h>

#define MAX_LINES 42
int lineNum = 1, pageNum = 1;

void printInFile(FILE* streamIn, FILE* streamOut, char *fname);

int main(int argc, char* argv[])
{
    FILE *fpIn = NULL;
    FILE *fpOut = NULL;

    if((fpIn = fopen("textFormatted.c", "w")) == NULL) {
        perror("Failed to open file1");
    }

    if(argc == 1) {
        printf("\nUsage: > %s filename1 filename2 ... \n", argv[0]);
    } else {

        while(argc > 1) {
            if((fpOut = fopen(*++argv, "r")) == NULL) {

                perror("Failed to open the file2");

            } else {
                printInFile(fpIn, fpOut, *argv);
                fclose(fpOut);
            }
            argc--;
        }
    }
}

void printInFile(FILE* streamIn, FILE* streamOut, char *fname) {
    int c;

    fprintf(streamIn, "HEADER: FILENAME \t\t%s\n", fname);
    lineNum++;

    while(1) {
        c = fgetc(streamOut);

        if(feof(streamOut))
            break;
        
        if(c == '\n') {
            lineNum++;
            if(lineNum % MAX_LINES == 0) {
                fprintf(streamIn, "\n\nPage %d\n\n", pageNum);
                pageNum++;
            }
        }

        fprintf(streamIn, "%c", c);
    }

    while(lineNum % MAX_LINES != 0) {
        fprintf(streamIn, "\n");
        lineNum++;
    }
    fprintf(streamIn, "\n\nPage %d\n\n", pageNum);
}