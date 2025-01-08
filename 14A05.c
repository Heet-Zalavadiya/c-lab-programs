#include<stdio.h>
void main(){
    
    int height;
    int weight;
    int count=0;
    int i;
    int a[5];
    for ( i = 0; i < 5; i++)
    {
        printf("Enter value of height :    ");
        scanf("%d",&height);
        printf("Enter value of weight :     ");
        scanf("%d",&weight);
        if (170<height && 50>weight)
        {
            count=count+1;
        }
    }
    printf("%d\n",count);
}