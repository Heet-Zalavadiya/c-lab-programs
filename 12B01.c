#include<stdio.h>
void main()
{
    int i;
    int j;
    int n;
    int sum=0;
    int termsum;
    printf("Enter value of n =        ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        termsum=0;
        for ( j = 1; j <= i; j++)
        {
           
            termsum=termsum+j;
        }
        sum=sum+termsum;
        
    }
     printf("%d",sum);
}