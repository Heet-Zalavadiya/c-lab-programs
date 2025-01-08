#include<stdio.h>
void main()
{
    int a[3][3];
    int b[3][3];
    int i;
    int j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter elements of array a[%d][%d]:    \n", i, j);
            scanf("%d", &a[i][j]);
        }
        for (j = 0; j < 3; j++)
        {
            printf("Enter elements of array b[%d][%d]:    \n", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("Addition of matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}