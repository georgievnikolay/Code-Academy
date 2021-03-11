/*Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void handle_signal(int sig) {
    printf("\nStop not allowed %d\nPress 2 times in 1sec to exit\n", sig);
}

int main() {

    for(;;) {
        signal(SIGINT, handle_signal);
        signal(EOF, handle_signal);
        sleep(1);
    }

    return 0;
}