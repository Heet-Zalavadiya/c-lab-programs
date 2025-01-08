#include<stdio.h>
void main()
{
    int Max1;
    int Max2;
    int size;
    int i;
    printf("Enter size of array:     ");
    scanf("%d",&size);
    int a[size];
    for ( i = 0; i < size; i++)
    {
        printf("Enter elements of array:      ");
        scanf("%d",&a[i]);
    }
    Max1=a[0];
    for ( i = 0; i < size; i++)
    {
        if (a[i]>Max1)
        {
            Max2=Max1;
            Max1=a[i];
        }
        else if (a[i]>Max2 && Max1>a[i])
        {
            Max2=a[i];
        }
        
    }
    printf("Max1=%d\n",Max1);
    printf("Max2=%d\n",Max2);

}