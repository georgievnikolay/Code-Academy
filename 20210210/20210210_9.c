/*Решете задачата за генериране на 6 буквена парола с
пойнтери.*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void passGen(char *s);

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

void passGen(char *s){
    srand(time(0));
    char randomLetter = 'a';

    while(*s != '\0'){
        *s = randomLetter + (rand() % 26);
        s++;
    }
    return;
}

/*Нямам идея защо while цикъла ми вади съобщенията по този начин, 
вчера като си я направих задачата всичко си вадеше последователно и без проблем, 
а днес започна да ми прави тези номера*/