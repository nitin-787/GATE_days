#include <stdio.h>

// regular method --time complexity-- theta(n)
// space complexity --constant-- theta(1)
// no. of comparison = n-1
int find_max(int arr[], int n)  {
    int max = arr[0];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            j = i;
        }
    }
    printf("Maximum element is: %d\n", max); 
    return j;
}

// tournament method --time complexity-- theta(n)
// no. of comparison = n-1
// space complexity = O(n)
int find_max_tournament(int arr[], int n) {
    int arr1[n];
    int i,j;
    // copying the elements of arr in arr1
    for (i = 0; i < n; i++) {
        arr1[i] = arr[i];
    }
    while (n > 1) {
        j=0;
        for (i = 0; i < n-1; i+=2) {
            if (arr1[i] > arr1[i+1])
                arr1[j] = arr1[i];
            else
                arr1[j] = arr1[i+1];
            j++;
        } 
        if (i == n-1)
            arr1[j] = arr1[i];
        n = (n+1)/2;
    }
    return arr1[0];
}

void main() {
    int arr[] = {15,8,9,7,19,20,4,21,11,6,15};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // int max = find_max(arr, n);
    // printf("Maximun element is present at index: %d\n", max);

    int min = find_max_tournament(arr, n);
    printf("%d", min);
}

