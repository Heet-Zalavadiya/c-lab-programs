#include <stdio.h>
#include <string.h>

// Arrays for number words
char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten",
                "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
char *tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
char *thousands[] = {"", "Thousand", "Million", "Billion"};

// Function to convert a number less than 1000 to words
void convert_group(int n, char *group) {
    if (n >= 100) {
        int hundred = n / 100;
        strcat(group, ones[hundred]);
        strcat(group, " Hundred ");
        n %= 100;
    }

    if (n >= 20) {
        int ten = n / 10;
        strcat(group, tens[ten]);
        strcat(group, " ");
        n %= 10;
    }

    if (n > 0) {
        strcat(group, ones[n]);
    }
}

// Function to convert a number into words
void number_to_words(int n, char *result) {
    if (n == 0) {
        strcpy(result, "Zero");
        return;
    }

    char buffer[1000] = "";  // Temporary buffer to store the words
    int group_index = 0;  // To track groups like thousand, million, etc.

    // Process the number in groups of 3 digits
    while (n > 0) {
        if (n % 1000 != 0) {
            char group[500] = "";  // Temporary group to store words for each 3-digit part
            convert_group(n % 1000, group);  // Convert the current group
            strcat(group, " ");
            strcat(group, thousands[group_index]);  // Append thousand, million, etc.
            strcat(buffer, group);  // Append the current group to the final result
        }
        n /= 1000;
        group_index++;
    }

    // Remove any extra spaces at the end of the result
    int len = strlen(buffer);
    if (buffer[len - 1] == ' ') {
        buffer[len - 1] = '\0';  // Trim the last space
    }

    // Copy the final result to the provided result variable
    strcpy(result, buffer);
}

int main() {
    int number;
    char result[1000];

    // Ask the user for the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Convert the number to words
    number_to_words(number, result);

    // Print the result
    printf("In words: %s\n", result);

    return 0;
}
