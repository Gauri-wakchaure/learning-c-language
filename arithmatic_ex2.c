#include<stdio.h>
int main(){

    int appleQty,oilQty,milkQty;
    int applePrice,oilPrice,milkPrice;
    int total;
    int paid;
    applePrice = 100;
    oilPrice = 50;
    milkPrice = 30;

    printf("Enter Quantity og apple (kg)");
    scanf("%d" ,&appleQty);
    printf("Enter Quantity og apple (kg)");
    scanf("%d" ,&oilQty);
    printf("Enter Quantity og apple (kg)");
    scanf("%d" ,&milkQty);

    total = (appleQty * applePrice) + (oilQty * oilPrice) +  (milkQty * milkPrice);
    printf("Total bill amount : %d \n",total);

    return 0;
}