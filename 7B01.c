#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter value of a,b and c =       ");
    scanf("%d %d %d",&a,&b,&c);
    d= a>b?(a*c):(b*c);
    printf("multiplication of greater no from a and b to c we get =%d",d);


}