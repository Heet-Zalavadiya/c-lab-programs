#include<stdio.h>
void main()
{
    int num1;
    int num2;
    int remainder;
    int t1;
    int t2;
    int hcf;
    int lcm;
    
    printf("Enter value of num1 =         ");
    scanf("%d",&num1);
    printf("Enter value of num2 =         ");
    scanf("%d",&num2);
    t1=num1;
    t2=num2;
    while (t2!=0 )
    {
        remainder = t1%t2;
        t1 = t2;
        t2 = remainder;
    }
    hcf=t1;
    lcm=(num1*num2)/hcf;
    printf("hcf=%d\n",hcf);
    
    printf("lcm=%d\n",lcm);
}