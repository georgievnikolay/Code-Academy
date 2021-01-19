//Направете бягаща светлина, като приемете, че всеки бит
//от дадена променлива, е свързан с лампа (или светодиод). Когато битът е
//нула, лампата не свети, когато е единица свети.
#include<stdio.h>

int main() {
    long long int light = 1;
    long long int currLight;

    for (int i = 1; i <= 6; i++) {
        currLight = light;
        
        for (int j = 0; j < 21; j++) {
            if(currLight % 2 == 0) {
                printf(".");
                currLight = currLight >> 1;
            }
            else{
                printf("*");
                currLight = currLight >> 1;
            }
        }
        printf("\n");
        light = light << i;
    }

    return 0;
}
