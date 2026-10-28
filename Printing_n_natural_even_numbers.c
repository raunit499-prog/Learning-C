#include <stdio.h>
int main()
{
	printf("Raunit Singh\t1000030627\n");
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
	return 0;
}
