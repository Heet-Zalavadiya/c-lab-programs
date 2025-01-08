#include<stdio.h>
void main()
{
    int i,j,num=1;
    for ( i = 1; i <= 5; i++)
    {
        if (i%2!=0)
        {
            num=1;
        }
        else{
            num=0;
        }
        for ( j=1; j <= i; j++)
        {
            printf("%2d",num);
            if (num==0)
            {
                num=1;
            }
            else{
                num=0;
            }
        
        }
        printf("\n");
        
        
    }
    
}