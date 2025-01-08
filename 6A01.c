#include<stdio.h>
void main()
{
    int a;
    int b;
    int c;
    int choice;
    printf("Enter no a and b =    ");
    scanf("%d %d",&a,&b);
    printf("Enter choice no. = ");
    scanf("%d",&choice);
    if(choice == 1){
        c=a+b;
        printf("c is %d",c);
    }
    if(choice == 2){
        c=a*b;
        printf("c is %d",c);
    }
    if(choice == 3){
        c=a-b;
        printf("c is %d",c);
    }
    if(choice == 4){
        c=a/b;
        printf("c is %d",c);
    }

}