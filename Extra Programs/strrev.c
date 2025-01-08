#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100],ch;
    int i,j=0,flag=0,count=0,count1=0;
    printf("Enter a string 1: ");
    gets(str1);
    int len1=strlen(str1);
    for(i=0;i<len1/2;i++){
        char ch=str1[i];
        str1[i]=str1[len1-i-1];
        str1[len1-i-1]=ch;
    }
    printf("%s",str1);

    
}