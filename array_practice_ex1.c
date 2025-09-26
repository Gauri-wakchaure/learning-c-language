#include <stdio.h>

int main() {
    int arr[] = {50, 10, 40, 20, 30};  // Hardcoded array
    int n = sizeof(arr) / sizeof(arr[0]); 
    int i, j, temp;

    // Sorting using nested for loops
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {  // Swap if out of order
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Array in Ascending Order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
