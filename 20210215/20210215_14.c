/*Решете задачата за генериране на 6 буквена парола с
пойнтери.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void passwordGenerator(char *s);

int main(){
    char password[] = "******";

    char choice;

    do{
        passwordGenerator(password);
        printf("The password is: %s\n", password);
        printf("Do you want to keep it? y/n: ");
        scanf(" %c", &choice);
    }while(choice != 'y');

    printf("You chose the password: %s\n", password);
    return 0;

}

void passwordGenerator(char *s){
    srand(time(0));
    char randomLetter;
    int LettersInTheAlphabet = 26;

    while (*s != '\0'){
        randomLetter = 'a' + (rand() % LettersInTheAlphabet);
        *s = randomLetter;
        s++;
    }
}