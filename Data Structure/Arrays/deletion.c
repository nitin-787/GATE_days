#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


// maximum n number of shifting
void deletion(int arr[], int size, int i) {
    if (i < 0 || i >= size) {
        printf("Index out of bounds\n");
    } else {
        printf("Array before deletion: ");
        printArray(arr, size);
        for (int j = i; j < size - 1; j++) {
            arr[j] = arr[j+1];
        }
        size--;
        printf("Array after deletion: ");
        printArray(arr, size);
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    // index of the element to be deleted
    int i = 2;

    deletion(arr, size, i);

    return 0;
}
