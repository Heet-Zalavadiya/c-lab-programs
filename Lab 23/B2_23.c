#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// Define the Student structure
struct Student {
    int roll_number;
    char name[MAX_NAME_LENGTH];
    int backlogs;
};

int main() {
    FILE *file;
    struct Student student;
    int n, rollToModify, newBacklogs;

    // Open the file in write mode to store student data
    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Write student data to the file
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &student.roll_number);
        getchar();  // To consume the newline character left by scanf
        printf("Name: ");
        fgets(student.name, MAX_NAME_LENGTH, stdin);
        student.name[strcspn(student.name, "\n")] = '\0';  // Remove newline from name
        printf("Backlogs: ");
        scanf("%d", &student.backlogs);
        fprintf(file, "%d %s %d\n", student.roll_number, student.name, student.backlogs);
    }

    fclose(file); // Close the file after writing data

    // Ask for the roll number whose backlogs you want to modify
    printf("\nEnter the roll number of the student whose backlogs you want to modify: ");
    scanf("%d", &rollToModify);
    printf("Enter new backlogs for student roll number %d: ", rollToModify);
    scanf("%d", &newBacklogs);

    // Reopen the file in read mode and modify the student's backlogs
    file = fopen("student.txt", "r+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read data, modify and update
    while (fscanf(file, "%d %s %d", &student.roll_number, student.name, &student.backlogs) != EOF) {
        if (student.roll_number == rollToModify) {
            student.backlogs = newBacklogs;
        }
        fseek(file, -sizeof(student), SEEK_CUR);  // Move the file pointer back to the current record
        fprintf(file, "%d %s %d\n", student.roll_number, student.name, student.backlogs);
    }

    fclose(file); // Close the file after modification

    // Open the file again in read mode to print the updated data
    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nUpdated Student Data:\n");
    while (fscanf(file, "%d %s %d", &student.roll_number, student.name, &student.backlogs) != EOF) {
        printf("Roll Number: %d, Name: %s, Backlogs: %d\n", student.roll_number, student.name, student.backlogs);
    }

    fclose(file); // Close the file after printing

    return 0;
}
