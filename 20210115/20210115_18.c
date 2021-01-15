//Довършете задачата за кемперите от миналия път като добавите
//променлива, в която да се събират парите, които клиента дължи на компанията.
//Принтирайте резултата. Питайте клиента дали иска още налични продукти.
#include<stdio.h>

int main() {
    char karavani = 3;
    char kemperi = 3;
    char karavanaPrice = 90;
    char kemperPrice = 100;
    int rez, bill = 0;

    printf("Dobre doshli v Karavani Kemperi pod naem\n");
    
    printf("Kolko karavani jelaete? \n");
    scanf("%d", &rez);
    bill += rez * karavanaPrice;
    
    printf("Kolko kempera jelaete? \n");
    scanf("%d", &rez);
    bill += rez * kemperPrice;

    printf("Vashata smetka e %d\n", bill);
    printf("Jelaete li oshte produkti?\n");


    return 0;
}