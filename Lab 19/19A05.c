#include <stdio.h>

int main() {
    char str[] = "Hello, World!";
    char oldChar = 'o';  // Character to be replaced
    char newChar = 'x';  // Character to replace with
    
    // Iterate through the string
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;  // Replace the character
        }
    }

    printf("Updated string: %s\n", str);
    return 0;
}