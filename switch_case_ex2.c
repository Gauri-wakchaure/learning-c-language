#include<stdio.h>

int main(){
    int num1, num2;
    char op;
    printf("Enter First Number: ");
    scanf("%d",&num1);
    printf("Enter Second Number: ");
    scanf("%d",&num2);
    
    printf("Which Operation to Perform (+, -, *, /): ");
    scanf(" %c",&op);
 

    switch (op)
    {
        case '+':printf("Sum = %d\n", num1+num2);
            break;
        case '-':printf("Difference= %d\n", num1-num2);
            break;
        case '*': printf("Multiplication = %d\n", num1*num2);
            break;
        case '/':printf("Division = %d\n", num1/num2);
            break;
        default:printf("Invalid Charcater");
    }
    return 0;

}