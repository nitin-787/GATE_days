#include <stdio.h>

// traversing and printing the sum of the array
int travers_array(int b[], int length) {
    int sum = 0;
    for (int i = 0; i<length; i++) {
        sum = b[i] + sum;
    }
    return sum;
}

void main() {
    int arr[] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("%d", travers_array(arr, length));
}