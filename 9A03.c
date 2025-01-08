#include<stdio.h>
void main()
{
    int base;
    int exp;
    int res=1;
    int i=1;
    printf("Enter value of base and exp :      ");
    scanf("%d %d",&base,&exp);
    while (i <= exp)
    {
        res=res*base;
        i++;
    }
    printf("%d",res);
    
}