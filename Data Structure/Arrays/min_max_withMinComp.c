#include <stdio.h>
#include <limits.h>


// no. of comparisons are  3*n/2 - 2
// time complexity -- theta of n
// space complexity --constant-- theta(1)
void findMinMax1(int arr[], int n, int* minVal, int* maxVal) {
    *minVal = arr[0];
    *maxVal = arr[0];
    int i;
    for (i = 0; i < n-1; i+=2) {
        if (arr[i] < arr[i+1]) {
            if (arr[i] < *minVal) {
                *minVal = arr[i];
            } 
            if (arr[i+i] > *maxVal) {
                *maxVal = arr[i+1];
            }
        } else {
            if(arr[i+1] < *minVal) {
                *minVal = arr[i+1];
            }
            if (arr[i] > *maxVal) {
                *maxVal = arr[i];
            }
        }
    }
    if (n % 2 == 1) {
        if (arr[n-1] < *minVal) {
            *minVal = arr[n-1];
        }
        if (arr[n-1] > *maxVal) {
            *maxVal = arr[n-1];
        }
    }
    printf("Minimum = %d\n", *minVal);
    printf("Maximum = %d\n", *maxVal);
}


// no. of comparisons are  2n - 2
// time complexity -- theta of n
// space complexity --constant-- theta(1)
void findMinMax(int arr[], int n, int* minVal, int* maxVal) {
    if (n == 0) {
        printf("Array is empty");
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
    printf("Minimum value: %d\n", minVal);
    printf("Maximum value: %d\n", maxVal);
}

int main() {
    int arr[] = {5, 3, 1, 9, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int minVal, maxVal;

    // findMinMax(arr, n, &minVal, &maxVal);

    findMinMax1(arr, n, &minVal, &maxVal);
    return 0;
}

 