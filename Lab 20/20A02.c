#include <stdio.h>

void removeSpecialCharacters(char *str) {
    char *src = str;  // Source pointer to read characters
    char *dst = str;  // Destination pointer to write characters

    // Iterate over each character in the string
    while (*src != '\0') {
        // Check if the character is alphanumeric (a-z, A-Z, or 0-9)
        if (((*src >= 'a' && *src <= 'z') || (*src >= 'A' && *src <= 'Z') || (*src >= '0' && *src <= '9'))) {
            *dst = *src;  // Copy the valid character to the destination
            dst++;         // Move the destination pointer
        }
        // Move the source pointer to the next character
        src++;
    }

    // Null-terminate the modified string
    *dst = '\0';
}

int main() {
    char str[] = "Hello, World! 123#&*";

    printf("Original string: %s\n", str);
    
    removeSpecialCharacters(str);

    printf("String after removing spaces and special characters: %s\n", str);

    return 0;
}



