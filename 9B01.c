#include<stdio.h>
void main()
{
    int c=65;
    int i;
    while(c>=65 && c<91){
        printf("\t%c",c);
        c++;
    }
    c=97;
    while(c>=97 && c<123){
        printf("\t%c",c);
        c++;
    }
}