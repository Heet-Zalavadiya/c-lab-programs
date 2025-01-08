#include <stdio.h>
void main()
{
    int a[3][3];
    int i;
    int j;
    int postive = 0;
    int negative = 0;
    int zero = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter array element a[%d][%d]:    ", i, j);
            scanf("%d", &a[i][j]);
            if (a[i][j] > 0)
            {
                postive = postive + 1;
            }
            if (a[i][j] == 0)
            {
                zero = zero + 1;
            }
            if (a[i][j] < 0)
            {
                negative = negative + 1;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }
    printf("Positve number in given matrix = %d\n", postive);
    printf("Negative number in given matrix = %d\n", negative);
    printf("Numbers of zeros in given matrix = %d\n", zero);
}