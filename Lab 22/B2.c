#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char ch, prevChar = ' ';

    // Open the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Modified content of the file:\n");

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        // Check if the current character is the start of a word
        if (isspace(prevChar) && isalpha(ch)) {
            putchar(toupper(ch)); // Capitalize the first letter of the word
        } else {
            putchar(ch); // Print the character as is
        }

        // Update the previous character
        prevChar = ch;
    }

    // Close the file
    fclose(file);

    return 0;
}
