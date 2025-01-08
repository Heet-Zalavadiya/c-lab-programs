#include <stdio.h>

// Define structure
struct Employee {
    int id;
    char name[50];
};

int main() {
    struct Employee emp1 = {101, "John Doe"};

    // Declare a pointer to the structure
    struct Employee *ptr = &emp1;

    // Access structure members using pointer
    printf("Employee ID: %d\n", ptr->id);
    printf("Employee Name: %s\n", ptr->name);

    return 0;
}
