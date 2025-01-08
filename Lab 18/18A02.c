#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
void main()
{
    int a;
    int b;
    printf("Enter value of a :     ");
    scanf("%d",&a);
    printf("Enter value of b :      ");
    scanf("%d",&b);
    
    int maxvalue=max(a,b);
    int minvalue=min(a,b);

    printf("Maximum is %d\n",maxvalue);
    printf("Minimun is %d\n",minvalue);
}
int max(int a,int b){
    if (a>b)
    {
        return a;
    }
    else{
        return b;
    }
}
int min(int a,int b){
    if(a>b)
    {
        return b;
    }
    else{
        return a;
    }
}