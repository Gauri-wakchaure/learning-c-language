#include<stdio.h>

int main(){
 
    int x, y;

    printf("Enter X value:");
    scanf("%d", &x);
    printf("Enter Y value:");
    scanf("%d", &y);

    printf("Logical Operation Result:-");
    printf("AND result : %d \n", (x>5 && y<10));  //AND
    printf("OR result : %d \n", (x>5 || y<10));   //OR
    printf("NOT result : %d \n", !(x > y ));     //NOT

    return 0;
}
