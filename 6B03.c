#include<stdio.h>
void main()
{
    int side1;
    int side2;
    int side3;
    printf("Enter three sides of triangle =       ");
    scanf("%d %d %d",&side1,&side2,&side3);
    if(side1==side2 && side2==side3){
        printf("Triangle is equilateral triangle");
    }
    else if(side1==side2 || side2==side3 || side3==side1){
        printf("Triangle is isoceles triangle");
    }
    else{
        printf("Triangle is scalene triangle ");
    }

}