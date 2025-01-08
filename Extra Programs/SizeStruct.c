#include<stdio.h>
union ss
{
    int a;
    float b;
    double f;
    char ch[10];
};

void main(){
    union ss s1;
    printf("%d",sizeof(s1));
}
