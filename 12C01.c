#include<stdio.h>
void main()
{
    int i;
    int j;
    int num;
    int n;
    printf("Enter value of num :     ");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++){
        for ( j = 1; j <= n-i; j++)
        {
            printf(" ");
        }

     num=1;
     for ( j = 1; j <=i; j++)
     {
        printf("%d ",num);
        num=num*(i-j)/j;
     }
     printf("\n");
    }
    
}