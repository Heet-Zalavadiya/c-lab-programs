#include <stdio.h>
void main()
{
    int i;
    int j;
    int k;
    int count;
    int size;
    printf("Enter size of array:       ");
    scanf("%d", &size);
    int a[size];
    int duplicate[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter elements of array:  ");
        scanf("%d", &a[i]);
        duplicate[i] = -1;
    }
    printf("Entered elements are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < size; k++)
                {
                    a[k] == a[k + 1];
                }
                j--;
                size--;
            }
        }
    }
    printf("After deleting duplicate element the Array is:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", a[i]);
    }
}