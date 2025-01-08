#include<stdio.h>
int factorial(int N);
void main()
{
    int N;
    printf("Enter value of N:    ");
    scanf("%d",&N);
    int fact=factorial(N);
    printf("Factorial of %d is %d",N,fact);
}
int factorial(int N){
    int fact=1;
    int i;
    for ( i = 1; i <= N; i++)
    {
        fact=fact*i;
    }
    return fact;
}
