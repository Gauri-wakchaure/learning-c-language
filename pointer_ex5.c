#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int *p;
    int i;

    p = arr;   // arr points to the first element

    for(i=0;i<5;i++){
        printf("Elements %d = %d \n",i,*(p+i));
    }
    

    return 0;
}
