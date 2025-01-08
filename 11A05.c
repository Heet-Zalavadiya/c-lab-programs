#include<stdio.h>
void main()
{
    int n;
    int i;
    int f=1;
    printf("Enter value of number =        ");
    scanf("%d",&n);
    for ( i=1;i<=n; i++)
    {
        f=i*f;
    }
    printf("%d",f);
    
}