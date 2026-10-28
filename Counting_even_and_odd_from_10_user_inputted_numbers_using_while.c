#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int n, i = 1, even, odd;
  even = 0;
  odd = 0;

  while (i <= 10) {
    scanf("%d", &n);
    if (n % 2 == 0) {
      even += 1;
    } else {
      odd += 1;
    }
    i++;
  }
  printf("The total even numbers are %d\n", even);
  printf("The total odd numbers are %d", odd);
  return 0;
}