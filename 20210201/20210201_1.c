/*Напишете функция, която принтира низ, пойнтера към
началото му е подаден като аргумент на функцията void printstr(char *s); Не
забравяйте, низът винаги завършва с знак за терминираща нула '\0', затова
проверката в цикъла, който принтира всеки чаръктър, трябва да е докато не
се стигне този знак.*/
#include<stdio.h>

void printstr(char *s);

int main() {
    char str[]="Hello World";
    char *p = str;
    printstr(str);
    return 0;
}

void printstr(char *s) {
    while(*s != '\0') {
        putchar(*s);
        *s++;
    }

    return;
}