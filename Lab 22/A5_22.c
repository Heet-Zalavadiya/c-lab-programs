#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Cannot open source file.\n");
        return 1;
    }

    // Open the target file in write mode
    targetFile = fopen("target.txt", "w");
    if (targetFile == NULL) {
        printf("Cannot open target file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Read each character from the source file and write to the target file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, targetFile);
    }

    printf("Contents of source.txt copied to target.txt successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
