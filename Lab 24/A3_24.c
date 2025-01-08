#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;

    // Get the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation using calloc (initializes memory to 0)
    int *arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input n numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    printf("Sum of the numbers: %d\n", sum);

    // Free allocated memory
    free(arr);

    return 0;
}
