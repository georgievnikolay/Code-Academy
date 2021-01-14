/*Представете си, че имате фирма за отдаване на каравани и кемпери под
наем, за която трябва да разработите софтуер. Вие сте малка фирма и имате
общо 3 каравани на цена 90 лв. на ден и 3 кемпера на цена 100 лв. на ден.
Декларирайте променливи за броя на караваните, цената на караваните, броя на
кемперите и цената им. Направете меню, което пита клиента каравана или
кемпер ще иска: printf("Dobre doshli v Karavani Kempeti pod naem\n");
printf("Ako zelaete karavana natisnete 1\n");
printf("Ako zelaete kemper natisnete 2\n");
Направете една променлива int rez; , в която да запишем резултатът от неговия
избор. Това става с функцията scanf("%d", &rez); , която взима числото, което
потребителят е въвел на конзолата.*/
#include<stdio.h>

int main() {
    char karavani = 3;
    char kemperi = 3;
    char karavanaPrice = 90;
    char kemperPrice = 100;
    char rez;

    printf("Dobre doshli v Karavani Kempeti pod naem\n");
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &rez);

    return 0;
}