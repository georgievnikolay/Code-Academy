/*Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define C_KEYWORDS 32
typedef struct
{
    char keyword[11];
    int number;
} t_key;

void printKeywords(t_key*);

int main()
{
    t_key keytab[C_KEYWORDS] = {
        {"auto", 1},        {"break", 2},       {"case", 3},        {"char", 4},
        {"const", 5},       {"if", 6},          {"default", 7},     {"unsigned", 8},
        {"double", 9},      {"else", 10},       {"enum", 11},       {"extern", 12},
        {"float", 13},      {"for", 14},        {"goto", 15},       {"continue", 16},
        {"int", 17},        {"long", 18},       {"return", 19},     {"register", 20},
        {"short", 21},      {"signed", 22},     {"sizeof", 23},     {"static", 24},
        {"struct", 25},     {"switch", 26},     {"typedef", 27},    {"union", 28},
        {"do", 29},         {"void", 30},       {"while", 31},      {"volatile", 32},
    };

    printKeywords(keytab);

    return 0;
}

void printKeywords(t_key* array)
{
    for(int i = 0; i < C_KEYWORDS; i++)
    {
        if(i % 4 == 0)
        {
            printf("\n");
        }
        printf("\t%s\t", array[i].keyword);
    }
}