#include<stdio.h>
void main()
{
    float i;
    float j;
    float n;
    float e=0;
    float fact;
    printf("Enter value of n =      ");
    scanf("%f",&n);
    for ( i = 1; i <=n ; i++)
    {
        fact=1;
        for ( j = 1; j <= i ; j++)
        {
            fact=fact*j;
        }
        e=e+(1.0/fact);
    }
    printf("Estimated value of e = %f",e);
}
