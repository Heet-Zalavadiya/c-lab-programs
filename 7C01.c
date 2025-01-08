#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value of a and b =   ");
    scanf("%d %d",&a,&b);
    (a^b)?printf("not same"):printf("same");
}