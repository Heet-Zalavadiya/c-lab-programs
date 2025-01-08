#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    // Using fprintf to write to file
    file = fopen("example.txt", "w");
    fprintf(file, "This is a sample file.\n");

    // Using fputc to write a character to file
    fputc('A', file);
    fclose(file);

    // Using fscanf to read from file
    file = fopen("example.txt", "r");
    
    fscanf(file, "%c", &ch);
    printf("First character read using fscanf: %c\n", ch);

    // Using fgetc to read a character from file
    ch = fgetc(file);
    printf("Next character read using fgetc: %c\n", ch);

    // Using fseek to move the file pointer
    fseek(file, 8, SEEK_SET);
    ch = fgetc(file);
    printf("Character after fseek: %c\n", ch);

    // Using rewind to reset the file pointer
    rewind(file);
    ch = fgetc(file);
    printf("Character after rewind: %c\n", ch);

    fclose(file);

    return 0;
}
