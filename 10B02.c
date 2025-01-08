#include<stdio.h>
void main()
{
    int i=2;
    int num;
    int flag = 0;
    printf("Enter value of num =      ");
    scanf("%d",&num);
    while (i<num)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("Number is prime");
    }
    else
    {
      printf("Number is not prime");
    }

    
    

    
    
}
