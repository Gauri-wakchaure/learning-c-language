#include<stdio.h>
//Find Maximum value
int main(){
     int number[5] = {12,65,90,26,78};
     int i;
     int max = number[0];
     for(i=0;i<5;i++){
        if(number[i]>max){
            max = number[i];
        }
     }
     printf("Maximum Number: = %d", max);
        
    return 0;
}