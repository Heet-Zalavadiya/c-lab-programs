#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any chacter :   ");
    scanf("%c",&ch);
    if((ch >='a' && ch <='z')){
    printf("%c is lower case character",ch);}
    else if((ch >='A' && ch <='Z')){
    printf("%c is upper case character",ch);}
    else if((ch>='1' && ch <='9')){
    printf("%c is digit",ch);}
    else{
    printf ("%c is special character",ch);
    }

}