#include<stdio.h>

int main(){
     int arr4[6] = {1,2,3,4,5,6};
     int i;
     int even = 0,odd=0;
     for(i=0;i<6;i++){
        if(arr4[i] %2 ==0){
           even++;
        }else{
         odd++;
        }
     }
        printf("Even Count = %d, Odd Count = %d \n",even,odd);
    return 0;
}