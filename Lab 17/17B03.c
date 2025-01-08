#include <stdio.h>

void addMatrices(int *mat1, int *mat2, int *result, int rows, int cols) {
    // Loop through each element of the matrices using pointer arithmetic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(mat1 + i * cols + j) + *(mat2 + i * cols + j);
        }
    }
}

void printMatrix(int *mat, int rows, int cols) {
    // Print the matrix elements using pointer arithmetic
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(mat + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, cols = 3;

    // Define two matrices and a result matrix
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int result[3][3]; // Matrix to store the result of addition

    // Add the matrices
    addMatrices((int*)mat1, (int*)mat2, (int*)result, rows, cols);

    // Print the matrices
    printf("Matrix 1:\n");
    printMatrix((int*)mat1, rows, cols);
    printf("\nMatrix 2:\n");
    printMatrix((int*)mat2, rows, cols);
    printf("\nResultant Matrix (Addition):\n");
    printMatrix((int*)result, rows, cols);

    return 0;
}
