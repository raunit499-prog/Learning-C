#include <stdio.h>

int main(void)
{
  int n, i, j;

  printf("Enter number of rows: ");
  scanf("%d", &n);

  i = 1;
  while (i <= n)
  {
    j = 1;
    while (j <= n)
    {
      if (j <= n - i)
        printf(" ");
      else
        printf("*");
      j++;
    }
    printf("\n");
    i++;
  }

  return 0;
}
