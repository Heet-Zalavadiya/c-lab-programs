#include <stdio.h>
int swap1(int a, int b);
void swap2(int *num1, int *num2);
void main()
{
    int a;
    int b;
    printf("Enter value of a:    ");
    scanf("%d", &a);
    printf("Enter value of b:     ");
    scanf("%d", &b);
    printf("Before swaping: a is %d, b is %d\n", a, b);

    swap1(a, b);
    printf("After swaping call by value : a is %d, b is %d\n", a, b);

    swap2(&a, &b);
    printf("After swaping call by reference : a is %d, b is %d\n", a, b);
}
int swap1(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap2(int *num1, int *num2)
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}