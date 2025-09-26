#include<stdio.h>

int main(){
    int a = 10;
    int *p;
    int **pp;

    p = &a;
    pp = &p;

    printf("\n value of a = %d",a);  //10

    printf("\n Address of a = %u",&a); // 657572

    printf("\n p stores  = %u (Address of a)",p); //657572

    printf("\n *p (Address of p) = %d",*p); //10

    printf("\n pp stores = %u(Address of p)",pp);

    printf("\n *pp value at pp = %u(address of a)",pp);


}