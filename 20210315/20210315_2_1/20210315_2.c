#include "2.h"

node *first = NULL;
node *last = NULL;

int main() {
    int n = 1;
    while (n) {
        printf("Enter a number: ");
        scanf("%d", &n);
        write(n);
    }

    while(read(&n)) {
        printf("%d ", n);
    }
    
    return 0;
}