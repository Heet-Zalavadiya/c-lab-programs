#include<stdio.h>
void main()
{
    char str[]="Hello, World";
    int len=0;
    char *ptr=str;
    while (*ptr!='\0')
    {
        len++;
        ptr++;
    }
    printf("Length=%d",len);
}