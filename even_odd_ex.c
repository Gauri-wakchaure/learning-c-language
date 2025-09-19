#include<stdio.h>

int isEven(int num) {
    return (num%2==0);   
}

int main() {
    if(isEven(11)){
        printf("Even");
    }else{
        printf("Odd");
    }
    return 0;
}
