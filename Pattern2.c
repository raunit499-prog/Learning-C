#include <stdio.h>

int main(void) 
{
  printf("Raunit Singh\t1000030627\n");
  int n, i, j;

  printf("Enter number of rows: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) 
  {
    for (j = 1; j <= n; j++) 
    {
      if (j <= n - i)
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }

  return 0;
}
