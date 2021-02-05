/*Напишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.*/
#include<stdio.h>
#include<string.h>
#include<math.h>

void reverse(char *s);
void itoa(int n, char *s);
int atoi(char *s);
double atof(char *s);

int main(){

    /*тестваме itoa и reverse*/
    int n = 123;
    char str[4];

    
    itoa(n, str);
    reverse(str);
    printf("\nFunction itoa and reverse converting the number %d into string \"%s\"\n",n, str);

    /*Тест със atoi функцията*/
    char str2[] = "123";

    int number = atoi(str2);
    printf("\nFunction atoi convering a string \"%s\" to an integer %d\n", str2, number);

    /*Тест с функцията atof*/
    char str3[] = "23.456";

    double num = atof(str3);
    printf("\nFunction atof converting a string \"%s\" into a double %f\n", str3, num);

    return 0;
}

void reverse(char *s){
    char temp, *end;
    int len = strlen(s) - 1, i = 0;
    
    end = s;

    for(;i < len; i++){
        end++;
    }

    i = 0;
    while(i++ < (len / 2)){
        
        temp = *s;
        *s = *end;
        *end = temp;
        s++, end--;
    }
}

void itoa(int n, char *s){

    do {
        *s = (n % 10) + '0';
        n /= 10;
        s++;
    } while (n != 0);

    return;
}

int atoi(char *s){
    int i = 0, power = 1, n = 0;
    int c;

    for(; i < strlen(s); i++){
        s++;
    }
    
    while(i >= 0){
        c = *s - '0';
        n += c * power;
        power *= 10;
        i--, s--;
    }
    
    return n;
}

double atof(char *s){
    double number = 0.0, power = 10.0;
    int counter = 0, i = 0;

    while (s[i] != '.') {
        i++;
    }
    counter = i - 1;
    
    
    while(*s != '\0'){
        if (counter >= 0) {
            while (*s != '.') {
                number += (*s - '0') * pow(10, counter);
                s++, counter--;
            }
            s++;
        }
        else{
            number += (*s - '0') / power;
            power *= 10;
            s++;
        }
    }

    return number;
}