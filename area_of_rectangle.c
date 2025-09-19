#include<stdio.h>

void areaofrectangle(int l, int b){
    printf("Area = %d \n",l * b);
    
}
int main(){
 int l, b;
 printf("Enter length of recatangle:");
 scanf("%d",&l);
 printf("Enter breadth of recatangle:");
 scanf("%d",&b);
 areaofrectangle(l,b);

    
return 0;
}