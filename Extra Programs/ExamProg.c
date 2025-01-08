#include<stdio.h>
struct Car{
    char mname[100];
    char modelName[100];
    float price;
};
void printCarDetails(struct Car b[],int size);
void main(){
    struct Car c[3];
    int i=0;
    for(i=0;i<3;i++){
        printf("\nEnter car %d's detail:\n",i+1);
        printf("Enter Company Name: ");
        scanf("%s",c[i].mname);
        printf("Enter Model Name: ");
        scanf("%s",c[i].modelName);
        printf("Enter a price: ");
        scanf("%f",&c[i].price);
    }
    printCarDetails(c,3);
}
void printCarDetails(struct Car b[],int size){
    int i=0;
    printf("\n Printing a data of car which has >1000000 Price: \n");
    for(i=0;i<size;i++){
        if(b[i].price>=1000000){
            printf("%s\n",b[i].mname);
            printf("%s\n",b[i].modelName);
        }
    }
}