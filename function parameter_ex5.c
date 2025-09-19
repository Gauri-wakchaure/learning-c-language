#include<stdio.h>

void Calper(int totalmarks, int obtainedmarks){
    float percentage=(( obtainedmarks* 100)/totalmarks);
    printf("Percentage = %2f \n",percentage);
    
}
int main(){
 int totalmarks, obtainedmarks;
 printf("Enter total marks:");
 scanf("%d",&totalmarks);
 printf("Enter obtained marks:");
 scanf("%d",&obtainedmarks);
 Calper(totalmarks,obtainedmarks);

    
return 0;
}