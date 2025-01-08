#include<stdio.h>
#include<math.h>
void main()
{
  float a;
  int i=0;
  while(i<10){
    if(i<=9){
    printf("no=%d\n",i);
    a=sqrt(i);
    printf("sqrt=%0.2f\n",a);
    i=i+1;}
    
  }
  
}