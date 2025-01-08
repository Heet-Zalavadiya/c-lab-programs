#include <stdio.h>
#include <stdlib.h>

// Define a structure
struct Student {
    int roll_no;
    char name[50];
};

int main() {
    // Dynamically allocate memory for structure variable
    struct Student *student_ptr = (struct Student *)malloc(sizeof(struct Student));

    if (student_ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign values to the structure
    student_ptr->roll_no = 101;
    printf("Enter student's name: ");
    scanf("%s", student_ptr->name);

    // Print the structure data
    printf("Student Roll No: %d\n", student_ptr->roll_no);
    printf("Student Name: %s\n", student_ptr->name);

    // Free allocated memory
    free(student_ptr);

    return 0;
}
