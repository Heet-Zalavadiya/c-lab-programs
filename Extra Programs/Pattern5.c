/*          1
         1  2  3
      1  2  3  4  5
   1  2  3  4  5  6  7
1  2  3  4  5  6  7  8  9
*/
#include<stdio.h>
void main(){
    int i,j,n,diff,temp;
    printf("How many Rows? ");
    scanf("%d",&n);/*Focus only on row*/
    for(i=1;i<=n;i++){
        /*for space 1st row n-1 space, second row n-2 space hence 
        n-i, agad ni space important che last vadi nahi */
        for(j=1;j<=n-i;j++){
            printf("  "); // 2 space 
        }
        /*printing a number
        1st row 1 number printed, 2nd row 3 number, 3rd row 5 number 
        hence 2*i-1
        last vadi space print karvani jarror nathi */
        for(j=1;j<=2*i-1;j++){
            printf("%2d",j);
        }
        printf("\n");
    }
}