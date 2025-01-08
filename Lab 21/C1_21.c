#include <stdio.h>

// Structure to store distances
struct Distance {
    int feet;
    int inches;
};

int main() {
    struct Distance d1, d2, sum;

    // Input first distance
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &d1.feet, &d1.inches);

    // Input second distance
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &d2.feet, &d2.inches);

    // Add the distances
    sum.feet = d1.feet + d2.feet;
    sum.inches = d1.inches + d2.inches;

    // Convert inches to feet if >= 12
    if (sum.inches >= 12) {
        sum.feet += sum.inches / 12;
        sum.inches = sum.inches % 12;
    }

    // Output the sum of distances
    printf("Sum of distances: %d feet %d inches\n", sum.feet, sum.inches);

    return 0;
}
