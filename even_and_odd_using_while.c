#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int n, i = 1;

  while (i <= 5) {
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
      printf("%d is an even number\n", n);
    } else {
      printf("%d is a odd number\n", n);
    }
    i++;
  }
  return 0;
}