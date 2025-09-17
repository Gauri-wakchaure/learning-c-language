#include<stdio.h>

int main(){
    int number = 456;
    int sum_of_digits = 0;
    int last_digit;

    while (number > 0)
    {
        last_digit = number % 10; 
        sum_of_digits = sum_of_digits + last_digit; 
        number = number / 10;
    }
    
    printf("The sum of the digits is: %d\n", sum_of_digits);
    
    return 0;
}