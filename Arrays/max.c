#include <stdio.h>

int find_min(int arr[], int n)  {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        printf("min: %d\n", max); // updating the minimun
    }
    return max;
}

void main() {
    int arr[] = {15,8,9,7,19,20,4,21,11,6,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int max = find_min(arr, n);
    printf("Maximun element is: %d\n", max);

    printf("Length of array: %d\n", n);
}

