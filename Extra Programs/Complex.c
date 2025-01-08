#include<stdio.h>
struct Complex{
    int real;
    int img;
};
struct Complex addComplex(struct Complex a,struct Complex b);
void main(){
    struct Complex c1,c2,c3;
    printf("Enter 1'st complex number(real, img): \n");
    scanf("%d %d",&c1.real,&c1.img);
    printf("Enter 2'nd complex number(real, img): \n");
    scanf("%d %d",&c2.real,&c2.img);
    c3=addComplex(c1,c2);
    printf("%d+%d i",c3.real,c3.img);

}
struct Complex addComplex(struct Complex a,struct Complex b){
    struct Complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}