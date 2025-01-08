#include<stdio.h>
void main()
{
    int a;
    printf("Enter value of a= ");
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("Day is monday");
        break;
        case 2:
        printf("Day is tuesday");
        break;
        case 3:
        printf("Day is wednesday");
        break;
        case 4:
        printf("Day is thusday");
        break;
        case 5:
        printf("Day is friday");
        break;
        case 6:
        printf("Day is saturday");
        break;
        case 7:
        printf("Day is sunday");
        break;
        default:
        printf("Invalid input");
        break;
    }

}