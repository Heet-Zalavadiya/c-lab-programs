#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char ch = 'W';
    int i = 0;
    int found = 0;

    // Iterate through the string until the null terminator
    while (str[i] != '\0') {
        if (str[i] == ch) {
            printf("Character '%c' found at position: %d\n", ch, i);
            found = 1;
            break;  // Exit the loop once the character is found
        }
        i++;  // Move to the next character
    }

    // If character was not found, print a message
    if (!found) {
        printf("Character '%c' not found in the string.\n", ch);
    }

    return 0;
}