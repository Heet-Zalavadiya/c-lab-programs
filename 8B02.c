#include<stdio.h>
void main()
{
    int i;
    int num1=100;
    int num2=200;
    int max;
    i=num1;
    max=num2;
    while(i<max){
    if(i%7==0 && (i%5==1||i%5==2||i%5==3||i%5==4||i%5==5||i%5==6||i%5==7||i%5==8||i%5==9)){
        printf("%d\n",i);
    }
    i=i+1;
    }
}