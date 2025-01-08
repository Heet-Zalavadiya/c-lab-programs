#include<stdio.h>
void main(){
    int row,col,i,j;
    printf("Enter a row value: ");
    scanf("%d",&row);
    printf("Enter a Col value: ");
    scanf("%d",&col);
    int A[row][col],B[row][col];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter a value: ");
            scanf("%d",&A[i][j]);
        }
    }
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("Enter a value: ");
            scanf("%d",&B[i][j]);
        }
    }
    printf("Addition of Matrix Print:\n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d ",A[i][j]+B[i][j]);
        }
        printf("\n");
    }
}