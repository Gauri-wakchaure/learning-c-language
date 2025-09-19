#include<stdio.h>

float average() {
    int a = 10, b = 20, c = 30;   
    float avg = (a + b + c) / 3.0;
    return avg;
}

int main() {
    float result;
    result = average();   
    printf("Average of 3 numbers = %.2f\n", result);  
    return 0;
}
