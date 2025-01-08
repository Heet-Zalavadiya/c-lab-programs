#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char ch;

    // Open the first file in read mode
    file1 = fopen("source.txt", "r");
    if (file1 == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    // Open the second file in append mode
    file2 = fopen("destination.txt", "a");
    if (file2 == NULL) {
        printf("Cannot open destination file.\n");
        fclose(file1);
        return 1;
    }

    // Read each character from source file and write it to destination file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file2);
    }

    printf("Contents of source.txt appended to destination.txt successfully.\n");

    // Close the files
    fclose(file1);
    fclose(file2);

    return 0;
}
