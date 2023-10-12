#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// time complexity --Constant-- O(1)
void delete_last(int arr[], int *length) {
    if (*length > 0) {
        *length = *length -1;
        printArray(arr, *length);
    } else {
        printf("Array is already emptly.\n");
    }
}

// detele based on index... time complexity O(n)
void delete_index(int arr[], int index, int length) {
    if (index < 0 || index > length-1) {
        printf("Invalid index\n");
    } else {
        // index > 0 && length-1)
        printf("Array before the deletion\n");
        printArray(arr, length);
        for (int i = index; i < length-1; i++) {
            arr[i] = arr[i+1];
        }
        length--;
        printf("Array after the deletion\n");
        printArray(arr, length);
    }
}

// detele in the sorted array... time complexity O(n)
void delete_sorted(int arr[], int length, int value) {
    int index = -1;
    for (int i = 0; i < length; i++) {
        if (arr[i] == value) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        printf("Item not found in the array\n");
    } else {
        printf("Array before the deletion\n");
        printArray(arr, length);
        for (int i = index; i < length-1; i++) {
            arr[i] = arr[i+1];
        }
        length--;
        printf("Array after the deletion\n");
        printArray(arr, length);
    }
}


int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int index;
    // delete_last(arr, &length);

    // printf("Enter the index between 0 to %d to delete an element: ",length-1);
    // scanf("%d", &index);
    // delete_index(arr, index, length);

    delete_sorted(arr, length, 4);
    return 0;
}
