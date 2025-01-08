#include<stdio.h>
void main()
{
    int num1;
    int num2;
    int sum;
    int *ptr1;
    int *ptr2;
    int *ptr3;
    printf("Enter value of num1 :   ");
    scanf("%d",&num1);
    printf("Enter value of num2 :   ");
    scanf("%d",&num2);
    ptr1=&num1;
    ptr2=&num2;
    ptr3=&sum;
    
    *ptr3=*ptr1+*ptr2;
    printf("Sum of %d and %d is %d",*ptr1,*ptr2,*ptr3);
    
}