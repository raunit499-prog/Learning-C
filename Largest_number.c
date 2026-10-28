#include <stdio.h>

int main() {
  printf("Raunit Singh\t1000030627\n");
  int a, b, largest;

  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  largest = (a > b) ? a : b;

  printf("Largest number = %d\n", largest);

  return 0;
}
