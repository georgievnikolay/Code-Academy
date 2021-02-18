/*Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.
Примери за анаграми: реклама: карамел; босилек: обелиск.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 20

/*comparison argument for the qsort function*/
int compareChar(const void *pa, const void *pb)
{
    const char *p1 = pa;
    const char *p2 = pb;
    return *p1 - *p2;
}
/*function to check if two sorted strings are anagrams*/
int areAnagrams(char *str1, char *str2)
{
    int flag = 1;
    if (strlen(str1) != strlen(str2))
    {
        return 0;
    }
    while (*str1 != '\0')
    {
        if (*str1 != *str2)
        {
            flag = 0;
            break;
        }
        str1++, str2++;
    }

    return flag;
}
int main()
{
    char string1[] = "kalmar";
    char string2[] = "mamark";
    int stringLen;

    stringLen = strlen(string1);
    qsort(string1, stringLen, sizeof(char), compareChar);

    stringLen = strlen(string1);
    qsort(string2, stringLen, sizeof(char), compareChar);

    if (areAnagrams(string1, string2))
    {
        printf("The strings are anagrams\n");
    }
    else
    {
        printf("The strings are not anagrams\n");
    }
    return 0;
}