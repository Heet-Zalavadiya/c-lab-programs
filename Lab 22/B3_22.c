#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char line1[256], line2[256];

    // Open both files in read mode
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Cannot open file1.txt\n");
        return 1;
    }

    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Cannot open file2.txt\n");
        fclose(file1);  // Close file1 before returning
        return 1;
    }
    // fgets // Read one line from the file
    // Read and merge lines from both files
    while (fgets(line1, sizeof(line1), file1) != NULL || fgets(line2, sizeof(line2), file2) != NULL) {
        if (line1[0] != '\0') {
            printf("%s", line1);  // Print line from file1
        }
        if (line2[0] != '\0') {
            printf("%s", line2);  // Print line from file2
        }
    }

    // Close both files
    fclose(file1);
    fclose(file2);

    return 0;
}
