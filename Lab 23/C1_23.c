#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50

// Define the Student structure
struct Student {
    int roll_number;
    char name[MAX_NAME_LENGTH];
    int backlogs;
};

// Function to read student data and store it into a file
void store_student_data(const char *filename, int n) {
    FILE *file;
    struct Student student;

    file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Read student data and write to file
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
}

// Function to modify backlogs of a student in the file
void modify_student_backlogs(const char *filename, int rollToModify, int newBacklogs) {
    FILE *file;
    struct Student student;
    int found = 0;

    // Open the file in read mode to load and modify data
    file = fopen(filename, "r+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    // Read data, modify the student backlogs, and update
    while (fscanf(file, "%d %s %d", &student.roll_number, student.name, &student.backlogs) != EOF) {
        if (student.roll_number == rollToModify) {
            student.backlogs = newBacklogs;
            found = 1;
            break;
        }
    }

    // If student is found, move back to the beginning of the record and update the backlogs
    if (found) {
        fseek(file, -sizeof(student), SEEK_CUR);  // Move the file pointer back to the current record
        fprintf(file, "%d %s %d\n", student.roll_number, student.name, student.backlogs);
    } else {
        printf("Student with roll number %d not found.\n", rollToModify);
    }

    fclose(file); // Close the file after modification
}

// Function to print the contents of the file
void print_student_data(const char *filename) {
    FILE *file;
    struct Student student;

    // Open the file in read mode to print data
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("\nStudent Data:\n");
    while (fscanf(file, "%d %s %d", &student.roll_number, student.name, &student.backlogs) != EOF) {
        printf("Roll Number: %d, Name: %s, Backlogs: %d\n", student.roll_number, student.name, student.backlogs);
    }

    fclose(file); // Close the file after printing
}

int main() {
    int n, rollToModify, newBacklogs;

    // Task 23-A: Read and store student data
    printf("Enter the number of students: ");
    scanf("%d", &n);
    store_student_data("student.txt", n);

    // Task 23-B: Modify the backlogs of a student
    printf("\nEnter the roll number of the student whose backlogs you want to modify: ");
    scanf("%d", &rollToModify);
    printf("Enter new backlogs for student roll number %d: ", rollToModify);
    scanf("%d", &newBacklogs);
    modify_student_backlogs("student.txt", rollToModify, newBacklogs);

    // Print the updated student data
    print_student_data("student.txt");

    return 0;
}
