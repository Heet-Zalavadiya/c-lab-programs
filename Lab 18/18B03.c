#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

// Function to print all prime numbers in a given interval
void find_primes_in_interval(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);
    
    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;

    // Ask the user for the interval (start and end values)
    printf("Enter the interval (start and end): ");
    scanf("%d %d", &start, &end);

    // Find and print all prime numbers in the interval
    find_primes_in_interval(start, end);

    return 0;
}
