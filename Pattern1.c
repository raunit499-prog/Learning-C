#include <stdio.h>

int main() 
{
  printf("Raunit Singh\t1000030627\n");
  int i, n, j;

  printf("Enter the number of rows you want:");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) 
  {
    for (j = 1; j <= i; j++) 
    {
      printf("*");
    }
    printf(" \n");
  }
  return 0;
}
