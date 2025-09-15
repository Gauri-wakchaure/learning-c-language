#include<stdio.h>

int main() {
    int RestroOpen, FoodReady, Payment;
    
    printf("Is Restrorant is Open? (1 = Yes, 0 = No): ");
    scanf("%d", &RestroOpen);

    if(RestroOpen == 1) {
        printf("Is Food is Ready? (1 = Yes, 0 = No): ");
        scanf("%d", &FoodReady);

        if(FoodReady == 1) {
            printf("Is Payment Done? (1 = Yes, 0 = No): ");
            scanf("%d", &Payment);

            if(Payment == 1) {
                printf("Order Done Successfully\n");
            } else {
                printf("Do your Payment\n");
            }
        } else {
            printf("Wait For Food\n");
        }
    } else {
        printf("Go to Another Restrorant\n");
    }

    return 0;
}
