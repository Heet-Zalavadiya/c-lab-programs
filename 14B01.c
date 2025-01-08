#include<stdio.h>
void main()
{
    int a[5];
    int i;
    float sum=0;
    float Avg;
    float count=0;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter element of array =    ");
        scanf("%d",&a[i]);
        
    }
    for ( i = 0; i < 5; i++)
    {
        sum=sum+a[i];
    }
    
    Avg=(sum/5.0);
    printf("Average of number is %d\n",Avg);
    for ( i = 0; i < 5; i++)
    {
        if (a[i]>Avg)
        {
            count=count+1;
        }
        
    }
    printf("Number of elements higher than Avg is %d\n",count);
}