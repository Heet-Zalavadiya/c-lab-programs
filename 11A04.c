#include<stdio.h>
void main()
{
    int base;
    int exp;
    int res=1;
    int i;
    printf("Enter value of base and exp :      ");
    scanf("%d %d",&base,&exp);
    for (i = 1; i <= exp; i++)
    {
        res=res*base;
    }
    printf("%d",res);
    
}