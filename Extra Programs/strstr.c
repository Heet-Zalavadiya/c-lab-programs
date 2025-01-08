#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100],ch;
    int i,j=0,flag=0,count=0,count1=0;
    printf("Enter a string 1: ");
    gets(str1);
    printf("Enter a string 2: ");
    gets(str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(i=0;i<len1;){
        j=0;
        count=0;
        for(;str1[i]==str2[j];){
            count++;
            i++;
            j++;
        }
        if(count==len2){
            flag=1;
            break;
        }
        else{
            i++;
        }
    }
    if(flag==1){
        printf("%s",str1+i-len2);
    }
    

    
}