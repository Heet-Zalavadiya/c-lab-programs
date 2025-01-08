#include <stdio.h>
void main()
{
    int a[5];
    int i;
    int searcha[1];
    int found = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Enter value of array element =      ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < 1; i++)
    {
        printf("Enter value of search element =      ");
        scanf("%d", &searcha[i]);
    }
    for (i = 0; i < 5; i++)
    {
        if (searcha[0] == a[i])
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
    {
        printf("Search element is found = %d", searcha[0]);
    }
    else
    {
        printf("Search element is not found %d", searcha[0]);
    }
}