#include <stdio.h>

int main() {
    int choice, balance = 1000, amount;
    char cont;

    do {
        printf("------ATM MENU------\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("0. Exit\n");
        printf("-------------------\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your Balance is = %d\n", balance);
                break;

            case 2:
                printf("Enter Amount to Deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Deposited Successfully, New balance is = %d\n", balance);
                break;

            case 3:
                printf("Enter amount to Withdraw: ");
                scanf("%d", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdraw Successfully, New balance is = %d\n", balance);
                } else {
                    printf("Insufficient Balance\n");
                }
                break;

            case 0:
                printf("Exiting ATM...\n");
                break;

            default:
                printf("Invalid Choice\n");
                break;
        }

        if (choice != 0) {
            printf("\nDo you want to continue (y/n): ");
            while ((getchar()) != '\n');  // Clear input buffer
            scanf("%c", &cont);
        } else {
            cont = 'n';
        }

    } while (cont == 'y' || cont == 'Y');

    return 0;
}
