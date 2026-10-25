#include <stdio.h>
void main()
{
  int i = 1, n;
  printf("Enter a positive integer:");
  scanf("%d", &n);
  do
  {
    printf("%d\n", i);
    i++;
  } while (i <= n);
}