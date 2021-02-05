/*Напишете функцията size_t my_strlen(char *s), която връща
дължината на стринга подаден в нея. Итерирайте по масива докато стигнете
знака за край на стринг '\0'. Увеличавайте в една променлива от тип size_t
стойността и за всяка итерация.size_t обикновено е unsignet long int като
размер. Върнете променливата като резултат от функцията.*/
#include<stdio.h>

unsigned long int my_strlen(char *s);

int main() {
    char arr[] = "Nikolay Georgiev";

    printf("The string \"%s\" has %u chars\n", arr, my_strlen(arr));

    return 0;
}

unsigned long int my_strlen(char *s){
    unsigned long int size_t = 0;

    while (*s != '\0') {
        size_t++;
        s++;
    }
    return size_t;
}