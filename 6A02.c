#include<stdio.h>
void main()
{
    int basic_salary;
    float gross;
    printf("Enter value of basic salary =  ");
    scanf("%d",&basic_salary);
    if(basic_salary>=10000 && basic_salary <20000){
        gross=basic_salary+basic_salary*0.20+basic_salary*0.80;
        printf("gross= %f",gross);
    }
    if(basic_salary>=20000 && basic_salary <30000){
        gross=basic_salary+basic_salary*0.25+basic_salary*0.90;
        printf("gross= %f",gross);
    }
    if(basic_salary>=30000){
        gross=basic_salary+basic_salary*0.30+basic_salary*0.90;
        printf("gross= %f",gross);
    }
}