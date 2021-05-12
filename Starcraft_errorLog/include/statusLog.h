#ifndef STATUSLOG_H_
#define STATUSLOG_H_

#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

#define LOG_FILE "../log_file.txt"
#define LINE_DIFFERENCE 1

#define CHECK_ALLOCATION_ERROR(ptr)\
        if ((ptr) == NULL) {\
            printf("Failed to allocate memory!\n");\
            exit(ENOMEM);\
        }

#define LOG_ERROR(FILE_PTR) {\
    if (errno == 0) {\
        fprintf(FILE_PTR, "FUNCTION \'%s\' IN FILE \'%s\' AT LINE %d HAS ERROR CODE %d: %s\n", functionName, file, line, errno, "Succsessfull");\
    } else {\
        fprintf(FILE_PTR, "FUNCTION \'%s\' IN FILE \'%s\' AT LINE %d HAS ERROR CODE %d: %s\n", functionName, file, line, errno, strerror(errno));\
    }\
}

#define SET_LOG_VARIABLES {\
        functionName = __func__;\
        line = __LINE__ - LINE_DIFFERENCE;\
        file = __FILE__;\
}

FILE* statusLogFile;
const char* functionName;
int line;
char* file;

void logFileOpen(void);
void logFileClose(void);

#endif /* STATUSLOG_H_ */