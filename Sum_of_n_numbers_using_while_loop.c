#include <stdio.h>
void main()
{
  int n, sum = 0, i = 1;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  while (i <= n)
  {
    sum += i;
    i++;
  }
  printf("Sum of first %d natural numbers is %d", n, sum);
}