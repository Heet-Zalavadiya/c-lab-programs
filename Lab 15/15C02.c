#include<stdio.h>
void main()
{
    int size;
    int n;
    int pos;
    int i;
    int value;
    printf("Enter size of array :      ");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d elements in ascending order:\n",size);
    for ( i = 0; i < size; i++)
    {
        printf("Elements %d:  ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Enter value to be inserted:");
    scanf("%d",&value);
    for ( i = size-1; i >=0 && a[i]>value; i--)
    {
        a[i+1]=a[i];
    }
    a[i+1]=value;
    size++;
    printf("Array after insertation:\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");

}