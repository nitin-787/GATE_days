#include <stdio.h>

void search(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;
    while (start <= end) { 
        int mid = start + (end - start) / 2; 
        if (arr[mid] == key) {
            printf("Element is found at: %d\n", mid);
            return;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    printf("Element not found\n"); 
}

int main() { 
    int arr[] = {1,3,5,7,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 17;
    search(arr, n, key);
    return 0; // added return statement
}
