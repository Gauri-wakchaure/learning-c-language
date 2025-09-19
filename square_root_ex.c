#include<stdio.h>

int SquareRoot() {
    int num = 25;   
    int i;

    for(i = 1; i * i <= num; i++) {
        if(i * i == num) {
            return i;   
        }
    }
    return 0;   
}

int main() {
    int result;
    result =SquareRoot();   
    printf("Square root = %d \n", result);
    return 0;
}
