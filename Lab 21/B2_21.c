#include <stdio.h>

// Define nested structure
struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    struct Date dob;
};

int main() {
    
    struct Student stu1 = {"John Doe", {25, 12, 1999}};

    // Accessing nested structure members
    printf("Student Name: %s\n", stu1.name);
    printf("Date of Birth: %d/%d/%d\n", stu1.dob.day, stu1.dob.month, stu1.dob.year);

    return 0;
}
