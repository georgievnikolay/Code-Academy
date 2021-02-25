/*Напишете функциите като макроси:
1. функция AVG(x, y), която смята средното аритметично на две подадени
като параметър числа.
2. функция AVG, която смята средното аритметично на числата от
определен диапазон.
3. Напишете функцията повдигане на степен, която повдига х на степен у
4. Напишете функцията TOUPPER, която прави малката буква а в голяма А
5. Напишете функцията DISP((f), (x)), която показва резултата от функции
връщащи double като корен квадратен. DISP(sqrt, 3.0)
 Макрото трябва да се експандне до printf(“sqrt (%g) = %g\n”, 3.0, sqrt(3.0));*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define AVG1(x,y) (((x)/2) + ((y)/2))

#define AVG(average, x, y) {\
            float span = abs((y) - (x)) + 1;\
            for(float i = (x); i <= (y); i++){\
                average += i / span;\
            }\
        }

#define TOUPPER(c) ((c >= 'a') && (c <= 'z')) ? (c - 32) : (c)

#define POW(x,y) {\
            int temp = x;\
            while(y > 1){\
                x *= temp;\
                y--;\
            }\
            if(y == 0){\
                x = 1;\
            }\
        }

int main()
{
    //1.
    float a = 2.0, b = 6.0;
    printf("Avg of %.f and %.f is: %.2f\n", a, b, AVG1(a,b));
    
    //2.
    float average = 0.0;
    AVG(average, a, b);
    printf("The average of the numbers between %.f and %.f is: %.2f\n", a,b, average);
    
    //3.
    int x = 2, y = 5;
    POW(x,y);
    printf("%d\n", x);

    //4.
    char c = 'a';
    printf("%c to %c\n", c, TOUPPER(c));

    return 0;
}