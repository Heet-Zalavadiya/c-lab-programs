#include <stdio.h>
void main()
{
    int a[5];
    int i;
    int j;
    int temp;
    for (i = 0; i < 5; i++)
    {
        printf("Enter elements of array:    ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < 5 - 1; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            printf("Comparing a[%d]=%d and a[%d]=%d\n", i, a[i], j, a[j]);
        }
        if (a[i] > a[j])
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            printf("swap values : temp =%d ,a[%d]=%d,a[%d]=%d\n", temp, i, a[i], j, a[j]);
        }
    }
}