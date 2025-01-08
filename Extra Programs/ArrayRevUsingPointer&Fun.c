#include<stdio.h>
void count(char str1[100],int *a,int *b,int *c);
void main(){
    char str[100];
    int uc=0,lc=0,dc=0;
    printf("Enter a string: ");
    gets(str);
    count(str,&uc,&lc,&dc);
    printf("%d %d %d",uc,lc,dc);
}
void count(char str1[100],int *a,int *b,int *c){
    int uc=0,lc=0,dc=0,i=0;
    for(i=0;str1[i]!='\0';i++){
        if(str1[i]>='A' && str1[i]<='Z'){
            uc++;
        }
        else if(str1[i]>='a' && str1[i]<='z'){
            lc++;
        }
        else if(str1[i]>='0' && str1[i]<='9'){
            dc++;
        }
    }
    *a=uc;
    *b=lc;
    *c=dc;
}