#include <stdio.h>

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
    int arr[10] = {1,2,3,4,5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int n = 5;
    int item;
    int index;
    
    printf("Enter the value you want to insert: ");
    scanf("%d", &item);

    printf("Enter the index where you want to insert: ");
    scanf("%d", &index);

    // insert(arr, item, n, length);

    insert_index(arr, item, n, length, index);
}