/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void passGen(char s[]);

int main(){
    char pass[] = "******";
    char choice;

    while(1){
        passGen(pass);
        printf("Your new password is: \"%s\"\n", pass);
        printf("Do you want to keep it? y/n:");
        scanf("%c", &choice);

        if(choice == 'y'){
            break;
        }
    }
        
    

    return 0;
}

void passGen(char s[]){
    srand(time(0));
    char randomLetter = 'a';
    int i = 0;
    while(s[i] != '\0'){
        s[i] = randomLetter + (rand() % 26);
        i++;
    }
    return;
}

/*Нямам идея защо while цикъла ми вади съобщенията по този начин, 
вчера като си я направих задачата всичко си вадеше последователно и без проблем, 
а днес започна да ми прави тези номера*/