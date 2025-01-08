#include<stdio.h>
void main()
{
    int n;
    int digit;
    int reverse=0;
    printf("Enter any number =      ");
    scanf("%d",&n);
    int num = n;
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    if (num==reverse)
    { 
       printf("Number is palidrome = %d",num);
    }
    else{
        printf("Number is not palidrome");
    }

    
    
}