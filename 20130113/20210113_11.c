/*Създайте С програма, която калкулира стойността на покупки в магазин за
хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
магазина има следните налични продукти и цени:
Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.
Указания:
Помислете какви променливи ще дефинирате?
Помислете в каква последователност ще изпълнявате действията?
В момента няма да проверяваме въведените стойности от клиента.
printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати,
брашно, кисело мляко, сладолед на фунийки и близалки.\n");
printf("Колко килограма домати ще желаете? ");
scanf("%f",&fTomatoWeight);
float fTomatoTotal = fTomatoWeight*fTomatoPrice;*/
#include<stdio.h>

int main() {
    float fTomatoPrice = 4.5, fTomatoWeight;
    float fFlourPrice = 1.8, fFlourWeight;
    float fYogurtPrice = 0.5;
    float fIceCreamConesPrice = 0.6;
    float fCandyPrice = 1.5, fCandyWeight;
    float fLollyPopPrice = 0.15;
    int iYogurtNumber, iLollyPopNumber, iIceCreamConesNumber;

    printf("Wellcome to  our store! Today we have fresh tomatos, flour, yogurt, ice cream cones, candy and lolly pops\n");
    printf("How many kg of tomatos you would like? ");
    scanf("%f",&fTomatoWeight);
    float fTomatoTotal = fTomatoWeight*fTomatoPrice;

    printf("How many kg of flour you would like? ");
    scanf("%f",&fFlourWeight);
    float fFlourTotal = fFlourPrice * fFlourWeight;

    printf("how much yogurt you would like? ");
    scanf("%d",&iYogurtNumber);
    float fYogurtTotal = fYogurtPrice * iYogurtNumber;

    printf("How much ice cream cones you would like? ");
    scanf("%d",&iIceCreamConesNumber);
    float fIceCreamConesTotal = fIceCreamConesPrice * iIceCreamConesNumber;

    printf("How many kg of candy you would like? ");
    scanf("%f",&fCandyWeight);
    float fCandyTotal = fCandyPrice * fCandyWeight;

    printf("How many lolly pops you would like? ");
    scanf("%d",&iLollyPopNumber);
    float fLollyPopTotal = fLollyPopPrice * iLollyPopNumber;

    float totalBill = fTomatoTotal + fFlourTotal + fYogurtTotal + fIceCreamConesTotal + fCandyTotal + fLollyPopTotal;
    printf("Your total bill is: %.2fbgn \n", totalBill);

    return 0;
}