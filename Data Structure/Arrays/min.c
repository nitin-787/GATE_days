#include <stdio.h>

int find_min(int arr[], int n)  {
    int min = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        printf("min: %d\n", min); // updating the minimun
    }
    return min;
}

void main() {
    int arr[] = {15,8,9,7,19,20,4,21,11,6,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int min = find_min(arr, n);
    printf("Minimum element is: %d\n", min);

    printf("Length of array: %d\n", n);
}

