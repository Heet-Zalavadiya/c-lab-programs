#include<stdio.h>
void main()
{
    float a;
    float sub1;
    float sub2;
    float sub3;
    float sub4;
    float sub5;

    printf("Enter marks of sub 1,2,3,4 and 5 =     ");
    scanf("%f %f %f %f %f",&sub1,&sub2,&sub3,&sub4,&sub5);
    a=(float)((sub1+sub2+sub3+sub4+sub5)/500)*100;
    printf("a=%f \n",a);

    if(a>=70 && a<=100){
        printf("a got Distinction");
    }
    else if(a>60 && a<70){
        printf("a got First class");
    }
    else if(a>45 && a<=60){
        printf("a got Second class");
    }
    else if(a>35 && a<=45){
        printf("a got pass class");
    }
    else
    printf("a is fail");
}