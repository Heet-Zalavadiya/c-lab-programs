#include<stdio.h>
void main()
{
    int unit;
    float bill;
    float totalbill;
    printf("Enter an Unit:  ");
    scanf("%d",&unit);
    if(unit<=50){
        bill=unit*0.50;
    }
    else if(unit<=150){
        bill=50*0.50+(unit-50)*0.75;
    }
    else if(unit<=250){
        bill=50*0.50+100*0.75+(unit-150)*1.2;

    }
    else if(unit>250){
        bill=50*0.50+100*0.75+100*1.2+(unit-250)*1.5;
    }
    totalbill=bill*0.20;
    printf("total bill = %f",totalbill);

}