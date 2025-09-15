#include<stdio.h>

int main(){
    int battery;
    printf("Enter Battery Percentage:");
    scanf("%d",&battery);

    if(battery<=20){
        printf("Battery is low Please charge your device");
    }

}