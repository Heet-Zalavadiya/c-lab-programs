/*          1
         1  2
      1  2  3
   1  2  3  4
1  2  3  4  5
*/
#include<stdio.h>
void main(){
    int i,j,n,diff,temp;
    printf("How many Rows? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        //for space
        for(j=1;j<=n-i;j++){
            printf("  "); // 2 space 
        }
        //printing a number 
        for(j=1;j<=i;j++){
            printf("%2d",j);
        }
        printf("\n");
    }
}