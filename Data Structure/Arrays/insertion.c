#include <stdio.h>

// insertion in the sorted array 
void insert_sorted(int arr[], int item, int n, int length) {
    if (n == length) {
        printf("Overflow: array is already full");
        return;
    } 
    
    int i = n - 1;
    while (arr[i] > item) {
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = item;
    n++;
    printf("Insertion successful\n");
    // printing the elements after the insertion
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// insertion based on index
void insert_index(int arr[], int item, int n, int length, int index) {
    if (n == length) {
        printf("Overflow: array is already full");
        return;
    } else if (index >= 0 && index <= n){
        for (int i = n; i >= index; i--) {
            arr[i+1] = arr[i];
        }
        arr[index] = item;
        n++;
        printf("Insertion sucessful\n");
    } else {
        printf("Cannot insert the element: invalid index\n");
    }
    // printing the element after the insertion
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

// insertion in array in last
void insert(int arr[], int item, int n, int length) {
    if (n == length) {
        printf("Overflow: array is already full");
        return;
    } else {
        arr[n] = item;
        n++;
        printf("Insertion sucessful\n");
    }

    // printing the element after the insertion
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void main() {
    int arr[10] = {3,8,10,16,22};
    int length = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int item;
    int index;
    
    printf("Enter the value you want to insert: ");
    scanf("%d", &item);

    // printf("Enter the index where you want to insert: ");
    // scanf("%d", &index);

    // insert(arr, item, n, length);

    // insert_index(arr, item, n, length, index);

    insert_sorted(arr, item, n, length);
}