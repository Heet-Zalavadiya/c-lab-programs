#include<stdio.h>
void main(){
    int row,col,i,j;
    printf("Enter a row value: ");
    scanf("%d",&row);
    printf("Enter a Col value: ");
    scanf("%d",&col);
    int arr[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter a value: ");
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matrix Print:\n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose Matrix Print:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}