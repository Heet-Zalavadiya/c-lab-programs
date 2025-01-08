#include<stdio.h>
void main(){
    int num;
    int t1=0;
    int t2=1;
    int nextTerm;
    int i;
    printf("Enter numbers of Terms:    ");
    scanf("%d",&num);
    printf("Fibonacci Series: %d, %d" , t1, t2);
    for ( i = 3; i <=num; ++i)
    {
        nextTerm=t1+t2;
        printf(", %d" ,nextTerm);
        t1=t2;
        t2=nextTerm;
        
    }
    


  
    
    

}