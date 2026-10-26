#include <stdio.h>

int main(void)
{
  int n, i, j;

  printf("Enter number of rows: ");
  scanf("%d", &n);

  i = 1;
  do
  {
    j = 1;
    do
    {
      if (j <= n - i)
        printf(" ");
      else
        printf("*");
      j++;
    } while (j <= n);
    printf("\n");
    i++;
  } while (i <= n);

  return 0;
}
