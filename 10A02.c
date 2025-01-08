#include<stdio.h>
void main()
{
    float n;
    float i;
    float count=0;
    float sum=0;
    float Avg;
    char ch;
    while(1)
    {
        printf("Enter value of n =      ");
        scanf("%f",&n);
        sum=sum+n;
        count=count+1;
        printf("y to continue and n to terminate\n");
        scanf(" %c",&ch);
        if (ch=='n'|| ch=='N')
        {
            break;
        
        }
        
    }
    Avg=sum/count;
    printf("sum=%f\nAvg=%f",sum,Avg);
}