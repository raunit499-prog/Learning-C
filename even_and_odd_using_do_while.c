#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int n, i = 1;

  do {
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
      printf("%d is an even number\n", n);
    } else {
      printf("%d is a odd number\n", n);
    }
    i++;
  } while (i <= 5);
  return 0;
}