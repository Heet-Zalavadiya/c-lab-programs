#include <stdio.h>
#include <string.h>
void main()
{
  char s1[10], s2[10], n;
  printf("Enter string 1: ");
  gets(s1);
  printf("Enter string 2: ");
  gets(s2);
  printf("enter number:");
  scanf("%d", &n);
  switch (n)
  {
  case 1:
    printf("strcmp\n");
    if (strcmp(s1, s2) == 0)
    {
      printf("string are same\n");
    }
    else
    {
      printf("string are not same\n");
    }
    break;
  case 2:
    printf("strcpy\n");
    printf("%s", strcpy(s1, s2));
    break;
  case 3:
    printf("strcat\n");
    printf("%s", strcat(s1, s2));
    break;
  case 4:
    printf("strlen\n");
    printf("%d\n", strlen(s2));

    printf("%d", strlen(s1));
    break;
  case 5:
    printf("strrev\n");
    printf("%s\n", strrev(s2));

    printf("%s", strrev(s1));
    break;
  case 6:
    printf("strlwr\n");
    printf("%s\n", strlwr(s1));

    printf("%s", strlwr(s2));
    break;
  case 7:
    printf("strupr\n");
    printf("%s\n", strupr(s1));

    printf("%s", strupr(s2));
    break;

  default:
    printf("Wrong number");
    break;
  }
}