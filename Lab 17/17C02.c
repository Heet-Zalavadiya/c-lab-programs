#include <stdio.h>

// Function to perform Bubble Sort using pointers
void bubbleSort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            // Compare and swap if the element is greater than the next element
            if (*(arr + j) > *(arr + j + 1)) {
                // Swap using a temporary variable
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

// Function to print the array using pointers
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Accessing each element via pointer arithmetic
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, size);

    // Sort the array using pointers
    bubbleSort(arr, size);

    printf("\nSorted array:\n");
    printArray(arr, size);

    return 0;
}
