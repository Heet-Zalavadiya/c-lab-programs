#include<stdio.h>
void main(){
    int a[6],i,even=0,odd=0;
    for(i=0;i<6;i++){
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }   
    printf("%d %d",even,odd);
}