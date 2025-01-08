#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    struct Student students[5];

    // Read data for 5 students
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d\n", i + 1);
        printf("Name: ");
        gets(students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // Display data
    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Percentage: %.2f\n", students[i].percentage);
        printf("Age: %d\n\n", students[i].age);
    }

    return 0;
}
