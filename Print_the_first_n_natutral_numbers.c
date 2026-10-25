#include <stdio.h>
void main()
{
  int n, i = 1;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while (i <= n)
  {

    printf(" %d\n", i);
    i++;
  }
}
