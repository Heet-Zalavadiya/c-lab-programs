#include<stdio.h>
void main()
{
    int var;
    printf("Enter value of var :   ");
    scanf("%d",&var);
    int *ptr=&var;
    printf("%d %d",ptr,*ptr);

}