#include<stdio.h>
void main()
{
    int b;
    int size;
    int i;
    int j;
    printf("Enter value of size :       ");
    scanf("%d",&size);
    int a[size];
    for ( i = 0; i < size; i++)
    {
        printf("Enter value of elements :     ");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < size; i++)
    {
        for ( j=i+1; j < size; j++)
        {
            if (a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
             
        }
      
    }
    printf("Number in ascending order is : ");
    for ( i = 0; i < size; i++)
    {
        printf("%d\n",a[i]);
    }
    
}