#include<stdio.h>

int main(){
    int battery = 100;

    while (battery > 0)
    {
        printf("Battery: %d \n", battery);
        battery -= 10;
    }
    printf("Battery Empty\n");
    return 0;
}