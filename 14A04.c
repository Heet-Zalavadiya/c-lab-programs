#include<stdio.h>
void main()
{
    int Max;
    int Min;
    float Sum = 0;
    float Avg;
    int i;
    int size;
    int count=0;
    printf("Enter size of array =        ");
    scanf("%d",&size);
    int a[size];
    for ( i = 0; i < size; i++)
    {
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    Max=a[0];
    for ( i = 0; i < size; i++)
    {
        if (Max<a[i])
        {
            Max=a[i];
        }
    }
    Min=a[0];
    for ( i = 0; i < size; i++)
    {
        if (Min>a[i])
        {
            Min=a[i];
        }
    }

    for(i=0;i<size;i++)
    {
        Sum=Sum+a[i];
        count=count+1;
    }

    Avg=(Sum/count);

    printf("Avg=%f\n",Avg);
    printf("Sum=%f\n",Sum);
    printf("Max=%d\n",Max);
    printf("Min=%d\n",Min);
}
    
