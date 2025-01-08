#include <stdio.h>
#include <string.h>

int main() {
    FILE *file, *tempFile;
    char line[1000];
    int lineCount = 0;

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        printf("Error opening temporary file!\n");
        return 1;
    }
    // fputs Write a string to the file
    // strcmp Comparing str1 and str2
    while (fgets(line, sizeof(line), file)) {
        // Skip blank lines
        if (strcmp(line, "\n") != 0) {
            fputs(line, tempFile);
            lineCount++;
        }

        // Insert blank line after third line
        if (lineCount == 3) {
            fputs("\n", tempFile);
        }
    }

    fclose(file);
    fclose(tempFile);

    // Replace original file with modified one
    remove("example.txt");
    rename("temp.txt", "example.txt");

    printf("File updated successfully.\n");

    return 0;
}
