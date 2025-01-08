#include<stdio.h>
void main()
{
    int size;
    int i;
    int j;
    int count=0;
    int c;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int a[size];
    int f[size];
    for ( i = 0; i < size; i++)
    {
        printf("Enter elements of array:  ");
        scanf("%d",&a[i]);
        f[i]= -1;
    }
    for ( i = 0; i < size; i++)
    {
        c=1;

        if (f[i]!=0)
        {
            for ( j = i+1; j < size; j++)
            {
                if (a[i]==a[j])
                {
                    c++;
                    f[j]=0;
                }
                
            }
            
        }
        if (c>1)
        {
            count=count+1;
            f[i]=c;
        }
        
        
    }
   if (count>0)
    {
        printf("Total duplicate element is %d\n",count);
    }
}