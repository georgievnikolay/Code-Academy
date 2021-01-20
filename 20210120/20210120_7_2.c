#include<stdio.h>

int main() {
    printf(" Press 1 to see message Hello\n Press 2 to see Poem\n Press 3 to see hidden message\n");
    int m = 0;
    scanf("%d", &m);

    switch(m) {
        case 1:
            printf("hello world\n");
            break;
        case 2:
            printf("Mary had a little lamb,\nIts fleece was white as snow;\nAnd everywhere that Mary went\nThe lamb was sure to go.\n");
            break;
        case 3:
            printf("48\n");
            break;
    }
    return 0;
}