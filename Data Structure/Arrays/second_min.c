#include <stdio.h>
#include <limits.h>

void findSecondMinimum(int arr[], int n) {
    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int i, numComparisons = 0;

    // Find the first minimum
    for (i = 0; i < n; i++) {
        numComparisons++;
        if (arr[i] < min1) {
            min1 = arr[i];
        }
    }
    printf("First minimum: %d\n", min1);
    printf("Number of comparisons: %d\n", numComparisons);

    
    // Find the second minimum
    for (i = 0; i < n; i++) {
        numComparisons++;
        if (arr[i] < min2 && arr[i] != min1) {
            min2 = arr[i];
        }
    }

    printf("Second minimum: %d\n", min2);
    printf("Number of comparisons: %d\n", numComparisons);
}

int main() {
    int arr[] = {4, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondMinimum(arr, n);

    return 0;
}
