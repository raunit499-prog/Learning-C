#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int n, i = 1, sum;

  sum = 0;
  do {
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i++;
    sum += n;
  } while (i <= 10);
  printf("The sum is = %d", sum);
  return 0;
}
