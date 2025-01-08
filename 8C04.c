#include<stdio.h>
void main()
{
    int a;
    int b;
    int product = 0;
    printf("Enter a number to be multiplied :    ",a);
    scanf("%d",&a);
    printf("Number to be multiplied with :      ",b);
    scanf("%d",&b);
    while(b!=0){
        product = product + a;
        b=b-1;
    }
    printf("Multiplication of a amd b is %d",product);
}