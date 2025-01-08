#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[100];int i,flag=0,flag2=0;
    printf("Enter a string 1: ");
    gets(str1);//Darshan
    printf("Enter a string 2: ");
    gets(str2);//Darshan
    int len1=0,len2=0;
    /*Finding a length of 2 string */
    for(len1=0;str1[len1]!='\0';len1++);
    for(len2=0;str2[len2]!='\0';len2++);
    int max=(len1>len2)?len1:len2;
    for(i=0;i<max;i++){
        if(str1[i]!=str2[i]){
            flag=1;
            if(str1[i]>str2[i]){
                flag2=1;
            }
            break;
        }
    }
    if(flag==1){
        printf("Both strings are not equal.\n");
        if(flag2==1){
            printf("String 1 is bigger.");
        }
        else{
            printf("String 2 is bigger.");
        }
    }
    else{
        printf("Both strings are equal.");
    }
}