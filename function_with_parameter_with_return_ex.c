//function with parameter and return
#include<stdio.h>

int add(int a, int b){
    return a + b;
}

int main(){
    int x = 6, y = 10;
    int result = add(x, y);
    printf("Sum = %d", result);
    return 0;
}
