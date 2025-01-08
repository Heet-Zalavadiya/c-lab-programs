#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char *line) {
    int inWord = 0;
    for (int i = 0; line[i] != '\0'; i++) {
        if (isspace(line[i])) {
            inWord = 0;
        } else {
            if (!inWord) {
                line[i] = toupper(line[i]);
            }
            inWord = 1;
        }
    }
}

int main() {
    FILE *file;
    char line[1000];

    file = fopen("example.txt", "r+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file)) {
        capitalizeFirstLetter(line);
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
