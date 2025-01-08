#include <stdio.h>
void main()
{
    int row;
    int col;
    int i;
    int j;
    int sum = 0;
    printf("Enter value of row:     ");
    scanf("%d", &row);
    printf("Enter value of col:     ");
    scanf("%d", &col);
    int a[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter value of elements a[%d][%d]:      ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix is:\n");

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                printf("Diagonal elements are:");
                printf("%d\n", a[i][j]);
                sum = sum + a[i][j];
            }
        }
    }
    printf("sum of diagonal elements are:%d", sum);
}