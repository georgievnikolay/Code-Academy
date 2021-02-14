/*Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет.
*/
#include<stdio.h>
#include<string.h>

void my_bubbleSort(char s[]);

int main(){

    char arr[] = "aknweoafjkwke";

    my_bubbleSort(arr);

    int i = 0;
    while (arr[i] != '\0'){
        printf("%c ", arr[i]);
        i++;
    }
    return 0;

}

void my_bubbleSort(char *s){
    int len = strlen(s);
    int i, j;
    char temp;

    for(i = 0; i < len - 1; i++){
        for(j = 0; j < len - 1 - i; j++){
            if(s[j] > s[j + 1]){
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }
    return;
}