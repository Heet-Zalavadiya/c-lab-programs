#include<stdio.h>
void main()
{
    int n;
    int i;
    int store;
    int remainder;
    int countrem;
    int count1=0;
    int count2=0;
    int count3=0;
    int count4=0;
    int count5=0;
    int count6=0;
    int count7=0;
    int count8=0;
    int count9=0;
    printf("Enter value of n :     ");
    scanf("%d",&n);
    for ( i = 0; n!=0; i++)
    {
        remainder=n%10;
        countrem=remainder;
        n=n/10;
        if (countrem==1)
        {
            
            count1=count1+1;
        }
        else if (countrem==2)
        {
            
            count2=count2+1;
        }
        else if (countrem==3)
        {
            
            count3=count3+1;
        }
        else if (countrem==4)
        {
            
            count4=count4+1;
        }
        else if (countrem==5)
        {
            
            count5=count5+1;
        }
        else if (countrem==6)
        {
            
            count6=count6+1;
        }
        else if (countrem==7)
        {
            
            count7=count7+1;
        }
        else if (countrem==8)
        {
            
            count8=count8+1;
        }
        else if (countrem==9)
        {
            
            count9=count9+1;
        }
        
        
        
    }
    printf("Frequency of input digit\n");
    printf("1=%d\n",count1);
    printf("2=%d\n",count2);
    printf("3=%d\n",count3);
    printf("4=%d\n",count4);
    printf("5=%d\n",count5);
    printf("6=%d\n",count6);
    printf("7=%d\n",count7);
    printf("8=%d\n",count8);
    printf("9=%d\n",count9);
    

}