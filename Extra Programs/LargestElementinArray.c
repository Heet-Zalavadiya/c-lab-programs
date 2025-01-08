#include<stdio.h>
void findLargestE(int b[],int size,int *x,int *y);
void main(){
    int size;
    printf("Enter Size: ");
    scanf("%d",&size);
    int a[size],i=0;
    for(i=0;i<size;i++){
        printf("Enter array Element: ");
        scanf("%d",&a[i]);
    }
    int index=0,max=0;
    findLargestE(a,size,&max,&index);
    printf("%d %d",max,index);
}
void findLargestE(int b[],int size,int *x,int *y){
    int i,max,index;
    max=b[0];
    index=0;
    for(i=0; i<size;i++){
        if(max<b[i]){
            max=b[i];
            index=i;
        }
    }
    *x=max;
    *y=index;
}