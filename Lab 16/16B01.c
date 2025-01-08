#include<stdio.h>
void main()
{
    int row;
    int col;
    int i;
    int j;
    printf("Enter a value of row :   ");
    scanf("%d",&row);
    printf("Enter a value of col:    ");
    scanf("%d",&col);
    int a[row][col];
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("Enter array elements a[%d][%d]:     ",i,j);
            scanf("%d",&a[i][j]);
        }
        
    }
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf(" %d",a[j][i]);
        }
        printf("\n");
    }
    
}