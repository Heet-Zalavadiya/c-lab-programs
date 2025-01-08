#include<stdio.h>
void main()
{
    int num;
    int binary=0;
    int place=1;
    int remainder;
    printf("Enter value of num =      ");
    scanf("%d",&num);

    while (num>0)
    {
        remainder=num%2;
        binary=binary+remainder*place;
        num=num/2;
        place=place*10;
    }
    printf("%d",binary);

}

