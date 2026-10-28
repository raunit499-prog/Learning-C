#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  printf("Raunit Singh\t1000030627\n");
  int i, n, j = 0;
  {

    printf("Enter the number of rows you want:");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
      j = 0;
      while (j < i) {
        printf("*");
        j++;
      }
      printf("\n");
      i++;
    }
  }
  return 0;
}
