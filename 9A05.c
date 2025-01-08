#include<stdio.h>
void main(){
    int i=1;
    int n;
    printf("Enter value of n:   ");
    scanf("%d",&n);
    while(i<=n){
        if(n%i==0){
            printf("%d\n",i);
        }
        i++;
    }

}