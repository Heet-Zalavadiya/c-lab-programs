#include <stdio.h>

int main() {
    FILE *file;

    // Create and open a file in write mode
    file = fopen("example.txt", "w");

    // Write data to the file
    fprintf(file, "This is a test file.\n");

    // Close the file
    fclose(file);
    printf("File created and data written successfully.\n");

    return 0;
}
