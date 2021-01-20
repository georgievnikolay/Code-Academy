#include<stdio.h>

int main() {
    int a, b, sum = 0;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    while (a <= b)
    {
        //printf("%d\n", a);
        sum += a;
        a++;
    }
    printf("The sum of the integers from a to b is: %d\n", sum);

    return 0;
    
}