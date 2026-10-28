#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  printf("Raunit Singh\t1000030627\n");
  int m, n, sum = 0;

  printf("Enter the value of m: ");
  scanf("%d", &m);

  printf("Enter the value of n: ");
  scanf("%d", &n);

  int i = m;
  while (i <= n) {
    sum += i;
    i++;
  }

  printf("Sum of numbers from %d to %d = %d\n", m, n, sum);
  return 0;
}
