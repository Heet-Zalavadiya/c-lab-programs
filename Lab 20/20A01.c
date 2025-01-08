#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        // If characters at the start and end are not the same, return 0 (not a palindrome)
        if (str[start] != str[end]) {
            return 0;
        }
        start++;
        end--;
    }

    return 1;  // If we reach here, the string is a palindrome
}

int main() {
    char str[] = "racecar";

    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
