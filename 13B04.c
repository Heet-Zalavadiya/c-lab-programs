#include<stdio.h>
void main()
{
    int i,j,num;
    char ch ='A';
    for ( i = 1; i <=5; i++)
    {
        for ( j = 1; j<=i; j++)
        {
            if (i%2==0)
            {
              printf("  %c",ch);
              ch++;
            }
        
            
            if (i%2!=0)
            {
                printf("%3d",j);
            }
           
        }
        printf("\n");
        
    }
    
}