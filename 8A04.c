#include<stdio.h>
void main()
{
    int n;
    int i=1;
    int sum=0;
    printf("Enter value of n =   ");
    scanf("%d",&n);
    while(i<=n){
    sum=sum+i;
    i=i+1;}
    printf("%d",sum);

}