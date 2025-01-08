#include<stdio.h>
float max(float a,float b,float c);
void main()
{
    float a;
    float b;
    float c;
    printf("Enter value of a :      ");
    scanf("%f",&a);
    printf("Enter value of b :      ");
    scanf("%f",&b);
    printf("Enter value of c :      ");
    scanf("%f",&c);
    float Max= max(a,b,c);
    printf("Maximum of 3 floating point number: %f",Max);
}
float max(float e,float f,float g){
   float max=e>f?(e>g?e:g):(f>g?f:g);
   return max;
}
