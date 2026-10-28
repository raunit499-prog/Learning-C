#include <stdio.h>
int main() {
  printf("Raunit Singh\t1000030627\n");
  int i = 1, n;
  printf("Enter a positive integer:");
  scanf("%d", &n);
  do {
    printf("%d\n", i);
    i++;
  } while (i <= n);
  return 0;
}