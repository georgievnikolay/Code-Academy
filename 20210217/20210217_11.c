/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции. */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 20

/*Functions to generate random Uppercase and Lowercase letters, numbers and symbols*/
char rendomUpperCaseGenerator();
char randomLowerCaseGenerator();
char randomNumberGenerator();
char randomSymbolGenerator();

int main()
{
    srand(time(0));

    char password[MAX];
    char *passPtr = password;

    int passwordLen;
    printf("Enter the lenght of the password: ");
    scanf("%d", &passwordLen);

    passPtr = (char *)malloc(passwordLen * sizeof(char));

    char (*functonPinter)();
    int i, whatSymbolToGenerate, typesOfSymbols = 4;

    for (i = 0; i < passwordLen; i++)
    {
        whatSymbolToGenerate = rand() % typesOfSymbols;

        /*Randomly choose what symbol to generate*/
        switch (whatSymbolToGenerate)
        {
        case 0:
            functonPinter = &randomLowerCaseGenerator;
            break;
        case 1:
            functonPinter = &rendomUpperCaseGenerator;
            break;
        case 2:
            functonPinter = &randomNumberGenerator;
            break;
        case 3:
            functonPinter = &randomSymbolGenerator;
            break;
        default:
            break;
        }
        /*assign the symbol to current position in the array*/
        password[i] = functonPinter();
    }

    for (int i = 0; i < passwordLen; i++)
    {
        printf("%c", password[i]);
    }

    return 0;
}

char rendomUpperCaseGenerator()
{
    int alphabetLen = 26;

    return (rand() % alphabetLen) + 'A';
}

char randomLowerCaseGenerator()
{
    int alphabetLen = 26;

    return (rand() % alphabetLen) + 'a';
}

char randomNumberGenerator()
{
    int numbersLen = 10;

    return (rand() % numbersLen) + '0';
}

char randomSymbolGenerator()
{
    int symbolsIntervals = 4;
    int intervalLen;
    char randomSymbol, firstSymbolInTheInterval;

    int randomInterval = rand() % symbolsIntervals;
    switch (randomInterval)
    {
    case 0: /*first symbol interval from 33 to 48 in the ASCII table*/
        intervalLen = 15;
        firstSymbolInTheInterval = '!';
        randomSymbol = (rand() % intervalLen) + firstSymbolInTheInterval;
        break;
    case 1: /*second symbol interval from 58 to 65 in the ASCII table*/
        intervalLen = 7;
        firstSymbolInTheInterval = ':';
        randomSymbol = (rand() % intervalLen) + firstSymbolInTheInterval;
    case 2: /*third symbol interval from 91 to 97 in the ASCII table*/
        intervalLen = 6;
        firstSymbolInTheInterval = '[';
        randomSymbol = (rand() % intervalLen) + firstSymbolInTheInterval;
    case 3: /*last symbol interval from 123 to 127 in the ASCII table*/
        intervalLen = 4;
        firstSymbolInTheInterval = '{';
        randomSymbol = (rand() % intervalLen) + firstSymbolInTheInterval;
    default:
        break;
    }

    return randomSymbol;
}
