#include<stdio.h>

void lowestCommonMultiple() {
    int a = 1, b = 2;
    int lcm;

    /*определяме по-голямото от двете числа*/ 
    if(a >= b) {
        lcm = a;
    }
    else {
        lcm = b;
    }

    /*проверяваме дали двете числа го делят с остатък 0 и увеличаваме ако не го*/
    while (1) {
        if ( (lcm % a == 0) && (lcm % b == 0)) {
            printf("The lowest common divisor of %d and %d is: %d\n", a, b, lcm);
            break;
        }
        lcm++;
    }
    return;
}

float absolute(float number) {
    return number < 0 ? number * (-1) : number;
}

float squareNum(float number) {
    if(number < 0) {number = absolute(number);}
    
    float i;
    for(i = 0.01; i * i < number; i += 0.01);

    return i;
}