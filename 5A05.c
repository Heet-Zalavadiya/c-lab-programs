#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter value of a,b,c =  ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b){
        if (a>c){
            printf("a is greater = %d",a);
        }
        else {
            printf("c is greater = %d",c);
        }
    }
    else if (b>a){
        if (b>c){
            printf("b is greater = %d",b);
        }
        else{
            printf("c is greater = %d",c);
        }
    }
}