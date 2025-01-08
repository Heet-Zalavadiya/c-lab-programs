#include<stdio.h>
void main()
{
    int i=1;
    int n;
    printf("Enter value of n =    ");
    scanf("%d",&n);
    do
    {
        if(i%2==1){
        printf(" %d is odd number\n",i);

    }
    i=i+1;
    
    } while (i<n);
    
}