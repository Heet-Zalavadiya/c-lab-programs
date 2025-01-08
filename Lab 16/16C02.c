#include<stdio.h>
void main()
{
    int row;
    int col;
    int i;
    int j;
    printf("Enter value of row:     ");
    scanf("%d",&row);
    printf("Enter value of col:     ");
    scanf("%d",&col);
    int a[row][col];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Enter value of elements a[%d][%d]:       ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }

    printf("Upper triangular matrix:\n");

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            if (i>j)
            {
                printf(" 0");
            }
            else{
                printf(" %d",a[i][j]);
            }
            
        }
        printf("\n");
    }
    
    
}