/*  
1 2 3 4 5
  1 2 3 4 
    1 2 3 
      1 2 
        1
*/   

#include<stdio.h>
void main(){
    int i,j,n,diff,temp;
    printf("How many Rows? ");
    scanf("%d",&n);/*Focus only on row*/
    
    for(i=1;i<=n;i++){
        /*for space 1st row 0 space, second row 1 space
        3rd row has 2 space, and so on hence j<=i-1*/
        for(j=1;j<=i-1;j++){
            printf("  "); // s space 
        }
        for(j=1;j<=n-i+1;j++){
            printf("%2d",j);
        }
        printf("\n");
    }
}