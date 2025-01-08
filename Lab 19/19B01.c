#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    // Base case: if exponent is 0, return 1
    if (exponent == 0) {
        return 1;
    }
    // Recursive case: base * power of (base, exponent - 1)
    return base * power(base, exponent - 1);
}

int main() {
    int base, exponent;

    // Input the base and exponent from the user
    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Call the recursive power function
    int result = power(base, exponent);

    // Output the result
    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}
