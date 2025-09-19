#include<stdio.h>

int maxofThree(){
    int a=100, b=25, c=15;
     if(a>b && a>c){
        return  a;
    }else if (b>c)
    {
      return b;
    }else{
        return c;
    }  
}
int main(){
    printf("Maxof Three is = %d \n",maxofThree());
}
    


    
        