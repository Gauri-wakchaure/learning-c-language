#include <stdio.h>

int main() {
    int choice;
    int num1, num2, result;
    char cont;

    do {
        printf("------Calculator Menu------\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("0. Exit\n");
        printf("--------------------------\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Addition\nEnter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("Result = %d \n", result);
                break;
            case 2:
                printf("Subtraction\nEnter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("Result = %d\n", result);
                break;
            case 3:
                printf("Multiplication\nEnter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("Result = %d\n", result);
                break;
            case 4:
                printf("Division\nEnter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 / num2;
                printf("Result = %d\n", result);
                break;
            case 0:
                printf("Exiting Calculator....\n");
                break;
            default:
                printf("Invalid Choice \n");
        }

        if (choice != 0) {
            printf("\nDo you want to really continue (y/n): ");
            while ((getchar()) != '\n');
            scanf("%c", &cont);
        } else {
            cont = 'n';
        }

    } while (cont == 'y' || cont == 'Y');

    return 0;
}
