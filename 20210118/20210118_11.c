// Increment / decrement operators
#include<stdio.h>

int main() {
    int iCounter = 0;

    while (++ iCounter < 3) {
        printf("Counter %d\n", iCounter);
        printf("++ Counter: %d\n", ++ iCounter);
        printf("-- Counter: %d\n", -- iCounter);
        printf("Counter++ : %d\n", iCounter++);
        printf("Counter--: %d\n",  iCounter--);
    }
    /* Какво става, ако се препълни броячът? */

    // Получава се безкраен цикъл

  /*char cCounter = 0;
  while (++cCounter < 130) {
        printf("%d\n", cCounter);
    }
    printf("%d\n", cCounter);
    */

    return 0;
}
