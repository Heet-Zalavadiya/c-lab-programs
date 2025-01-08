#include <stdio.h>

// Function to generate Fibonacci series
void fbbo(int N)
{
    int a = 0, b = 1, next;

    if (N <= 0)
    {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci series up to %d: \n", N);

    // Print the first Fibonacci number
    printf("%d ", a);

    // Generate and print the Fibonacci series up to N terms
    for (int i = 1; i < N; i++)
    {
        printf("%d ", b);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
}

int main()
{
    int N;

    // Ask the user for the number of terms in the Fibonacci series
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &N);

    // Call the Fibonacci function
    fbbo(N);

    return 0;
}
