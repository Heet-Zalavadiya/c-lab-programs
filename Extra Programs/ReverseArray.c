#include<stdio.h>
void main(){
    int size,i;
    
    printf("Enter a size of an Array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter a value: ");
        scanf("%d",&arr[i]);
    }
//  a[0]  a[1]  a[2]  a[3]  a[4]
//   1      2     3    4     5

//   5      4     3    2     1
    for(i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1] =temp;
    }
        
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

}