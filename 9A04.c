#include<stdio.h>
void main()
{
    int i=1;
    int f=1;
    int n;
    printf("Enter value of n =     ");
    scanf("%d",&n);
    while(i<=n){
        f=f*i;
        i=i+1;
    }
    printf("factorial of n = %d",f);

}