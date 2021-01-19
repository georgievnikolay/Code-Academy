//В какъв ред ще се изпълни операторът запетая , ?
#include<stdio.h>

int main() {
    int x = 1, y = 0;
    int z = y || x;

    printf("\nlnin values: X= %d, Y= %d\n", x, y);
    x = 1 + 2, 2 * 3, 3 + 4;
    y = (7 * 8, 8 + 9, 9 - 4);
    printf("\nX= %d, Y= %d\n", x, y); 
    return 0;
}