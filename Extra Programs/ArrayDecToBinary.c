#include<stdio.h>
void main(){
    int bin[32],n,i,rem;
    printf("Enter an integer: ");
    scanf("%d",&n);
    for(i=0;i<=31;i++){
        bin[i]=0;
    }
    for(i=0;n!=0;i++){
        rem=n%2;
        bin[i]=rem;
        n=n/2;
    }
    for(i=31;i>=0;i--){
        printf("%d",bin[i]);
    }
}