#include<stdio.h>
void main()
{
    int sum=0,n,i;
    printf("Enter value of n =      ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    
}