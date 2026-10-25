#include <stdio.h>
void main()
{
  int n, i = 0;

  printf("Enter a positive integer: ");
  scanf("%d", &n);

  while (i <= n)
  {

    printf(" %d\n", i);
    i++;
  }
}