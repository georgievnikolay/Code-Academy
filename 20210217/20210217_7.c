/*Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */
#include <stdio.h>

#define ALPHABET_SIZE 26

char string[] = "The self-study lessons in this section are written and organised according to the levels of the Common European Framework of Reference for languages (CEFR).";

void countLetterEncounters(char *string, int *alphabetArray);
void printAlphabetArray(int array[]);
int isLowerCaseLetter(char symbol);
int isUpperCaseLetter(char symbol);

int main()
{
    int alphabet[ALPHABET_SIZE] = {0};

    countLetterEncounters(string, alphabet);
    printAlphabetArray(alphabet);

    return 0;
}
/*Check if a letter is lowercase*/
int isLowerCaseLetter(char symbol)
{
    if (symbol >= 'a' && symbol <= 'z')
    {
        return 1;
    }
    return 0;
}
/*Check if a letter is uppercase*/
int isUpperCaseLetter(char symbol)
{
    if (symbol >= 'A' && symbol <= 'Z')
    {
        return 1;
    }
    return 0;
}
/*Function to count the letter encounters through a string and store them in another array*/
void countLetterEncounters(char *string, int *alphabetArray)
{
    int positionOfLetter = 0;
    while (*string++ != '\0')
    {
        if (isLowerCaseLetter(*string))
        {
            positionOfLetter = (int)(*string - 'a');
            alphabetArray[positionOfLetter]++;
        }
        else if (isUpperCaseLetter(*string))
        {
            positionOfLetter = (int)(*string - 'A');
            alphabetArray[positionOfLetter]++;
        }
    }
}
/*Function to print the stored in the alphabet array letter encounters*/
void printAlphabetArray(int array[])
{
    int i;
    for (i = 0; i < ALPHABET_SIZE; i++)
    {
        printf("The letter '%c' is found %d times in the string\n", (i + 'a'), array[i]);
    }
}