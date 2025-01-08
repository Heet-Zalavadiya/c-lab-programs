#include<stdio.h>
#include<string.h>
void main(){
  char str1[100],str2[100],ch;
  int i=0,j=0,n;
  printf("Enter a string 1: ");
  gets(str1);//Hello
  printf("Enter a string 2: ");
  gets(str2);//Hello
  printf("Enter number of char: ");
  scanf("%d",&n);
  for(i=0;str2[i]!='\0'&&i<n;i++){
    str1[i]=str2[i];
  }
  str1[i]='\0';
  printf("%s",str1);

}