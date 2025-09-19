#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    int i = -25;
    double x = 81, y = 2.3, z= 7.8, angle = 0.0;   
    
    printf("Square(%.0f) = %.2f \n",x,sqrt(x));   //output = 9;
    
    printf("Power (2, 3) = %2f \n", pow(2,3));    //output = 8

    printf("abs (%d) = %d \n",i, abs(i));     //output = 25;

    printf("ceil (%.2f) = %.2f \n",y, ceil(y));  //output = 3;

    printf("floor (%.2f) = %.2f \n",z, floor(z));  //output = 7;

    printf("sin (0) = %.2f \n",sin(angle));  //output = 7;

    printf("cos (0) = %.2f \n",cos(angle));  //output = 7;

    printf("tan (0) = %.2f \n",tan(angle));  //output = 7;

    return 0;   
}