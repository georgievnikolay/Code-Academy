/* Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].*/
#include<stdio.h>
#include<string.h>

void itob(int n, char s[], int b);
void reverse(char s[]);

int main() {
    int n = 256;
    char str[10];

    itob(n, str, 2);

    return 0;
}

void itob(int n, char s[], int b) {
    int i = 0, rem;

    while(n != 0) {
        rem = n % b ;

        switch (rem)
        {
        case 10:
            s[i] = 'A';
            break;
        case 11:
            s[i] = 'B';
            break;
        case 12:
            s[i] = 'C';
            break;
        case 13:
            s[i] = 'D';
            break;
        case 14:
            s[i] = 'E';
            break;
        case 15:
            s[i] = 'F';
            break;
        default:
            s[i] = rem + '0';
            break;
        } 
        
        n /= b;
        i++;
    }

    reverse(s);
    printf("%s\n", s);

    return;
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