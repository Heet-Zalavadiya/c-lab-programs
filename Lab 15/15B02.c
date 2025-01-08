#include<stdio.h>
void main()
{
    int a[5];
    int i;
    int temp;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter elements of array:    ");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 5/2; i++)
    {
        temp=a[i];
        a[i]=a[5-i-1];
        a[5-i-1]=temp;
    }
    printf("Reversed array:");
    for ( i = 0; i < 5; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
   
    
    
}