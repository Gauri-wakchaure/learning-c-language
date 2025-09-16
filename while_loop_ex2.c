#include<stdio.h>

int main(){
    int number = 456;
    int sum_of_digits = 0;
    int last_digit;

    // Loop continues as long as the number is greater than 0
    while (number > 0)
    {
        // Get the last digit of the number
        last_digit = number % 10; 
        
        // Add the last digit to the sum
        sum_of_digits = sum_of_digits + last_digit; 
        
        // Remove the last digit from the number
        number = number / 10;
    }
    
    printf("The sum of the digits is: %d\n", sum_of_digits);
    
    return 0;
}