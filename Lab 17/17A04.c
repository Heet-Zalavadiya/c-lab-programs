#include<stdio.h>
void main()
{
    int *a;
    int *b;
    int num1;
    int num2;
    int temp;
    printf("Enter value of num1:   ");
    scanf("%d",&num1);
    printf("Enter value of num2:   ");
    scanf("%d",&num2);
    printf("Before swapping:\n");
    printf("num1=%d and num2=%d\n\n",num1,num2);
    a=&num1;
    b=&num2;

    temp=*a;
    *a=*b;
    *b=temp;
    
    printf("After swapping:\n");
    printf("num1=%d and num2=%d\n",*a,*b);
}