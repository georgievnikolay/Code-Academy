#include<stdio.h>

char *month_name(int n);

int main(){
    int n;

    printf("Enter a number of a month: ");
    scanf("%d", &n);

    printf("The month is: %s\n", month_name(n));

    return 0;
}

char *month_name(int n){

    static char *name[] = {
        "Illegal month", "January", "Februrary", "March",
        "April", "May", "June", "July", "August",
        "Septmber", "October", "November", "December"};

    if(n < 1 || n > 12){
        return name[0];
    }
    else{
        return name[n];
    }
}