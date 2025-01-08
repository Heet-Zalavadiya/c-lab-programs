#include <stdio.h>
#include <stdlib.h>

int main() {
    // Dynamic memory allocation for int, char, and float
    int *int_ptr = (int *)malloc(sizeof(int));
    char *char_ptr = (char *)malloc(sizeof(char));
    float *float_ptr = (float *)malloc(sizeof(float));

    if (int_ptr == NULL || char_ptr == NULL || float_ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assigning values
    *int_ptr = 10;
    *char_ptr = 'A';
    *float_ptr = 5.75;

    // Printing values
    printf("Integer: %d\n", *int_ptr);
    printf("Character: %c\n", *char_ptr);
    printf("Float: %.2f\n", *float_ptr);

    // De-allocating memory
    free(int_ptr);
    free(char_ptr);
    free(float_ptr);

    return 0;
}
