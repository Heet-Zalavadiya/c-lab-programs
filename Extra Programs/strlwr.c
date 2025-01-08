#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100],ch;
    int i,j=0,flag=0,count=0,count1=0;
    printf("Enter a string 1: ");
    gets(str1);
    for(i=0;str1[i]!='\0';i++){
        str1[i]=str1[i]-32;
    }
    printf("%s",str1);

    
}