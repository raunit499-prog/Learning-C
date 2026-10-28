#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int n, i = 1;

  printf("Enter the number you want table of :");
  scanf("%d", &n);

  while (i <= 10) {
    printf("%d X %d = %d\n", n, i, n * i);
    i++;
  }
  return 0;
}