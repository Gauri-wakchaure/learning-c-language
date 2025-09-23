#include <stdio.h>
//sum of aray elements
int main() {
    int arr[] = {65,43,23,16,69,90,56,43,23,16,78};
    int sum = 0;
    int i;
    int length = sizeof(arr)/sizeof(arr[0]);
    for (i = 0; i < length; i++) {
        sum += arr[i];  
    }

    printf("\n Total Array sum = %d" ,sum);

    return 0;
}
