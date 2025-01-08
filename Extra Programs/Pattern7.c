/*           *
          *     *
       *           *
    *                 *
 *  *  *  *  *  *  *  *  *
*/

#include<stdio.h>
void main(){
    int i,j,n,diff,temp;
    printf("How many Rows? ");
    scanf("%d",&n);/*Focus only on row*/
    

    for(i=1;i<=n;i++){
        /*for space 1st row n-1 space, second row n-2 space hence 
        n-i, agad *ni space important che last vadi nahi */
        for(j=1;j<=n-i;j++){
            printf("   "); // 3 space 
        }
        /*for first value of j and last value of j print * 
         use pattern5 prog as reference ema 1st row ma khali 1 ni jagya ye * print kariye
         2nd row ma khali 1 and 3 ni jagya ye * print kariye and 3rd row ma 
         1 and 5 ni jagya ye * print Kariye*/
        for(j=1;j<=2*i-1;j++){
            /*last row ma badha ma * hence i==n hoi tyare hamesha * */ 
            if(j==1||j==2*i-1 ||i==n){
                printf(" * ");
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
}