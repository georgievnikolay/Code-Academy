/*Напишете функция int getline(char s[],int lim), която чете ред в
s[] и връща дължината му*/
#include<stdio.h>

int getLine(char s[], int lim);

int main() {
    char str[] = "Nikolay\nGeorgiev";
    printf("The number of characters in the first row is: %d\n", getLine(str, 10));
    
    return 0;
    }

int getLine(char s[], int lim) {
    int count = 0, i = 0;

    while((s[i] != '\n') && (i < lim)) {
        count++;
        i++;
    }

    return count;
}