//Дефинирайте променливи със стойност
//4.9876543, 7.123456789012345678890, 18 398 458 438 583 853.28, 18 398 458 438
//583 853.39875937284928422.
//Изведете всяка променлива на екрана със printf()
#include<stdio.h> 

int main() {

    double number1 = 4.9876543;
    printf("%.7lf\n", number1);

    long double number2 = 7.1234567890;
    printf("%.10Lf\n", number2);

    long double number3 = 18398458438583853.28;
    printf("%.2Lf\n", number3);

    long double number4 = 853.39875937284928422;
    printf("%.16Lf\n", number4);
     
    return 0;
}