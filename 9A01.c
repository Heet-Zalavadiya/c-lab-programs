#include<stdio.h>
void main()
{
    int n;
    int sum=0;
    int i;
    printf("Enter the value of number =         ");
    scanf("%d",&n);
    for ( i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
        
    }
    printf("The sum of series is %d\n",sum);
}
