#include "statusLog.h"

void logFileOpen(void) {
    statusLogFile = fopen(LOG_FILE, "w+");
    if(statusLogFile == NULL) {
        printf("Failed to load the log file\n");
        exit(EXIT_FAILURE);
    }
}

void logFileClose(void) {
    fclose(statusLogFile);
    statusLogFile = NULL;
}

