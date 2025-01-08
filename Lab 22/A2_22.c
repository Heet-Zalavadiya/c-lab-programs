#include <stdio.h>

int main() {
    FILE *file;
    char ch;
    int charCount = 0, spaceCount = 0, tabCount = 0, newlineCount = 0;

    file = fopen("example.txt", "r");
    

    while ((ch = fgetc(file)) != EOF) {
        charCount++;
        if (ch == ' ') spaceCount++;
        if (ch == '\t') tabCount++;
        if (ch == '\n') newlineCount++;
    }

    fclose(file);
    printf("Character Count: %d\n", charCount);
    printf("Space Count: %d\n", spaceCount);
    printf("Tab Count: %d\n", tabCount);
    printf("Newline Count: %d\n", newlineCount);

    return 0;
}
