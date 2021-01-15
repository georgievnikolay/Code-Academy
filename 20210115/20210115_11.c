//Ако имаме символен низ от символа char str[] = “Hello”;
//копирайте всеки един от неговите символи в низ, който да изглежда
//огледален на него. Ето така char rts[] = “ollaH”; и принтирайте
//резултата.
#include<stdio.h>

int main() {
    char str[] = "Hello";
    char rts[] = "Hello";

    for(int i = 0; i < 5; i++) {
        rts[i] = str[4 - i];
        //printf("%s\n", rts);
    }

    printf("The reversed string %s looks like this : %s \n", str, rts);
    return 0;
}