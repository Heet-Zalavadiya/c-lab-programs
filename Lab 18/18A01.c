#include<stdio.h>
int Add(int a,int b);
void main()
{
    int a,b;
    printf("Enter an interger :   ");
    scanf("%d",&a);
    printf("Enter an interger :   ");
    scanf("%d",&b);
    int res = Add(a,b);
    printf("Addition of %d and %d is %d",a,b,res);
}
int Add(int a, int b){
    int z=a+b;
    return z;
}
