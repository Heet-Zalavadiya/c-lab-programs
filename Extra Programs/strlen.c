#include<stdio.h>
void main()
{
    char s[10];
    printf("Enter a name =        ");
    gets(s);

    int leng,i;
    leng = 0;
    i = 0;
    for ( i = 0; s[i]!='\0'; i++)
    {
        leng++;
    }
    printf("Length of string is %d",leng);
    
}