#include<stdio.h>
void main(){
    int size,i;
    int max;
    printf("Enter a size of an Array: ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++){
        printf("Enter a value: ");
        scanf("%d",&arr[i]);
    }
//  a[0]  a[1]  a[2]  a[3]  a[4]
// -10     -12     -3    -44     -5

//largest=-10
    max=arr[0];
    for(i=0;i<size;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Largest Element is: %d",max);
}