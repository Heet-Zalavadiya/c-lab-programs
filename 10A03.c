#include<stdio.h>
void main()
{
    int i=2;
    int num;
    int count=0;
    printf("Enter value of number =       ");
    scanf("%d",&num);
    while(i<num){
        
        if (num%i==0)
        {
         count=count+1;
        }
        i=i+1;
    }
    
    
    if(count==0)
    {
        printf("Number is prime %d",num);
    }
    else{
        printf("Number is not prime %d",num);
    }
    
}