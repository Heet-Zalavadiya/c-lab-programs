#include<stdio.h>
void main()
{
    char s1[100],s2[100];
    int i=0;
    int j=0;
    
    printf("Enter value of a string 1 :        ");
    gets(s1);
    printf("Enter value of a string 2 :         ");
    gets(s2);
    for ( i = 0; s1[i]!='\0'; i++)
    {
    }
    s1[i++] =' ';//For space between two concatenated words
    for ( j = 0; s2[j]!='\0'; j++)
    {
        s1[i++]=s2[j];
    }
    s1[i++]='\0';
    printf("The  Concatenated string is %s",s1);
    
    
}