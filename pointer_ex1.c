
//pointer is avariable that holds address of the variable

#include<stdio.h>
int main(){
    /* int x = 10, y, z;
    printf("\n Address of x = %u",&x);
    printf("\n Address of y = %u",&y);
    printf("\n Address of z = %u",&z);
    printf("\n Address of x = %d",*(&x));
    return 0; */


    int x = 15;
    int *pr;
    pr = &x;

    printf("\n Address of x= %u",&x);
    printf("\n Address of pr = %u",&pr);

    printf("\n value of x = %d",x);
    printf("\n value of pr = %d",*pr);

    *pr = 20;
    printf("\n Value of x = %d",x);
    return 0;

}