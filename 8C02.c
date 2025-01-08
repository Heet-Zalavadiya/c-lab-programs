#include<stdio.h>
#include<math.h>
void main()
{
    int i=1;
    int n;
    int sum=0;
    printf("Enter value of n =     ");
    scanf("%d",&n);
    while(i<=n)
    {
       sum=sum+pow(i,2);
       i++;
    }
    printf("sum=%d",sum);

}