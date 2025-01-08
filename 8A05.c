#include<stdio.h>
void main()
{
    int n;
    int i=1;
    int even=0;
    int odd =0;
   
    while(i<=10){
    printf("Enter value of n =    ");
    scanf("%d",&n);
        
        if(n%2==0){
            even++; 
        }
        else{
            odd++;
        }
        i++;
    }
    printf("even =%d\n",even);
    printf("odd =%d\n",odd);

}