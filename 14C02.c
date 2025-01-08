#include<stdio.h>
void main()
{
    int n;
    int i;
    int size;
    int max_value;
    printf("Enter maximun value in sequence:    ");
    scanf("%d",&max_value);
    printf("Enter size of array:     ");
    scanf("%d",&size);
    int sequence[size];
    for ( i = 0; i < size; i++)
    {
        printf("Enter element of sequence :    ");
        scanf("%d",&sequence[i]);
    }
    //a flag array to mark numbers found in given sequence
    int found[max_value+1];//An array to keep track on numbers from 1 to max_value 
    for ( i = 0; i <= max_value; i++)
    {
        found[i]=0;
    }
    for ( i = 0; i < size; i++)
    {
        found[sequence[i]]=1;
    }
    printf("Missing elements in sequence are:");
    for ( i = 1; i <=max_value; i++)
    {
        if (found[i]==0)
        {
            printf("%d ",i);
        }
        
    }
    printf("\n");

}