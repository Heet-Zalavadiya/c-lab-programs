#include<stdio.h>
int array(int arr[],int size);
void main()
{
    int size;
    printf("Enter size of array:    ");
    scanf("%d",&size);
    int a[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter elements of array:    ");
        scanf("%d",&a[i]);
    }
    array(a,size);
}
int array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("Elements of array[%d]=%d\n",i,arr[i]);
    }
    
}