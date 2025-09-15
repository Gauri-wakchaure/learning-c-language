#include<stdio.h>

int main(){
    int amount;
    printf("Enter your Shopping Amount:");
    scanf("%d",&amount);

    if(amount>499){
        printf("Congrats , You get Free Delivery");    
    }
    else{
        printf("Delivery Charges Will Apply");
    }
}