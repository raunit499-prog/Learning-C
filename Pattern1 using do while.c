#include <stdio.h>

int main(void)
{
  int i = 1, n, j;

  printf("Enter the number of rows you want: ");
  scanf("%d", &n);

  do
  {
    j = 1;
    do
    {
      printf("*");
      j++;
    } while (j <= i);
    printf("\n");
    i++;
  } while (i <= n);

  return 0;
}
