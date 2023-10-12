#include <stdio.h>

void search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index: %d", i);
            return;
        }
    }
    printf("Element not found");
}

void main() {
    int arr[] = {1,3,45,23,0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 11;
    search(arr, n, key);
}

