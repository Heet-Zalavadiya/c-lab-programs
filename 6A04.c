#include<stdio.h>
void main()
{
  int a;
  int num;
  printf("Enter value of a:   ");
  scanf("%d",&a);
  num=a%10;
  if(num%2 == 0){
    printf("%d is even number",num);
  }
  else {
    printf("%d is odd number",num);
  }
}