#include "1.h"

int main() {
    int i;
    do {
        printf("Enter a number: ");
        scanf("%d", &i);
        addHead(i);
    } while(i != 0);

    while (pop(&i)) {
        printf("%d ", i);
    }
    
    return 0;
}