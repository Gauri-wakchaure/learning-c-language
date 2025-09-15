#include<stdio.h>

int main(){
    int num1, num2;
    printf("Enter 1st Number:");
    scanf("%d",&num1);
    printf("Enter 2nd Number:");
    scanf("%d",&num2);

    printf("\n num1 + num2 = %d" , num1 + num2);
    printf("\n num1 - num2 = %d" , num1 - num2);
    printf("\n num1 * num2 = %d" , num1 * num2);
    printf("\n num1 / num2 = %d" , num1 / num2);
    printf("\n num1 %% num2 = %d" , num1 % num2);

    return 0;
}