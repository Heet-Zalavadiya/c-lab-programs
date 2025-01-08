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
    int n, i;

    // Open the file in write mode to store student data
    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read the number of students
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Read student data and write to the file
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Roll number: ");
        
        scanf("%d", &student.roll_number);
        
        getchar();  // To consume the newline character left by scanf
        printf("Name: ");
       
        fgets(student.name, MAX_NAME_LENGTH, stdin);
        student.name[strcspn(student.name, "\n")] = '\0';  // Remove newline from name
        printf("Backlogs: ");
        scanf("%d", &student.backlogs);

        // Write student data to file
        fprintf(file, "%d %s %d\n", student.roll_number, student.name, student.backlogs);
    }

    fclose(file); // Close the file after writing data

    // Open the file in read mode to search for students with more than 5 backlogs
    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudents with more than 5 backlogs:\n");

    // Read student data from the file and check backlogs
     
    fclose(file); // Close the file after reading data
    return 0;
}
