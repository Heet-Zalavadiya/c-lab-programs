/*1
  2  6 
  3  7  10
  4  8  11  13
  5  9  12  14  15
*/

#include<stdio.h>
void main(){
    int i,j,n,diff,temp;
    printf("How many Rows? ");
    scanf("%d",&n);
    /*1st column and 2nd column no diff n-1, 2nd and 3rd column no 
    n-2 and so on 
    jo 5 row hoi to 1st and 2nd column ma biji row ma
    2 pachi 6 differecne 4 no (n-1)
    3rd row ma 3 and 7 ma 4 no, pachi 10-7=3  so on*/
    for(i=1;i<=n;i++){
        printf("%3d",i); //row number print ahiya j karel che
        diff=n-1; //diff
        temp=i+diff;   
        /*ek var ochi lup farse*/
        for(j=1;j<i;j++){
            printf("%3d",temp);
            diff--;
            temp=temp+diff;
        }
        printf("\n");
    }
}