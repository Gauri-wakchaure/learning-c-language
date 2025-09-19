#include <stdio.h>

// 1. Without Parameters & Without Return
void welcomeMessage() {
    printf("====================================\n");
    printf("   Welcome to State Bank ATM \n");
    printf("====================================\n");
}

// 2. With Parameters but Without Return
void printBalance(int balance) {
    printf("Your Current Balance = ₹%d\n", balance);
}

// 3. Without Parameters but With Return
int getInterestRate() {
    return 5;  // Fixed interest rate = 5%
}

// 4. With Parameters and With Return
int deposit(int balance, int amount) {
    balance += amount;   // Update balance
    return balance;      // Return updated balance
}

int main() {
    int balance = 10000;  // Initial balance
    int amount;

    // Call Type 1
    welcomeMessage();

    // Call Type 2
    printBalance(balance);

    // Call Type 3
    int rate = getInterestRate();
    printf("Current Interest Rate = %d%%\n", rate);

    // Call Type 4
    printf("\nEnter amount to deposit: ");
    scanf("%d", &amount);

    balance = deposit(balance, amount);

    printf("\nAfter deposit, ");
    printBalance(balance);

    return 0;
}
