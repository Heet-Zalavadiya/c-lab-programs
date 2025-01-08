#include<stdio.h>
void main(){
    FILE *f1;
    f1=fopen("abc.txt","r");
    if(f1==NULL){
        printf("File doesn't exist");
    }
    char ch=getc(f1);
    while(ch!=EOF){
        printf("%c",ch);
        ch=getc(f1);
    }
}