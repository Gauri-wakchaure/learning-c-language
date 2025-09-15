#include<stdio.h>

int main(){
    int temperature;
    printf("Enter temperature:");
    scanf("%d",&temperature);

    if(temperature>45){
        printf("Very Hot");
    }
    else if(temperature>35 && temperature<45){
        printf("Hot");
    }
    else if(temperature>20 && temperature<30){
        printf("Moderate");
    }
    else if(temperature<20 && temperature>10){
        printf("Cold");
    }
    else{
        printf("Very Cold");
    }
    return 0;
    
}