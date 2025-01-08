#include<stdio.h>
void main()
{
    int row;
    int col;
    int i;
    int j;
    printf("Enter value of row:    ");
    scanf("%d",&row);
    printf("Enter value of col:    ");
    scanf("%d",&col);
    int a[row][col];
    int b[row][col];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Enter elements of a[%d][%d]:     ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Enter elements of b[%d][%d]:     ",i,j);
            scanf("%d",&b[i][j]);
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            int sum=0,k;
            for ( k = 0; k < row; k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            printf(" %d",sum);
        }
        printf("\n");

    }

}

