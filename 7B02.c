#include<stdio.h>
void main()
{
    char ch;
    printf("Enter value of alphabet :    ");
    scanf("%c",&ch);
    ((ch >='a' && ch <='z')||(ch >='A' && ch <='Z'))?printf("input is alphabet"):printf("input is not alphabet");
}