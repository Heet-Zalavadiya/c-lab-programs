#include<stdio.h>
void main()
{
    int num;
    int divisor = 1;
    int Firstdigit;
    int Lastdigit;
    int digit;
    int temp;
    printf("Enter value of num :          ");
    scanf("%d",&num);
    temp=num;
    Lastdigit=temp%10;

    while (temp>=10)
    {
        temp=temp/10;
        divisor=divisor*10;
        
    }
    Firstdigit=temp;
    printf("numdigit is %d\n",num);
    printf("Firstdigit is %d\n",Firstdigit);
    printf("Lastdigit is %d\n",Lastdigit);
    printf("divisior digit is %d\n",divisor);
    

    int swappedNum = Lastdigit*divisor+(num%divisor-Lastdigit)+Firstdigit;
    printf("swapping First digit and Last digit of number input by user : %d\n",swappedNum);
    

}
