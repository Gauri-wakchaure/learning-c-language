#include<stdio.h>

int main(){
     int arr2[5] = {1,2,3,4,5};
     int arr3[5];
     int i;
     for(i=0;i<5;i++){
        arr3[i] = arr2[i];
     }
     printf("copied Array\n");
     for(i=0;i<5;i++){
        printf("%d \n",arr3[i]);
     }
    return 0;
}