#include<stdio.h>

int main() {
    int ticket, idProof, luggage;
    
    printf("Do you have a ticket? (1 = Yes, 0 = No): ");
    scanf("%d", &ticket);

    if(ticket == 1) {
        printf("Do you have an ID proof? (1 = Yes, 0 = No): ");
        scanf("%d", &idProof);

        if(idProof == 1) {
            printf("Is luggage within 20 kg? (1 = Yes, 0 = No): ");
            scanf("%d", &luggage);

            if(luggage == 1) {
                printf("Check-in Successful\n");
            } else {
                printf("Extra luggage charges apply\n");
            }
        } else {
            printf("ID Proof Required\n");
        }
    } else {
        printf("No Ticket - No Entry\n");
    }

    return 0;
}
