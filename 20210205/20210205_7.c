/*Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/
#include<stdio.h>
#include<string.h>

int strend(char *s, char *t);

int main(){
    char arr1[] = "Nikolay";
    char arr2[] = "lay";
    char arr3[] = "nay";

    printf("Is \"%s\" at the end of \"%s\"? %d\n", arr2, arr1, strend(arr1, arr2));
    printf("Is \"%s\" at the end of \"%s\"? %d\n", arr3, arr1, strend(arr1, arr3));

    return 0;
}

int strend(char *s, char *t){
    int len1 = strlen(s);
    int len2 = strlen(t);

    while (len2 >= 0) {
        
        if(s[len1] != t[len2]){
            return 0;
        }
        len1--, len2--;
    }
    return 1;
}