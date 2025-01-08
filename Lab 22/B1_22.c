#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    long fileSize;

    // Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    // SEEK_END Move the file pointer to the end to determine file size
    fseek(file, 0, SEEK_END);
    // Use ftell() to get the current position (file size in bytes)
    fileSize = ftell(file);

    printf("Contents of the file in reverse order:\n");

    // Read characters from the end to the beginning
    for (long i = fileSize - 1; i >= 0; i--) {
        fseek(file, i, SEEK_SET); // Move the file pointer to position 'i'
        ch = fgetc(file);        // Read the character at position 'i'
        putchar(ch);             // Print the character
    }

    // Close the file
    fclose(file);

    return 0;
}
