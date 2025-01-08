#include<stdio.h>

struct Time{
    int hh;
    int mm;
    int ss;
};
struct Time addTime(struct Time a,struct Time b);
void main(){
    struct Time t1,t2,t3;
    printf("Enter Time 1's Details: \n");
    printf("Enter hh mm ss: ");
    scanf("%d %d %d",&t1.hh,&t1.mm,&t1.ss);
    printf("Enter Time 2's Details: \n");
    printf("Enter hh mm ss: ");
    scanf("%d %d %d",&t2.hh,&t2.mm,&t2.ss);
    t3=addTime(t1,t2);
    printf("%d %d %d",t3.hh,t3.mm,t3.ss);
}

struct Time addTime(struct Time a,struct Time b){
    struct Time c;
    c.hh=a.hh+b.hh;
    c.mm=a.mm+b.mm;
    c.ss=a.ss+b.ss;
    return c;
}