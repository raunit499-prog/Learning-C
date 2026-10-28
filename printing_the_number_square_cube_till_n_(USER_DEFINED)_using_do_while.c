#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int n, i = 1;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  printf("Number\tSquare\tCube\n");

  do {
    printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    i++;
  } while (i <= n);
  return 0;
}
