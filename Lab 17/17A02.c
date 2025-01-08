#include <stdio.h>
int main() {
    // Declare variables of different types
    int intVar = 10;
    float floatVar = 20.5f;
    double doubleVar = 30.123;
    char charVar = 'A';

    // Declare pointers for each type
    int *intPtr;
    float *floatPtr;
    double *doublePtr;
    char *charPtr;

    // Assign the address of the variables to the pointers
    intPtr = &intVar;
    floatPtr = &floatVar;
    doublePtr = &doubleVar;
    charPtr = &charVar;

    // Output the values and memory addresses
    printf("Value of intVar: %d, Address of intVar: %p, Value through pointer: %d\n", *intPtr, intPtr, *intPtr);
    printf("Value of floatVar: %.2f, Address of floatVar: %p, Value through pointer: %.2f\n", *floatPtr, floatPtr, *floatPtr);
    printf("Value of doubleVar: %.3f, Address of doubleVar: %p, Value through pointer: %.3f\n", *doublePtr, doublePtr, *doublePtr);
    printf("Value of charVar: %c, Address of charVar: %p, Value through pointer: %c\n", *charPtr, charPtr, *charPtr);

    return 0;
}
