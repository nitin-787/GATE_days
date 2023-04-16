#include <stdio.h>
#include <limits.h>


// no. of comparisons are  3*n/2 - 2
void findMinMax1(int arr[], int n, int* minVal, int* maxVal) {
    int i;
    if (n % 2 == 0) {
        if (arr[0] > arr[1]) {
            *maxVal = arr[0];
            *minVal = arr[1];
        } else {
            *maxVal = arr[1];
            *minVal = arr[0];
        }
        i = 2;
    } else {
        *maxVal = arr[0];
        *minVal = arr[0];
        i = 1;
    }

    while (i < n - 1) {
        if (arr[i] > arr[i+1]) {
            if (arr[i] > *maxVal) {
                *maxVal = arr[i];
            }
            if (arr[i+1] < *minVal) {
                *minVal = arr[i+1];
            }
        } else {
            if (arr[i+1] > *maxVal) {
                *maxVal = arr[i+1];
            }
            if (arr[i] < *minVal) {
                *minVal = arr[i];
            }
        }
        i += 2;
    }

    printf("Number of comparisons: %d\n", 3*n/2 - 2);
}


// no. of comparisons are  2n - 2
void findMinMax(int arr[], int n, int* minVal, int* maxVal) {
    if (n == 0) {
        *minVal = INT_MAX;
        *maxVal = INT_MIN;
        return;
    }
    int i;
    *minVal = *maxVal = arr[0];
    int numComparisons = 0;
    for (i = 1; i < n; i++) {
        numComparisons += 2;
        if (arr[i] < *minVal) {
            *minVal = arr[i];
        }
        if (arr[i] > *maxVal) {
            *maxVal = arr[i];
        }
    }
    printf("Number of comparisons: %d\n", numComparisons);
}

int main() {
    int arr[] = {5, 3, 1, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minVal, maxVal;
    findMinMax(arr, n, &minVal, &maxVal);

    findMinMax1(arr, n, &minVal, &maxVal);

    printf("Minimum value: %d\n", minVal);
    printf("Maximum value: %d\n", maxVal);
    return 0;
}

 