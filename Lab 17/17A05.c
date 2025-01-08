#include<stdio.h>
void main()
{
    int n;
    int *ptr;
    int i;
    printf("Enter size of array :   ");
    scanf("%d",&n);
    int a[n];
    ptr=a;
    for ( i = 0; i < n; i++)
    {
        printf("Enter value of array element %d: ",i+1);
        scanf("%d", ptr + i);
    }
    for ( i = 0; i < n; i++)
    {
        printf("Element in array %d: %d \n",i+1,*(ptr+i));
    }
}