#include<stdio.h>
void main()
{
    int size, i;
    printf("Enter size of an Array =      ");
    scanf("%d",&size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("Enter a value of number =    ");
        scanf("%d",&arr[i]);
    }
    printf("In normal order\n");
    for ( i = 0; i < size; i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("In reverse order\n");
    for ( i = size-1 ; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
    
}