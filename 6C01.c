#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter value of a,b,c =      ");
    scanf("%d %d %d",&a,&b,&c);
    max=a>b?(a>c?c:a):(b>c?c:b);
    printf("%d is second largest",max);
    
}