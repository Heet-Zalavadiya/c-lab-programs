#include<stdio.h>
void main(){
    int i;
    int a[10];
    int count=0;
    for ( i = 0; i < 10; i++)
    {
        printf("Enter value of array elements :       ");
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        if (a[i]%3==0)
        {
            count=count+1;
        }
        
    }
    printf("Number of elemnts divisible by 3 = %d",count);
}