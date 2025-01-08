#include <stdio.h>

void swapArrays(int *arr1, int *arr2, int size) {
    for (int i = 0; i < size; i++) {
        // Swap elements using pointers
        int temp = *(arr1 + i);
        *(arr1 + i) = *(arr2 + i);
        *(arr2 + i) = temp;
    }
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int size = sizeof(arr1) / sizeof(arr1[0]);

    printf("Before swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    // Swap arrays using pointers
    swapArrays(arr1, arr2, size);

    printf("\nAfter swapping:\n");
    printf("Array 1: ");
    printArray(arr1, size);
    printf("Array 2: ");
    printArray(arr2, size);

    return 0;
}
