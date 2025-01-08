#include<stdio.h>
void main()
{
    int size;
    int *ptr1;
    int *ptr2;
    printf("Enter size of array:       ");
    scanf("%d",&size);
    int a[size];
    int copya[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element of array:     ");
        scanf("%d",&a[i]);
    }
    ptr1=a;
    ptr2=copya;

    for (int i = 0; i < size; i++)
    {
        *(ptr2+i)=*(ptr1+i);
    }
    printf("copy array:\n ");
    for (int i = 0; i < size; i++)
    {
        printf("copya[%d]=%d \n",i,*(ptr2+i));
    }
}