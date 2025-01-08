#include<stdio.h>
void main()
{
    char ch='A';
    for ( ch = 33; ch < 127;  ch++)
    {
        printf("%d = %c\n",ch,ch);
    }
    

}