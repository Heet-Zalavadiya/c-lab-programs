#include<stdio.h>
void main()
{
    int student[20][2];
    int rollno;
    int marks;
    int i;
    int j;
    for ( i = 0; i < 20; i++)
    {
        printf("Enter rollno of student %d :    ",i+1);
        scanf("%d",&student[i][0]);
        printf("Enter marks of student %d :      ",i+1);
        scanf("%d",&student[i][1]);
    }
    printf("\nRollno.\tMarks\n");
    for ( i = 0; i < 20; i++)
    {
        printf("%d\t%d\n",student[i][0],student[i][1]);
    }
    
}