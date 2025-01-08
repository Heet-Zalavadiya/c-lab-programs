#include<stdio.h>
// assuming both arrays dimensions are same
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
    printf("Multiplication of Matrix Print:\n");
     for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            int sum=0,k;
            for(k=0;k<row;k++){
                sum+=A[k][j]*B[i][k];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }
}