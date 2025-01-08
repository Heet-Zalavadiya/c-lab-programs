#include<stdio.h>
void main()
{
    float a;
    float b;
    float n1;
    float n2;
    float division;
    float quationt=0;
    printf("Enter value of a and b =     ");
    scanf("%f %f",&a,&b);
    if(a>b){
        n1=a;
        n2=b;
    }
    else{
        n1=b;
        n2=a;
    }
    while(n1>=n2){
        n1 = n1-n2;
        quationt=quationt+1;
    }
    printf("quationt = %0.2f\n",quationt);
    printf("remainder value = %0.2f\n",n1);


}