#include<stdio.h>
void main()
{
    int size,i,positive=0,negative=0;
    printf("Enter value of size =     ");
    scanf("%d",&size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
       printf("Enter value of number =     ");
       scanf("%d",&arr[i]);
    }
    for ( i = 0; i < size; i++)
    {
    if (arr[i]>=0)
    {
        positive=positive+1;
    }
    else 
    {
        negative=negative+1;
    }
    }
    printf("Positive number = %d\n",positive);
    printf("Negative number = %d\n",negative);
}                                         