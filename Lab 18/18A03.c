#include<stdio.h>
float SI(float principleamount,float rateofinterst,float timeperiod);
void main()
{
    float principleamount=0.0;
    float rateofinterst=0.0;
    float timeperiod=0.0;
    float si=0.0;
    printf("Enter value of principle amount :     ");
    scanf("%f",&principleamount);
    printf("Enter rate of interst :      ");
    scanf("%f",&rateofinterst);
    printf("Enter time period:     ");
    scanf("%f",&timeperiod);
    si= SI(principleamount,rateofinterst,timeperiod);
    printf("SI = %f",si);
}
float SI(float principleamount,float rateofinterst,float timeperiod){
    float si=0.0;
    si=(principleamount*rateofinterst*timeperiod)/100.0;
    return si;
}