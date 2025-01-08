#include<stdio.h>
void main()
{
    int a[3][3]={{1,11,22},{34,45,89},{56,66,4}};
    int *ptr[3];//This line creats a Pointer to an array of 3 integer 
    ptr[0]=*a;//assigning a first row address to ptr[0]
    ptr[1]=*(a+1);//assiging a second row address to ptr[1]
    ptr[2]=*(a+2);//assiging a third row address to ptr[2]
    //Row wise starting address will be printed 
    printf("%d ",ptr[0]);
    printf("%d ",ptr[1]);
    printf("%d ",ptr[2]);
    printf("\n");
    //Row wise first column element will be printed 
    printf("%d %d %d\n",*(ptr[0]),*(ptr[1]),*(ptr[2]));
    //Row wise second column element will be printed 
    printf("%d %d %d\n",*(ptr[0]+1),*(ptr[1]+1),*(ptr[2]+1));
    //Row wise third column element will be printed 
    printf("%d %d %d\n",*(ptr[0]+2),*(ptr[1]+2),*(ptr[2]+2));
}