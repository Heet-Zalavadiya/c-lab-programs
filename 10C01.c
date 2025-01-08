#include<stdio.h>
#include<math.h>
void main()
{
    int num,originalNum,remainder,n=0;
    float result = 0;
    printf("Enter value of number =        ");
    scanf("%d",&num);
    originalNum=num;
    while (originalNum!=0)
    {
        originalNum=originalNum/10;
        ++n;
    }
    originalNum=num;

    while (originalNum!=0)
    {
        remainder=originalNum%10;
        result=result+pow(remainder,n);
        originalNum=originalNum/10;
    }
    if ((int)result==num)
    {
        printf("%d is an Armstrong number.\n",num);
    }
    else{
        printf("%d is not an Armstrong number.\n",num);
    }
    

    

}