#include<stdio.h>
void main()
{
    int num1;
    int num2;
    int i;
    int max;
    printf("Enter value of num1 and num2 =  ");
    scanf("%d",&num1);
    scanf("%d",&num2);
    
    if(num1<num2){
        i=num1;
        max=num2;
    }
    else{
        i=num2;
        max=num1;
    }
    while(i<max){
        if(i%2==0){
            printf("%d\n",i);
        }
        i=i+1;

    }

} 