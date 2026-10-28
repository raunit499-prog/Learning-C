#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int n, i = 1, sum;

  sum = 0;
  while (i <= 10) {
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    i++;
    sum += n;
  }
  printf("The sum is = %d", sum);
  return 0;
}
