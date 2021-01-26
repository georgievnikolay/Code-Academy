#include<stdio.h>
#include<string.h>

void reverse(char s[]);

int main() {
    reverse("My name is Nikolay\n and im");

    return 0;

}

void reverse(char s[]) {
    char r[strlen(s)];
    int i;
    for(i = 0; i <= strlen(s); i++) {
        r[i] = s[strlen(s) - i];
        printf("%c", r[i]);
    }
    printf("\n");
}