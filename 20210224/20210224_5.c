/*Задача 5. Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/
#include<stdio.h>

void debugMsg(const char *msg)
{
    #ifdef DEBUG
        #define DEBUGMSG(msg)\
            {printf("DEBUG: %s\n",(msg)); }
    #else
        #define DEBUGMSG(msg)
    #endif
}

int main()
{
    debugMsg("Lalala");

    return 0;
}