#include<stdio.h>
void main()
{
    int num;
    int sum=0;
    int i=1;
    int digit;
    printf("Enter value of num =         ");
    scanf("%d",&num);
    while(i<num){
        if (num%i==0){
            sum=sum+i;
        }
        i++;
    }
    if (sum==num)
    {
        printf("Number is perfect number %d",num);
    }
    else
    {
       printf("Number is not perfect number %d",num);
    }
    
    
}