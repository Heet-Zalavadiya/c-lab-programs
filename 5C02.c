#include<stdio.h>
void main()
{
    int number;
    printf("Enter value of number :    ");
    scanf("%d",&number);
    if (number & 1)
    {
        printf("number is odd %d",number);
    }
    else{
        printf("number is even %d",number);
    }
    
    
}