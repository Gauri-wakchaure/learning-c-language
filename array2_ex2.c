#include <stdio.h>

int main() {
    int marks[5] = {0};
    int i;

    printf("Enter marks for 5 subjects:\n");

    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nUpdated Marks List:\n");
    for (i = 0; i < 5; i++) {
        printf("marks[%d] = %d\n", i, marks[i]);
    }

    return 0;
}
