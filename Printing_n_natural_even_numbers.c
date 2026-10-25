#include <stdio.h>
void main()
{
  int n, i = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while (i <= n * 2)
  {
    if (i % 2 == 0)
    {
      printf(" %d\n", i);
    }
    i++;
  }
}
