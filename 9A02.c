#include<stdio.h>
void main()
{
    int i=1;
    int n;
    printf("Enter value of n for multiplication =    ");
    scanf("%d",&n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n*i);
        i=i+1;
    }

}