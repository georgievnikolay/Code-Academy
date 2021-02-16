/*Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/
#include<stdio.h>
#include<string.h>

void swap(char *a, char *b);
int partiton(char s[],  int low, int high);
void qsort(char s[], int low, int high);

int main(){
    char string[] = "asdfghjklertyui";

    
    qsort(string, 0, 14);

    
    printf("%s\n", string);

    return 0;
}

void swap(char *a, char *b){
    char *temp;
    *temp = *a;
    *a = *b;
    *b = *temp;
}
int partiton(char s[],  int low, int high){
    char pivot = s[high];
    int i = low - 1, j;

    for(j = low; j < high; j++){
        if(s[j] <= pivot){
            i++;
            swap(&s[i], &s[j]);
        }
    }
    i++;
    swap(&s[i], &s[high]);

    return i;
}
void qsort(char s[], int low, int high){
    if(low < high){

        int pi = partiton(s, low, high);

        qsort(s, low, pi - 1);
        qsort(s, pi + 1, high);
    }
}
