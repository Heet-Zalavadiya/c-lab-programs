#include<stdio.h>
void main()
{
    int n;
    int reverse=0;
    int sum;
    int Firstdigit;
    int Lastdigit;
    int digit;
    printf("Enter value of n :          ");
    scanf("%d",&n);
    Lastdigit=n%10;
    printf("Last digit = %d\n",Lastdigit);
    while(n!=0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    Firstdigit=reverse%10;
    printf("First digit = %d\n",Firstdigit);
    sum=Firstdigit+Lastdigit;
    printf("sum=%d\n",sum);


    

}