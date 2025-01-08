#include<stdio.h>
void main()
{
    int row;
    int col;
    int i;
    int j;
    int count=0;
    printf("Enter value of row:    ");
    scanf("%d",&row);
    printf("Enter value of col:    ");
    scanf("%d",&col);
    int a[row][col];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Enter value of elements a[%d][%d]:     ",i,j);
            scanf("%d",&a[i][j]);
            if (a[i][j]==0)
            {
                count=count+1;
            }
            
        }
        
    }
    printf("Matrix is:\n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    
    
    if (count>(row*col)/2)
    {
        printf("Matrix is sparse matrix");
    }
    else
    {
        printf("Matrix is not sparse matrix");
    }
    
}