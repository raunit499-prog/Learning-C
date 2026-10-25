#include <stdio.h>

void main()
{
  int n, i = 1, sum;

  sum = 0;
  while (i <= 10)
  {
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i++;
    sum += n;
  }
  printf("The sum is = %d", sum);
}
