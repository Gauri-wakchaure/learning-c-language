#include<stdio.h>
//Find Minimum value
int main(){
     int number[5] = {12,65,90,26,78};
     int i;
     int min = number[0];
     for(i=0;i<5;i++){
        if(number[i]<min){
            min = number[i];
        }
     }
     printf("Minimum Number: = %d", min);
        
    return 0;
}