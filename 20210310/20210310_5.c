/*Напишете функция, принтираща сигналите, които й се подават.
Обработка на сигнали signal.h (примерът работи само със сигналите на линукс)*/
#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>

void handleSignal(int iSignal)
{
    printf("\nHandle signal %d\n", iSignal);
}

int main()
{
    // struct sigaction sa;
    // sa.sa_handler = &handleSignal;

    //sigaction(SIGQUIT, handleSignal, NULL);
    signal(SIGABRT, handleSignal);
    signal(SIGINT, handleSignal);

    for (;;)
    {
        sleep(1);
    }

    return 0;
}