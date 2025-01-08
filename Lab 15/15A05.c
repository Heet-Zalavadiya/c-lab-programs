#include<stdio.h>
#include<string.h>
void main()
{
    char s1[100];
    printf("Enter string :     ");
    gets(s1);
    printf("string length is %d\n",strlen(s1));
    printf("Entered string is :");
    puts(s1);
}