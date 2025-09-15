#include<stdio.h>

int main(){
 
    int x, y, z;

    printf("Enter X value:");
    scanf("%d", &x);
    printf("Enter Y value:");
    scanf("%d", &y);
    printf("Enter Z value:");
    scanf("%d", &z);

    printf("Logical Operation Result:-");
    printf("AND result : %d \n", (x>5 && y<10 && z>15));  //AND
    printf("OR result : %d \n", (x>5 || y<10 || z>15));   //OR
    printf("NOT result : %d \n", !(x > y > z));     //NOT

    return 0;
}
