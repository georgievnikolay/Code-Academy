/*Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/
#include<stdio.h>
#include<string.h>

void reverse(char s[]);

int main() {
    char str[] = "Nikolay";
    
    reverse(str);
    printf("%s\n", str);
    
    return 0;
}

void reverse(char s[]) {
    int i = 0, j = 0;
    char temp;

    for(i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    return;
}