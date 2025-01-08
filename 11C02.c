#include<stdio.h>
void main()
{
    int base;
    int power;
    int result=1;
    printf("Enter value of base :     ");
    scanf("%d",&base);
    printf("Enter value of power :    ");
    scanf("%d",&power);
    for (int i = 0; i < power; i++)
    {
        int temp = 0;
        for (int j = 0; j < result; j++)
        {
            temp=temp+base;
        }
        result=temp;
    }
    printf("%d raised to power %d is %d",base,power,result);
}   