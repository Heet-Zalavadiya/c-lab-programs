#include<stdio.h>
void main()
{
    int digit;
    int reverse=0;
    int num;
    printf("Enter value of num =      ");
    scanf("%d",&num);
     while(num!=0){
        digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    while(reverse!=0){
        digit=reverse%10;
        printf("%d ",digit);
        reverse=reverse/10;
    }
}