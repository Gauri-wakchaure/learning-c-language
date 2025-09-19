#include<stdio.h>
#define PI 3.14   

float areaofcircle(){
    float radius = 7;
    return PI * radius * radius;
}

int main(){
    printf("Area of circle = %.2f \n", areaofcircle());
    return 0;
}
