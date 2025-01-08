#include <stdio.h>

// Define the structure
struct Employee
{
    int id;
    char name[50];
    float salary;
    int age;
};

int main()
{
    // Declare and initialize structure
    struct Employee emp1;
    emp1.id = 101;
    emp1.name = "John Doe";
    emp1.salary = 50000.50;

    struct Employee emp2 = {102, " Doe Deo", 50300.50};
    struct Employee emp3;
    emp3 = emp2;

    // Display the structure data
    printf("Employee ID: %d\n", emp1.id);
    printf("Employee Name: %s\n", emp1.name);
    printf("Employee Salary: %.2f\n", emp1.salary);

    printf("Employee ID: %d\n", emp2.id);
    printf("Employee Name: %s\n", emp2.name);
    printf("Employee Salary: %.2f\n", emp2.salary);

    return 0;
}
