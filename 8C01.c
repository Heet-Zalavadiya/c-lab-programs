#include<stdio.h>
void main()
{
    int square;
    int i=1;
    float countsquare;
    float count;
    float sum=0;
    float Avg;
    for (i = 1; i < 10; i++)
    {
        square=(i*i);
        if(square%10==9){
            countsquare=square;
            printf("%0.2f\n",countsquare);
            count=count+1;
            sum=sum+countsquare;
        }
    }
    printf("sum=%0.2f\n",sum);
    Avg=(sum/count);
    printf("Avg=%0.2f\n",Avg);

    
}

        

