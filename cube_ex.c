#include<stdio.h>

int getcube() {
    int a = 9;
    return a * a * a;
}

int main() {  
    printf("Cube of 7 = %d\n", getcube());
    return 0;
}
