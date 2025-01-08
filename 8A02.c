#include<stdio.h>
void main()
{
    int i=1;
    int n;
    printf("Enter value of n =   ");
    scanf("%d",&n);
    while(i<n){
    if(i%2!=0){
        printf(" %d is odd number\n",i);

    }
    i=i+1;
    }

}