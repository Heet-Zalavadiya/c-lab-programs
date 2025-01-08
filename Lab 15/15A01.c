#include<stdio.h>
void main()
{
    int a[5];
    int copya[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter value elements of array :     ");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        copya[i]=a[i];
    }
    for ( i = 0; i < 5; i++)
    {
        printf("copy[%d] = %d\n",i,copya[i]);
    }
    
    
}