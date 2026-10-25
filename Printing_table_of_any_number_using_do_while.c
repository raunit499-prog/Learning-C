#include <stdio.h>

void main()
{
  int n, i = 1;

  printf("Enter the number you want table of :");
  scanf("%d", &n);

  do
  {
    printf("%d X %d = %d\n", n, i, n * i);
    i++;
  } while (i <= 10);
}