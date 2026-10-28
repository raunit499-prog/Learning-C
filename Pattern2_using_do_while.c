#include <stdio.h>

int main(void) {
  printf("Raunit Singh\t1000030627\n");
  int n, i, j;

  printf("Enter number of rows: ");
  scanf("%d", &n);

  i = 1;
  do {
    j = 1;
    do {
      if (j <= n - i)
        printf(" ");
      else
        printf("*");
      j++;
    } while (j <= n);
    printf("\n");
    i++;
  } while (i <= n);

  return 0;
}
