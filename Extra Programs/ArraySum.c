#include<stdio.h>
void main(){
    int a[10],i,sum=0;
    float avg;
    for(i=0;i<10;i++){
        printf("Enter number: ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        sum=sum+a[i];
    }
    avg=sum/10.0;
    printf("Avg=%f",avg);
}