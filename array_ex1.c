#include<stdio.h>

int main(){
     int marks[5] = {45,13,54,14,67};
     int i;
     printf("Arrays List");
     for(i=0;i<5;i++){
        printf("\n %d",marks[i]);
     }
     
     marks[1] = 55;
     printf("Updated Arrays List");
     for(i=0;i<5;i++){
        printf("\n %d",marks[i]);
     }

     marks[0] = 16;
     printf("Updated Arrays List");
     for(i=0;i<5;i++){
        printf("\n %d",marks[i]);
     }
     return 0;
}