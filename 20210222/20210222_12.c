/*Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1).*/
#include<stdio.h>
#pragma pack(1)

typedef struct
{
    short iValue : 3;
    char cValue : 6;
} bitFieldStruct;

typedef struct
{
    short iVar1 : 4;
    short iVar2;
    unsigned char cVar1 : 7;
    char cVar2;
}SecondBitFieldStruct;

int main(){
    bitFieldStruct test = {7, 'c'};
    
    printf("INT: %d\n", test.iValue);
    printf("STR: %c\n", test.cValue);
    printf("The size of the structure is: %d\n", sizeof(bitFieldStruct));
    /*не може да се принтира 7(1011)само с 3 бита нито 'c'(110 0011) само с 6 бита и компилатора 
    дава Warning за overflow*/

    SecondBitFieldStruct test2 = {7, 20, 'a', 'z'};
    printf("INT1: %d\t INT2: %d\n", test2.iVar1, test2.iVar2);
    printf("STR1: %c\t STR2: %c\n", test2.cVar1, test2.cVar2);
    printf("The size of the structure is: %d\n", sizeof(SecondBitFieldStruct));
    return 0;
}