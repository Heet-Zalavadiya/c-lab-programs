#include<stdio.h>
void main(){
    int i,even=0,odd=0;
    int size;
    printf("Enter size of an Array =      ");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }   
    printf("%d %d",even,odd);
}