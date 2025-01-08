/*1
  2  2 
  3  3  3
  4  4  4  4
  5  5  5  5  5
*/
#include<stdio.h>
void main(){
    int i,j,n,diff,temp;
    printf("How many Rows? ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%2d",i);
        }
        printf("\n");
    }
}