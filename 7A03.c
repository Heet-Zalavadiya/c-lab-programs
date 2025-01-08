#include<stdio.h>
void main()
{
    float a;
    float b;
    float c;
    int choice;
    printf("Enter no a and b =    ");
    scanf("%f %f",&a,&b);
    printf("Enter choice no. = ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        c=a+b;
        printf("c is %f",c);
        break;
    
    case 2:
        c=a*b;
        printf("c is %f",c);
        break;
    
    case 3:
        c=a-b;
        printf("c is %f",c);
        break;

    case 4:
        c=a/b;
        printf("c is %f",c);
        break;
    }

}